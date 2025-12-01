/*  final version
   - Grove Vision AI V2 (UART)
   - Edge Impulse audio inference (XIAO ESP32S3)
   - DFRobotDFPlayerMini playback (random files: /01 honeybee, /02 boar)
   - SD logging: /log.csv (detailed) and /events.csv (timestamp,event,locality)
   - RTC DS3231 for timestamps
   - Meshtastic UART (Serial2) send
   - EEPROM probe at 0x50 -> if present, switch to BOAR mode (razor add-on attached)
   - BOAR deterrent: randomized strobes + ultrasonic PWM
*/

/* === LIBRARIES === */
#include <Wire.h>
#include <SPI.h>
#include <SD.h>
#include <LoRa.h>
#include <RTClib.h>

#include <Seeed_Arduino_SSCMA.h>     // Grove Vision AI V2 (UART API)
#include "DFRobotDFPlayerMini.h"    // DFPlayer library
#include <SoftwareSerial.h>

#define EIDSP_QUANTIZE_FILTERBANK   0
#include <EleTect_inferencing.h>    // Edge Impulse inferencing glue
#include <I2S.h>

/* === HARDWARE / PIN CONFIG - EDIT THESE TO MATCH YOUR WIRING === */

// DFPlayer SoftwareSerial pins (example)
#define DFPLAYER_SOFT_RX 10 // connect to DFPlayer TX
#define DFPLAYER_SOFT_TX 11 // connect to DFPlayer RX

// SD card for logging
#define SD_CS_PIN 5       // change to match wiring

// LoRa pins (example)
#define LORA_SS    18
#define LORA_RST   14
#define LORA_DIO0  26
#define LORA_FREQ  915E6  // change to your region: 433E6 / 868E6 / 915E6

// I2S pins for audio capture (change if your mic uses different pins)
#define I2S_BCK_PIN  -1
#define I2S_WS_PIN   42
#define I2S_DIN_PIN  41
#define I2S_DOUT_PIN -1

// Meshtastic UART pins (change to your wiring)
const int MESHTASTIC_RX_PIN = 16; // XIAO RX (connect to Wio TX)
const int MESHTASTIC_TX_PIN = 17; // XIAO TX (connect to Wio RX)
const unsigned long MESHTASTIC_BAUD = 38400; // must match Serial Module baud

/* === BOAR-DETERRER / EEPROM ADD-ON PINS & SETTINGS ===
   NOTE: change pins below if they conflict with your wiring.
   I chose default pins that minimize collision with the other defaults above.
*/
#define EEPROM_I2C_ADDR 0x50   // typical 24LC02 address
#define EEPROM_CHECK_INTERVAL 5000UL // ms: re-check EEPROM presence

// Strobe/ultrasonic pins - change if these collide with other devices
const int STROBE1_PIN = 32;   // MOSFET gate for strobe 1
const int STROBE2_PIN = 33;   // MOSFET gate for strobe 2
const int ULTRA_PIN   = 25;   // PWM pin for ultrasonic tweeter

// ultrasonic PWM settings (ledc)
const int ULTRA_FREQ = 25000; // 25 kHz (tweak for your tweeter)
const int ULTRA_CHANNEL = 1;  // ledc channel (use a free channel)
const int ULTRA_RESOLUTION = 8; // 8-bit duty (0..255)
const int ULTRA_MAX_DUTY = 200; // maximum duty (tune to hardware)

// deterrent timing & randomness
const unsigned long BOAR_DETERR_COOLDOWN_MS = 15000UL;   // cooldown between deterrent triggers
const unsigned long DETERR_MIN_MS = 5000UL;  // min duration of deterrent (ms)
const unsigned long DETERR_MAX_MS = 12000UL; // max duration of deterrent (ms)

/* === GENERAL DEFINITIONS / FILES === */
#define LOG_CSV    "/log.csv"
#define EVENTS_CSV "/events.csv"

#ifdef ESP32
  #include <HardwareSerial.h>
  HardwareSerial atSerial(0); // Grove Vision UART (keeps your original approach)
#else
  #define atSerial Serial1
#endif

SSCMA AI;                         // Vision AI object
SoftwareSerial mySoftSerial(DFPLAYER_SOFT_RX, DFPLAYER_SOFT_TX);
DFRobotDFPlayerMini myDFPlayer;

RTC_DS3231 rtc;
File logFile;

/* DFPlayer folders / defaults */
const uint8_t ELEPHANT_FOLDER = 1; // honeybee sounds in /01/
const uint8_t BOAR_FOLDER      = 2; // crackers/predator in /02/
const uint8_t NUM_FILES_PER_FOLDER = 20; // fallback

const int SCORE_THRESHOLD = 80;   // vision score threshold (0..100)
const unsigned long PLAYBACK_COOLDOWN_MS = 10000UL; // cool-down for audio/vision playback
unsigned long lastElephantAt = 0;
unsigned long lastBoarAt     = 0;

/* EDGE IMPULSE AUDIO BUFFERS (adapted) */
typedef struct {
    int16_t *buffer;
    uint8_t buf_ready;
    uint32_t buf_count;
    uint32_t n_samples;
} inference_t;

static inference_t inference;
static const uint32_t sample_buffer_size = 2048;
static signed short sampleBuffer[sample_buffer_size];
static bool debug_nn = false;
static bool record_status = true;

const float CONFIDENCE_THRESHOLD = 0.60f; // audio classification threshold

/* STATE FLAGS */
bool sd_ok = false;
bool rtc_ok = false;
bool meshtastic_ok = false;
bool eepromPresent = false;
unsigned long lastEEPROMCheck = 0;
unsigned long lastBoarDeterrentAt = 0;

/* FORWARD DECLARATIONS */
String detectVision();
String detectAudio();
void playRandomFromFolder(uint8_t folderNumber);
void logEvent(DateTime ts, const String &visionLabel, const String &audioLabel, const String &action, const String &soundFile, const String &loraStatus);
bool sendLoRa(const String &visionLabel, const String &audioLabel, const String &action);
String timestampNow();
void appendEvent(const String &timestamp, const String &event);
void meshtastic_begin();
void sendMeshtastic(const char *eventName);

/* BOAR deterrent helpers */
bool probeEEPROM();                 // probe I2C EEPROM presence
void updateModeFromEEPROM();        // set mode based on probe
void runBoarDeterrent();            // start randomized deterrent
void runStrobePattern(int onMs, int offMs, int repeats, bool alternate);
void runRandomSingleStrobe(int count, int minMs, int maxMs);

/* === AUDIO CAPTURE HELPERS (Edge Impulse) === */
static void audio_inference_callback(uint32_t n_bytes)
{
    for(int i = 0; i < (n_bytes >> 1); i++) {
        inference.buffer[inference.buf_count++] = sampleBuffer[i];
        if(inference.buf_count >= inference.n_samples) {
            inference.buf_count = 0;
            inference.buf_ready = 1;
        }
    }
}

static void capture_samples(void* arg) {
  const int32_t i2s_bytes_to_read = (uint32_t)arg;
  size_t bytes_read = i2s_bytes_to_read;
  while (record_status) {
    esp_i2s::i2s_read(esp_i2s::I2S_NUM_0, (void*)sampleBuffer, i2s_bytes_to_read, &bytes_read, 100);
    if (bytes_read <= 0) {
      ei_printf("Error in I2S read : %d", bytes_read);
    } else {
      if (bytes_read < i2s_bytes_to_read) {
        ei_printf("Partial I2S read");
      }
      for (int x = 0; x < i2s_bytes_to_read/2; x++) {
        sampleBuffer[x] = (int16_t)(sampleBuffer[x]) * 8;
      }
      if (record_status) {
        audio_inference_callback(i2s_bytes_to_read);
      } else {
        break;
      }
    }
  }
  vTaskDelete(NULL);
}

static bool microphone_inference_start(uint32_t n_samples)
{
    inference.buffer = (int16_t *)malloc(n_samples * sizeof(int16_t));
    if(inference.buffer == NULL) {
        return false;
    }
    inference.buf_count  = 0;
    inference.n_samples  = n_samples;
    inference.buf_ready  = 0;
    ei_sleep(100);
    record_status = true;
    xTaskCreate(capture_samples, "CaptureSamples", 1024 * 32, (void*)sample_buffer_size, 10, NULL);
    return true;
}

static bool microphone_inference_record(void)
{
    while (inference.buf_ready == 0) {
        delay(10);
    }
    inference.buf_ready = 0;
    return true;
}

static int microphone_audio_signal_get_data(size_t offset, size_t length, float *out_ptr)
{
    numpy::int16_to_float(&inference.buffer[offset], out_ptr, length);
    return 0;
}

static void microphone_inference_end(void)
{
    if (inference.buffer) {
        ei_free(inference.buffer);
        inference.buffer = NULL;
    }
}

/* === VISION (UART-based) === */
String detectVision() {
  if (!AI.invoke(1, false, false)) {
    auto &boxes = AI.boxes();
    for (int i = 0; i < boxes.size(); i++) {
      int score = boxes[i].score;
      if (score > SCORE_THRESHOLD) {
        String label = boxes[i].label;
        label.toLowerCase();
        label.trim();
        if (label == "elephant" || label.indexOf("eleph") >= 0) {
          Serial.printf("{ \"elephant_detected\": %d }\n", score);
          return "elephant";
        } else if (label == "boar" || label == "wildboar" || label.indexOf("boar") >= 0) {
          Serial.printf("{ \"boar_detected\": %d }\n", score);
          return "wildboar";
        } else {
          Serial.printf("{ \"%s_detected\": %d }\n", label.c_str(), score);
          return label;
        }
      }
    }
  }
  return "none";
}

/* === AUDIO DETECTION WRAPPER === */
String detectAudio() {
  if (!microphone_inference_record()) {
    ei_printf("ERR: Failed to record audio...\n");
    return "none";
  }
  signal_t signal;
  signal.total_length = EI_CLASSIFIER_RAW_SAMPLE_COUNT;
  signal.get_data = &microphone_audio_signal_get_data;
  ei_impulse_result_t result = { 0 };
  EI_IMPULSE_ERROR r = run_classifier(&signal, &result, debug_nn);
  if (r != EI_IMPULSE_OK) {
    ei_printf("ERR: Failed to run classifier (%d)\n", r);
    return "none";
  }
  int pred_index = -1;
  float pred_value = 0.0f;
  for (size_t ix = 0; ix < EI_CLASSIFIER_LABEL_COUNT; ix++) {
    if (result.classification[ix].value > pred_value) {
      pred_index = ix;
      pred_value = result.classification[ix].value;
    }
  }
  if (pred_index < 0 || pred_value < CONFIDENCE_THRESHOLD) {
    ei_printf("No confident detection (best: %d = %f)\n", pred_index, pred_value);
    return "none";
  }
  const char *label = result.classification[pred_index].label;
  ei_printf("DETECTED (audio): %s (%.2f)\n", label, pred_value);
  return String(label);
}

/* === DFPlayer helper === */
void playRandomFromFolder(uint8_t folderNumber) {
  int fileCount = myDFPlayer.readFileCountsInFolder(folderNumber);
  if (fileCount <= 0) fileCount = NUM_FILES_PER_FOLDER;
  int fileIndex = random(1, fileCount + 1);
  int vol = 28 + (random(0, 3)); // 28-30
  if (vol > 30) vol = 30;
  myDFPlayer.volume(vol);
  Serial.print("Playing folder ");
  Serial.print(folderNumber);
  Serial.print(" file ");
  Serial.print(fileIndex);
  Serial.print(" at volume ");
  Serial.println(vol);
  myDFPlayer.playFolder(folderNumber, fileIndex);
}

/* === DETAILED LOGGING === */
void logEvent(DateTime ts, const String &visionLabel, const String &audioLabel, const String &action, const String &soundFile, const String &loraStatus) {
  if (!sd_ok) {
    Serial.println("SD not available, skipping detailed log");
    return;
  }
  File f = SD.open(LOG_CSV, FILE_APPEND);
  if (!f) {
    Serial.println("Failed to open " LOG_CSV);
    return;
  }
  char timestr[32];
  snprintf(timestr, sizeof(timestr), "%04d-%02d-%02d %02d:%02d:%02d",
           ts.year(), ts.month(), ts.day(), ts.hour(), ts.minute(), ts.second());
  String line = String(timestr) + "," + visionLabel + "," + audioLabel + "," + action + "," + soundFile + "," + loraStatus + "\n";
  f.print(line);
  f.close();
  Serial.println("Logged (detailed): " + line);
}

/* === EVENTS CSV (timestamp,event,locality) === */
String timestampNow() {
  if (rtc_ok) {
    DateTime now = rtc.now();
    char buf[32];
    snprintf(buf, sizeof(buf), "%04d-%02d-%02d %02d:%02d:%02d",
             now.year(), now.month(), now.day(),
             now.hour(), now.minute(), now.second());
    return String(buf);
  } else {
    unsigned long s = millis() / 1000;
    char buf[32];
    snprintf(buf, sizeof(buf), "uptime_%lus", s);
    return String(buf);
  }
}

void appendEvent(const String &timestamp, const String &event) {
  if (!sd_ok) {
    Serial.println("SD not available, skipping events.csv append");
    return;
  }
  File f = SD.open(EVENTS_CSV, FILE_WRITE); // append mode
  if (!f) {
    Serial.println("Error opening " EVENTS_CSV " for append");
    return;
  }
  String safeEvent = event;
  safeEvent.replace(",", " ");
  f.print(timestamp);
  f.print(",");
  f.print("\"");
  f.print(safeEvent);
  f.print("\"");
  f.print(",");
  f.println("kothamangalam");
  f.close();
  Serial.print("Logged (event): ");
  Serial.print(timestamp);
  Serial.print(" , ");
  Serial.println(safeEvent);
}

/* === LoRa send === */
bool sendLoRa(const String &visionLabel, const String &audioLabel, const String &action) {
  String payload = String("{\"t\":\"") + String(millis()) + String("\",\"v\":\"") + visionLabel + String("\",\"a\":\"") + audioLabel + String("\",\"act\":\"") + action + String("\"}");
  LoRa.beginPacket();
  LoRa.print(payload);
  LoRa.endPacket();
  Serial.println("LoRa sent: " + payload);
  return true;
}

/* === Meshtastic helpers === */
void meshtastic_begin() {
  Serial2.begin(MESHTASTIC_BAUD, SERIAL_8N1, MESHTASTIC_RX_PIN, MESHTASTIC_TX_PIN);
  delay(50);
  meshtastic_ok = true;
  Serial.println("Meshtastic UART (Serial2) initialized.");
}

void sendMeshtastic(const char *eventName) {
  if (!meshtastic_ok) {
    Serial.println("Meshtastic not initialized, skip sending");
    return;
  }
  String ts = timestampNow();
  String payload = String("{\"loc\":\"kothamangalam\",\"time\":\"") + ts + String("\",\"event\":\"") + eventName + String("\"}");
  Serial.print("-> mesh: ");
  Serial.println(payload);
  Serial2.println(payload);
}

/* === EEPROM / BOAR DETERRER === */
bool probeEEPROM() {
  Wire.beginTransmission(EEPROM_I2C_ADDR);
  byte err = Wire.endTransmission();
  if (err == 0) {
    Serial.println("EEPROM detected on I2C (0x50) - razor add-on attached");
    return true;
  } else {
    //Serial.println("No EEPROM detected at 0x50");
    return false;
  }
}
void updateModeFromEEPROM() {
  // If EEPROM present, enable BOAR deterrent mode
  if (eepromPresent) {
    Serial.println("Mode: BOAR (deterrent enabled)");
  } else {
    Serial.println("Mode: ELEPHANT (deterrent disabled)");
  }
}

void runBoarDeterrent() {
  unsigned long now = millis();
  if (now - lastBoarDeterrentAt < BOAR_DETERR_COOLDOWN_MS) {
    Serial.println("Boar deterrent on cooldown — skip");
    return;
  }
  lastBoarDeterrentAt = now;

  unsigned long duration = random((int)DETERR_MIN_MS, (int)DETERR_MAX_MS + 1);
  unsigned long endAt = millis() + duration;
  int ultraDuty = random(150, ULTRA_MAX_DUTY + 1); // 150..MAX

  // Start ultrasonic tone
  ledcWrite(ULTRA_CHANNEL, ultraDuty);
  Serial.print("Ultrasonic ON, duty=");
  Serial.println(ultraDuty);

  // Strobe loop until duration elapsed
  while (millis() < endAt) {
    int pattern = random(0, 4);
    switch (pattern) {
      case 0:
        runStrobePattern(100, 100, 8, true);
        break;
      case 1:
        runStrobePattern(60, 60, 12, false);
        break;
      case 2:
        runRandomSingleStrobe(6, 30, 150);
        break;
      case 3:
        runStrobePattern(250, 150, 6, true);
        break;
    }
    delay(random(80,400));
  }

  // stop ultrasonic
  ledcWrite(ULTRA_CHANNEL, 0);
  Serial.println("Ultrasonic OFF");

  // ensure strobes off
  digitalWrite(STROBE1_PIN, LOW);
  digitalWrite(STROBE2_PIN, LOW);
  Serial.println("Boar deterrent sequence complete");
}

void runStrobePattern(int onMs, int offMs, int repeats, bool alternate) {
  for (int i = 0; i < repeats; ++i) {
    if (alternate) {
      if (i % 2 == 0) {
        digitalWrite(STROBE1_PIN, HIGH);
        digitalWrite(STROBE2_PIN, LOW);
      } else {
        digitalWrite(STROBE1_PIN, LOW);
        digitalWrite(STROBE2_PIN, HIGH);
      }
    } else {
      digitalWrite(STROBE1_PIN, HIGH);
      digitalWrite(STROBE2_PIN, HIGH);
    }
    delay(onMs);
    digitalWrite(STROBE1_PIN, LOW);
    digitalWrite(STROBE2_PIN, LOW);
    delay(offMs);
  }
}

void runRandomSingleStrobe(int count, int minMs, int maxMs) {
  int pin = (random(0, 2) == 0) ? STROBE1_PIN : STROBE2_PIN;
  for (int i = 0; i < count; ++i) {
    digitalWrite(pin, HIGH);
    delay(random(minMs, maxMs));
    digitalWrite(pin, LOW);
    delay(random(minMs, maxMs));
  }
}

/* === SETUP === */
void setup() {
  Serial.begin(115200);
  while (!Serial);

  Serial.println("Unified system booting...");

  // Wire (I2C)
  Wire.begin();

  // RTC init
  if (! rtc.begin()) {
    Serial.println("Warning: RTC module not found (continuing without RTC)");
    rtc_ok = false;
  } else {
    rtc_ok = true;
    if (rtc.lostPower()) {
      rtc.adjust(DateTime(F(_DATE), F(TIME_)));
    }
  }

  // SD init
  if (!SD.begin(SD_CS_PIN)) {
    sd_ok = false;
    Serial.println("Warning: SD card (logging) initialization failed. Continuing without SD.");
  } else {
    sd_ok = true;
    Serial.println("SD for logging initialized.");
    if (!SD.exists(LOG_CSV)) {
      File f = SD.open(LOG_CSV, FILE_WRITE);
      if (f) { f.println("timestamp,vision,audio,action,soundFile,lorastatus"); f.close(); }
    }
    if (!SD.exists(EVENTS_CSV)) {
      File f = SD.open(EVENTS_CSV, FILE_WRITE);
      if (f) { f.println("timestamp,event,locality"); f.close(); }
    }
  }

  // Seed random
  DateTime now = rtc_ok ? rtc.now() : DateTime(F(_DATE), F(TIME_));
  randomSeed((unsigned long)(now.unixtime()) ^ micros());

  // Probe EEPROM (razor add-on) initially and set mode
  eepromPresent = probeEEPROM();
  updateModeFromEEPROM();
  lastEEPROMCheck = millis();

  // Vision UART init
  #ifdef ESP32
    atSerial.begin(115200);
    AI.begin(&atSerial);
  #else
    atSerial.begin(115200);
    AI.begin(&atSerial);
  #endif
  Serial.println("Grove Vision AI V2 UART initialized.");

  // DFPlayer init
  mySoftSerial.begin(9600);
  delay(200);
  if (!myDFPlayer.begin(mySoftSerial)) {
    Serial.println("Unable to begin DFPlayer. Check wiring and SD card.");
  } else {
    Serial.println("DFPlayer online");
    myDFPlayer.volume(30);
  }

  // LoRa init
  SPI.begin();
  LoRa.setPins(LORA_SS, LORA_RST, LORA_DIO0);
  if (!LoRa.begin((long)LORA_FREQ)) {
    Serial.println("Warning: Starting LoRa failed! Check wiring and frequency.");
  } else {
    Serial.println("LoRa initialized.");
  }

  // Meshtastic UART init
  meshtastic_begin();

  // Setup BOAR deterrent pins & PWM
  pinMode(STROBE1_PIN, OUTPUT);
  pinMode(STROBE2_PIN, OUTPUT);
  digitalWrite(STROBE1_PIN, LOW);
  digitalWrite(STROBE2_PIN, LOW);
  ledcSetup(ULTRA_CHANNEL, ULTRA_FREQ, ULTRA_RESOLUTION);
  ledcAttachPin(ULTRA_PIN, ULTRA_CHANNEL);
  ledcWrite(ULTRA_CHANNEL, 0);

  // EDGE IMPULSE AUDIO INIT
  I2S.setAllPins(I2S_BCK_PIN, I2S_WS_PIN, I2S_DIN_PIN, I2S_DOUT_PIN, -1);
  if (!I2S.begin(PDM_MONO_MODE, 16000U, 16)) {
    Serial.println("Failed to initialize I2S!");
  } else {
    ei_printf("Starting audio recording/inference...\n");
    ei_sleep(1000);
    if (microphone_inference_start(EI_CLASSIFIER_RAW_SAMPLE_COUNT) == false) {
      ei_printf("ERR: Could not allocate audio buffer (size %d)\r\n", EI_CLASSIFIER_RAW_SAMPLE_COUNT);
    } else {
      ei_printf("Audio recording/inference ready.\n");
    }
  }

  Serial.println("Setup complete.");
}

/* === MAIN LOOP === */
unsigned long lastVisionMs = 0;
const unsigned long VISION_INTERVAL_MS = 500;
unsigned long lastAudioMs = 0;
const unsigned long AUDIO_INTERVAL_MS = 500;

void loop() {
  // Periodically check EEPROM presence so mode can change at runtime
  if (millis() - lastEEPROMCheck >= EEPROM_CHECK_INTERVAL) {
    bool nowPresent = probeEEPROM();
    if (nowPresent != eepromPresent) {
      eepromPresent = nowPresent;
      updateModeFromEEPROM();
    }
    lastEEPROMCheck = millis();
  }

  DateTime nowDT = rtc_ok ? rtc.now() : DateTime(F(_DATE), F(TIME_));
  String visionLabel = "none";
  String audioLabel  = "none";

  if (millis() - lastVisionMs >= VISION_INTERVAL_MS) {
    lastVisionMs = millis();
    visionLabel = detectVision();
  }

  if (millis() - lastAudioMs >= AUDIO_INTERVAL_MS) {
    lastAudioMs = millis();
    audioLabel = detectAudio(); // blocking while a frame is recorded
  }

  // Decide action and play/act accordingly
  String action = "none";
  String playedFile = "-";

  if (visionLabel.equalsIgnoreCase("elephant") || audioLabel.equalsIgnoreCase("elephant")) {
    if (millis() - lastElephantAt >= PLAYBACK_COOLDOWN_MS) {
      lastElephantAt = millis();
      action = "play_honeybee";
      playRandomFromFolder(ELEPHANT_FOLDER);
      playedFile = String("folder") + String(ELEPHANT_FOLDER);
      appendEvent(timestampNow(), "elephant detected");
    } else {
      Serial.println("Elephant detection but on cooldown (skip playback)");
    }
  } else if (visionLabel.equalsIgnoreCase("wildboar") || audioLabel.equalsIgnoreCase("wildboar") ||
             visionLabel.equalsIgnoreCase("boar") || audioLabel.equalsIgnoreCase("boar")) {
    bool didDeterrent = false;
    if (eepromPresent) {
      // razor add-on present -> BOAR mode: run deterrent (if cooldown passed)
      if (millis() - lastBoarDeterrentAt >= BOAR_DETERR_COOLDOWN_MS) {
        runBoarDeterrent(); // runs strobes + ultrasonic (includes its own cooldown update)
        didDeterrent = true;
        appendEvent(timestampNow(), "boar detected - deterrent run");
      } else {
        Serial.println("Boar detected but deterrent on cooldown; continuing with playback only");
      }
    }

    // Always also do sound playback (unless in your setup you want only deterrent)
    if (millis() - lastBoarAt >= PLAYBACK_COOLDOWN_MS) {
      lastBoarAt = millis();
      action = "play_cracker";
      playRandomFromFolder(BOAR_FOLDER);
      playedFile = String("folder") + String(BOAR_FOLDER);
      if (!didDeterrent) appendEvent(timestampNow(), "boar detected"); // log event if deterrent not run
    } else {
      Serial.println("Boar detection playback cooldown hit (skip playback)");
    }
  } else {
    // other audio detections (gunshot/saw/vehicle) from audioLabel
    if (audioLabel.equalsIgnoreCase("gunshot") || audioLabel.indexOf("gun") >= 0) {
      action = "gunshot_detected";
      appendEvent(timestampNow(), "gun detected");
    } else if (audioLabel.equalsIgnoreCase("saw")) {
      action = "saw_detected";
      appendEvent(timestampNow(), "saw detected");
    } else if (audioLabel.equalsIgnoreCase("vehicle")) {
      action = "vehicle_detected";
      appendEvent(timestampNow(), "vehicle detected");
    }
  }

  // send LoRa + Meshtastic if action happened
  String loraStatus = "none";
  if (action != "none") {
    bool ok = sendLoRa(visionLabel, audioLabel, action);
    loraStatus = ok ? "sent" : "failed";

    if (meshtastic_ok) {
      if (action == "play_honeybee") sendMeshtastic("elephant");
      else if (action == "play_cracker") sendMeshtastic("boar");
      else if (action == "gunshot_detected") sendMeshtastic("gun");
      else if (action == "saw_detected") sendMeshtastic("saw");
      else if (action == "vehicle_detected") sendMeshtastic("vehicle");
      else sendMeshtastic(action.c_str());
    }
  }

  // Detailed logging into /log.csv
  logEvent(nowDT, visionLabel, audioLabel, action, playedFile, loraStatus);

  delay(50);
}