/*
  Signage node for XIAO ESP32S3
  - Listens for "elephant" messages from EleTect node over LoRa
  - When elephant reported: blink a red signage LED (MOSFET-driven) for 40s after last report
  - Uses Grove Vision AI V2 to detect "vehicle" on road and reports vehicle events to EleTect node
    via LoRa  ]
  Pin & behavior configuration near top.
*/


#include <Arduino.h>
#include <Seeed_Arduino_SSCMA.h> // Grove Vision AI V2

// ----------------- CONFIGURATION -----------------
// Grove LoRa-E5 UART (connected to the Grove UART port)
const int LORA_RX_PIN = 16; // XIAO RX (connect to LoRaE5 TX)
const int LORA_TX_PIN = 17; // XIAO TX (connect to LoRaE5 RX)
const unsigned long LORA_BAUD = 9600UL; // typical default for LoRa-E5 AT firmware - change if your module uses different baud

// Grove Vision AI V2 UART - use a second serial port
#ifdef ESP32
  #include <HardwareSerial.h>
  HardwareSerial atSerial(0); // Grove Vision AI UART (example)
#else
  #define atSerial Serial1
#endif

Seeed_Arduino_SSCMA AI; // Grove Vision AI object

// LED signage output (MOSFET gate)
const int SIGN_LED_PIN = 25; // change to the MOSFET gate pin you connected

// Blink pattern configuration
const unsigned long SIGNAGE_TIMEOUT_MS = 40UL * 1000UL; // 40 seconds after last elephant message
const unsigned long BLINK_ON_MS = 300;   // LED on duration in blink cycle
const unsigned long BLINK_OFF_MS = 300;  // LED off duration in blink cycle

// Vision detection threshold and interval
const int VISION_SCORE_THRESHOLD = 80; // Grove Vision AI score threshold (0..100)
const unsigned long VISION_POLL_MS = 800; // how often to invoke vision model

// Vehicle reporting cooldown so we don't spam the network
const unsigned long VEHICLE_SEND_COOLDOWN_MS = 10000UL; // 10s between vehicle reports

// -------------------------------------------------

// State variables for signage
volatile unsigned long lastElephantMs = 0; // last time an elephant message was received
bool signageActive = false;

// Blink state machine
bool blinkStateOn = false;
unsigned long blinkStateChangeAt = 0;

// Vision timing
unsigned long lastVisionPollAt = 0;
unsigned long lastVehicleSentAt = 0;

// Serial buffer for incoming LoRa lines
String incomingLine = "";

// ---------- LoRa helper functions ----------

// Send a payload string via LoRa-E5 using AT command.
// NOTE: depending on your LoRa-E5 firmware you may need to change the exact AT command (AT+SEND, AT+MSG, etc.)
void sendLoRaPayload(const String &payload) {
  // A common AT-style uplink command may be: AT+SEND="payload"
  // Some firmwares accept AT+MSG or AT+SENDB (hex). Check your LoRa-E5 AT spec if this fails.
  String cmd = String("AT+SEND=\"") + payload + String("\"\r\n");
  Serial.print(">>> LoRa AT TX: ");
  Serial.print(cmd);
  Serial2.print(cmd);

  // Wait (non-blocking style: you can read responses in pollLoRaSerial())
}

// Parse incoming serial line(s) from Serial2 for elephant messages or LoRa AT responses
void processLoRaIncomingLine(const String &line) {
  String lower = line;
  lower.toLowerCase();

  // Debug print the raw line
  Serial.print("LoRa RX: ");
  Serial.println(line);

  // Many LoRa-E5 AT firmwares report downlink like:
  // +MSG: LEN:4, RSSI:-49, SNR:12
  // +MSG: RX "54455854"
  // or +RECV: PORT:8; RX:"payload"
  // So extract the quoted payload if present, otherwise inspect the whole line as text.
  String payload = "";

  // find patterns like RX "payload" or RX:"payload" or +RECV: ... "payload"
  int firstQuote = line.indexOf('"');
  int lastQuote = line.lastIndexOf('"');
  if (firstQuote >= 0 && lastQuote > firstQuote) {
    payload = line.substring(firstQuote + 1, lastQuote);
  } else {
    // no quotes -> maybe the firmware prints payload directly, so fallback to the whole line
    payload = line;
  }

  payload.trim();
  String payloadLower = payload;
  payloadLower.toLowerCase();

  // If payload contains the word "elephant", trigger signage
  if (payloadLower.indexOf("elephant") >= 0) {
    lastElephantMs = millis();
    signageActive = true;
    // Reset blink state so LED turns on immediately
    blinkStateOn = true;
    blinkStateChangeAt = millis();
    digitalWrite(SIGN_LED_PIN, HIGH);
    Serial.println("LoRa downlink contained 'elephant' -> signage activated (40s timeout).");
  } else {
    // Not an elephant message: print for debugging
    Serial.print("LoRa payload (ignored): ");
    Serial.println(payload);
  }
}

// Read any available bytes from Serial2 (LoRa-E5 UART) and accumulate lines
void pollLoRaSerial() {
  while (Serial2.available() > 0) {
    char c = (char)Serial2.read();
    if (c == '\r') continue;
    if (c == '\n') {
      String line = incomingLine;
      line.trim();
      incomingLine = "";
      if (line.length() > 0) {
        processLoRaIncomingLine(line);
      }
    } else {
      incomingLine += c;
      // Keep buffer bounded
      if (incomingLine.length() > 1024) {
        incomingLine = incomingLine.substring(incomingLine.length() - 512);
      }
    }
  }
}

// Non-blocking blink update; keep LED toggling while signageActive
void updateBlinkState() {
  if (!signageActive) {
    // ensure LED off
    if (blinkStateOn) {
      blinkStateOn = false;
      digitalWrite(SIGN_LED_PIN, LOW);
    }
    return;
  }

  unsigned long now = millis();
  if (blinkStateOn) {
    if (now - blinkStateChangeAt >= BLINK_ON_MS) {
      blinkStateOn = false;
      blinkStateChangeAt = now;
      digitalWrite(SIGN_LED_PIN, LOW);
    }
  } else {
    if (now - blinkStateChangeAt >= BLINK_OFF_MS) {
      blinkStateOn = true;
      blinkStateChangeAt = now;
      digitalWrite(SIGN_LED_PIN, HIGH);
    }
  }

  // Deactivate signage if timeout elapsed since last elephant message
  if (now - lastElephantMs >= SIGNAGE_TIMEOUT_MS) {
    signageActive = false;
    blinkStateOn = false;
    digitalWrite(SIGN_LED_PIN, LOW);
    Serial.println("Signage timeout expired -> signage deactivated.");
  }
}

// Vision: poll Grove Vision AI V2 and send vehicle messages via LoRa if vehicles found
void pollVisionAndReport() {
  if (!AI.invoke(1, false, false)) { // single invoke, no filter, no image
    for (int i = 0; i < AI.boxes().size(); i++) {
      int score = AI.boxes()[i].score;
      if (score > VISION_SCORE_THRESHOLD) {
        String label = AI.boxes()[i].label;
        String lower = label;
        lower.toLowerCase();
        if (lower.indexOf("vehicle") >= 0 || lower.indexOf("car") >= 0 || lower.indexOf("truck") >= 0 || lower.indexOf("bus") >= 0) {
          unsigned long now = millis();
          if (now - lastVehicleSentAt >= VEHICLE_SEND_COOLDOWN_MS) {
            lastVehicleSentAt = now;
            // Create a compact JSON payload; adjust fields as your backend expects
            String payload = String("{\"event\":\"vehicle\",\"score\":") + String(score) + String(",\"t\":") + String(now) + String("}");
            sendLoRaPayload(payload);
            Serial.printf("Vehicle detected (score %d) -> sent LoRa uplink\n", score);
          } else {
            Serial.println("Vehicle detected but on cooldown (skip sending).");
          }
        }
      }
    }
  } else {
    // AI.invoke returned non-zero according to earlier API — nothing or error
    // Serial.println("Vision: no boxes or invoke returned non-zero");
  }
}

void setup() {
  Serial.begin(115200);
  while (!Serial);

  Serial.println();
  Serial.println("Signage node (LoRa-E5) booting...");

  // LED pin
  pinMode(SIGN_LED_PIN, OUTPUT);
  digitalWrite(SIGN_LED_PIN, LOW);

  // init LoRa-E5 serial on Serial2 (hardware serial) with provided pins
  // Use Serial2 for XIAO ESP32S3 (change pins if you wired differently)
  Serial2.begin(LORA_BAUD, SERIAL_8N1, LORA_RX_PIN, LORA_TX_PIN);
  delay(50);
  Serial.println("LoRa-E5 UART (Serial2) initialized.");

  // Give LoRa module a moment and query AT to see if it responds
  delay(200);
  Serial2.print("AT\r\n"); // send AT test
  Serial.println("Sent 'AT' test to LoRa module - check Serial Monitor for response.");

  // init vision ai - wire to hardware serial or the same Serial? Use atSerial (HardwareSerial(0)) as in examples
  #ifdef ESP32
    atSerial.begin(115200);
    AI.begin(&atSerial); // Grove Vision AI using hardware serial 0
  #else
    atSerial.begin(115200);
    AI.begin(&atSerial);
  #endif
  Serial.println("Grove Vision AI v2 UART initialized.");

  lastElephantMs = 0;
  signageActive = false;
  blinkStateOn = false;
  blinkStateChangeAt = millis();

  lastVisionPollAt = 0;
  lastVehicleSentAt = 0;

  Serial.println("Setup complete.");
}

// Main loop: poll LoRa input, update blink state, and periodically poll vision
void loop() {
  // 1) Handle incoming LoRa messages from other nodes (downlinks or P2P test responses)
  pollLoRaSerial();

  // 2) Update blink state machine (non-blocking)
  updateBlinkState();

  // 3) Poll vision at intervals and optionally report vehicles
  if (millis() - lastVisionPollAt >= VISION_POLL_MS) {
    lastVisionPollAt = millis();
    pollVisionAndReport();
  }

  // small yield
  delay(10);
}