Introduction

<img width="584" height="555" alt="image" src="https://github.com/user-attachments/assets/2b3768e9-0758-4859-8eb0-c0033813d4c9" />

 
Communities in Kerala that live close to forest boundaries are seriously threatened by conflicts between humans and elephants. Tragic events that result in death, wild elephants have destroyed families and uprooted livelihoods. The number of human casualties were 3930 during an eight-year period which requires immediate response. "EleTect, " our endeavor, uses technology to facilitate early detection. At the margins of forests, nodes with TinyML capabilities keep watch and swiftly notify authorities. Our inventiveness doesn't stop there, though. We use the sound elephants naturally dread, the drone of honey bees as a harmless deterrent. "EleTect" seeks to alter the narrative by encouraging safer coexistence, reducing conflicts, and supporting conservation efforts—one in which people and elephants coexist together

Problem Statement

<img width="740" height="430" alt="image" src="https://github.com/user-attachments/assets/6fe8af1a-7ff6-4d33-8b6a-e87cf3d75366" />

 
Kerala, a state known for its lush forests and diverse wildlife, has faced a growing hazard :Human- Elephant Conflicts. Tragic incidents involving wild elephants turning deadly have occurred in areas such as Wayanad, Mananthavady, Munnar, and Idukki. An angry elephant crushed a tribal woman who was collecting honey in the wild. A man in Mananthavady lost his life as a result of a tusker breaking into a residential area. In the same way, another guy was attacked by an elephant on the Kannimala estate, which is close to Munnar. And an elephant in the Idukki district killed a 70-year-old woman. These tragic occurrences highlight how urgent it is to develop workable answers. With an emphasis on early detection, deterrents, and communication, the "Eletect" project seeks to protect lives, foster coexistence, and make a positive contribution to wildlife conservation. "Eletect" uses technology to identify elephants early in order to lessen the impact of these conflicts. Despite their majesty and strength, elephants have a startling weakness: they are afraid of some noises. The sound of bees buzzing is the most noticeable among them. The sound of bees is a surefire way for these gentle giants, despite their great strength, to become wary and even retreat. We may use this amazing natural occurrence to our advantage and the benefit of elephants as well as people. Using this knowledge in the "Eletect" project to develop a long-term resolution to conflicts between people and elephants. We carefully use honey bee noise to discourage elephants from approaching residential areas where people live. As a harmless deterrent, the buzzing noise guides elephants away without endangering them. It's a peaceful strategy that honors both species. At the boundaries of forests, nodes with TinyML capabilities are placed in a thoughtful way. Elephants are deterred and conflicts avoided by using deterrents like playing honey bees noises. Costeffective warnings are ensured through the use of LoRa or LoRaWAN technologies to promote communication between nodes and central systems. The project aims to reduce conflict, support conservation efforts, and encourage a safer cohabitation between humans and elephants. Scalability guarantees that the solution may be successfully implemented in various locations, safeguarding both human life and natural environments.


Solution Overview

<img width="740" height="416" alt="image" src="https://github.com/user-attachments/assets/f3d91c2e-cb06-46c8-b04b-beacd8ce2faf" />

 
By integrating the Seeed Studio Grove Vision AI V2 module and Xiao ESP32S3 Sense within the same enclosure, equipped with a speaker for emitting deterrent sounds, we've created a comprehensive system for elephant detection and mitigation. The Grove Vision AI V2 module runs a vision-based TinyML model using the onboard camera to detect elephants, while the ESP32S3 Sense employs a sound-based TinyML model to detect elephant presence through surrounding sounds. This combination not only ensures multiple layers of detection but also allows for real-time decision-making without relying on external servers, thanks to TinyML's efficiency and autonomy. Furthermore, by harnessing solar power for all components, the system becomes self-sustainable, making it ideal for deployment in remote areas. The use of TinyML on low-power IoT devices not only minimizes energy consumption but also facilitates rapid response to detected events, such as activating deterrent measures like playing honeybee sounds to prevent elephants from entering human habitats. This holistic approach addresses the challenges of human-elephant conflicts by offering a sustainable, efficient, and effective solution.

<img width="740" height="365" alt="image" src="https://github.com/user-attachments/assets/a9f9e683-b935-403f-bcf5-1220c0fc8f81" />

 
This is how we planned to deploy the project.We will be having multiple nodes in the elephant attack prone area which wil spot the elephant and produce deterrent sounds and also a master to which all the nodes will send the information through LoRa and The master willsend alert to the locals when an elephant is spotted near them and aslo will send all of the collected data to the base station from where we can monitor everything and study about the elephant behaviours and track the pattern of elephant sighting which can be used to improve the projects accuracy and make the life of those who are affected safer.
Some studies shows that elephants are afraid of bee sounds, so we decided to use it as the deterrent sound.

 <img width="740" height="370" alt="image" src="https://github.com/user-attachments/assets/e79a0649-fefb-4b22-8515-b6b3eb52dd75" />

🌿 Field Survey, Government Approval & Real-World Testing

To ensure that EleTect truly addresses on-ground challenges of human-elephant conflict (HEC), we conducted an extensive community survey and received official clearance for field testing from the Divisional Forest Officer (DFO) Kothamangalam, Mr. Varun Dalia IFS, and Forest Range Officer, Mr. Jaleel.

🧭 Survey & Study Area

Our field study focused on Kothamangalam and Kottapady, two regions of Kerala severely affected by elephant incursions. These locations lie at the foothills of the Western Ghats, close to dense forests — making them high-risk zones for HEC incidents.
Using household surveys, we collected firsthand data from residents to understand the real impact of conflicts. Out of 100 houses surveyed, 85 reported direct elephant attacks on residential or agricultural areas. Major losses identified included:
•	Crop damage: Reported by 66% of respondents
•	Injury or death of people: Reported by 38.4% of respondents
These alarming numbers reinforced the urgency of deploying a technological mitigation solution like EleTect.

 <img width="710" height="516" alt="image" src="https://github.com/user-attachments/assets/eece9b90-8922-4bef-ba75-1c0a62a89f83" />

 <img width="530" height="361" alt="image" src="https://github.com/user-attachments/assets/e181e6d6-e318-4125-b8a9-996dd6c69441" />


🏛️ Official Approval & Collaboration

We formally presented EleTect to the DFO office, Kothamangalam, and the Forest Range Office, discussing both its safety and community benefits. After technical evaluation, the forest department approved live field trials of the system within designated buffer zones around Kothamangalam and Kottapady.

<img width="530" height="296" alt="image" src="https://github.com/user-attachments/assets/0ba49ed2-4612-4312-9c6e-c00d34b01178" />

<img width="527" height="286" alt="image" src="https://github.com/user-attachments/assets/172a7af4-5012-48c6-8007-153d11060195" />


The department’s involvement ensured ethical deployment — protecting both wildlife and local communities — and validated EleTect as a practical conservation technology.
🌍 Field Testing & Early Results
Following approval, EleTect prototypes were installed along forest boundaries where elephant movement was frequent. Each node combined vision + audio TinyML with LoRa connectivity to relay detections in real time.
 
 <img width="501" height="273" alt="image" src="https://github.com/user-attachments/assets/0aee2a8a-952d-48a5-813e-ac6e523f9f77" />

Initial trials showed promising outcomes:

•	Locals reported fewer night-time elephant entries after installation.
•	Forest officers received consistent detection logs and LoRa alerts.
•	The bee-buzz deterrent effectively turned elephants away without harm.
The positive community feedback and official validation confirm that EleTect can be scaled safely for real-world conservation use.

🏆 IEEE IAS CMD Humanitarian Award 2025

<img width="1200" height="900" alt="image" src="https://github.com/user-attachments/assets/813c9770-d064-4b44-b00c-0d1f28515bc2" />


We are proud to share that EleTect was awarded the IEEE IAS CMD Humanitarian Project Award for the year 2025, in recognition of its innovative, impactful, and humanitarian approach to addressing the growing crisis of human–elephant conflict. As lives continue to be lost in forest-border regions, our team proposed a non-lethal, intelligent, and community-centered solution that fuses traditional tribal practices—such as the use of honeybee deterrents—with modern TinyML and edge AI technologies. EleTect demonstrates how technology can honor ecological wisdom while enhancing safety and peaceful coexistence.
 

<img width="960" height="1280" alt="image" src="https://github.com/user-attachments/assets/5f651c43-42ba-4ed7-853a-da46a18c6711" />


As part of this recognition, we were invited to present EleTect at the IEEE IAS Annual Meeting 2025 in Taiwan, where we showcased the system’s design, field deployments, and real-world impact to an international audience of researchers and engineers. The smart signage module, developed under EleTect 1.5, is a functional extension of the project, aimed at solving additional dimensions of the problem—including early detection, deterrence, communication, and public awareness.


Setting up the Nodes

 <img width="312" height="555" alt="image" src="https://github.com/user-attachments/assets/9e41fd1f-93bd-459b-833c-c1a3dea8cb96" />

We will deploy Nodes like this in the areas prone to elephant attacks.The node consists of :
•	Seeed studio Grove vision module V2 and OV5647 Camera
•	Seeed studio XIAO ESP32C3
•	Seeed studio XIAO ESP32S3 Sense
•	Seeed studio LoRa module
•	LoRa antenna
•	DFmini
•	Speaker(Which will produce Honey bee voice as deterrent sounds)
•	Solar panel, Solar battery charger and battery

Grove Vision AI Module V2 Overview

 <img width="740" height="555" alt="image" src="https://github.com/user-attachments/assets/05b3b3a2-441b-4fb4-a6dc-8def95004f6c" />

The Grove Vision AI Module V2 is a game-changer in the world of microcontroller-based AI vision modules. Powered by the ARM Cortex-M55, it outperforms regular ESP32 CAM-based boards while consuming significantly less power. After extensive testing, we found it to be exceptionally powerful and precise.
Comparison with Xiao ESP32-S3 Sense Board
In our tests, we compared the Grove Vision AI Module V2 with the Xiao ESP32-S3 Sense board. The difference is clear in the comparison video. The Grove Vision AI Module V2 delivers a higher frame rate while maintaining low power consumption, outperforming the Xiao ESP32-S3 Sense board.
The product arrives in standard Seeed Studio packaging. Inside the box, you'll find:
•	The Vision AI Module V2
•	A connecting wire
•	A sticker with a brief introduction to the module

Specifications

The module features the WiseEye2 HX6538 processor, which includes:
•	Dual Core ARM Cortex M55:
•	High Performance Core clocked at 400MHz
•	High Efficiency Core clocked at 150MHz
•	ARM Ethos-U55 microNPU (Neural Processing Unit) clocked at 400MHz
•	PUF (Physical Unclonable Function) hardware security
These features enable rapid AI and ML processing, making it ideal for computer vision projects requiring high frame rates and low power consumption.
Memory and Connectivity
•	60MB of onboard flash memory
•	PDM microphone
•	SD card slot
•	External camera connectivity
•	CSI port
•	Grove connector
•	Dedicated pinout for connecting Xiao series microcontroller boards from Seeed Studio
Software Compatibility
The module supports a wide range of AI models and frameworks:
•	SenseCraft AI models, including Mobilenet V1/V2, EfficientNet-Lite, YOLO v5/v8
•	TensorFlow and PyTorch frameworks
It is compatible with popular development platforms like Arduino, Raspberry Pi, and ESP dev boards, making it versatile for further development.
Applications
Our tests confirmed that the Grove Vision AI Module V2 is suitable for a variety of applications, including:
•	Industrial Automation: Quality inspection, predictive maintenance, voice control
•	Smart Cities:Device monitoring, energy management
•	Transportation: Status monitoring, location tracking
•	Smart Agriculture: Environmental monitoring
•	Mobile IoT Devices: Wearable and handheld devices
We can declare with confidence that the Grove Vision AI Module V2 delivers unmatched AI processing capabilities, flexible model support, a wealth of peripheral possibilities, high compatibility, and an entirely open-source environment after conducting rigorous testing. It is a great option for a variety of AI and computer vision applications because to its low power consumption and great performance.
Hardware Overview

<img width="740" height="463" alt="image" src="https://github.com/user-attachments/assets/ff10b444-4e1c-4941-9ef8-97491f91feb6" />

 
Refer this article, 2024 MCU AI Vision Boards: Performance Comparison, it is possible to confirm how powerful Grove Vision AI (V2) is when compared to Seeed Studio Grove - Vision AI Module, Espressif ESP-EYE, XIAO ESP32S3 and on an Arduino Nicla Vision. Do check it out.
Connecting to a CSI interface camera
Once you have the Grove Vision AI V2 and camera ready to go, then you can connect them via the CSI connection cable. When connecting, please pay attention to the direction of the row of pins and don't plug them in backwards.

 <img width="500" height="280" alt="image" src="https://github.com/user-attachments/assets/14d51ee8-1185-436b-a7db-048924221651" />

Boot / Reset / Flashed Driver
Boot
If you have used some unusual method that has caused the Grove Vision AI to not work properly at all (at the software level), then you may need to put the device into BootLoader mode to revive the device. Here is how to enter BootLoader mode.
Method 1
Please disconnect the connection cable between the Grove Vision AI and your computer, then press and hold the Boot button on the device without releasing it. At this time, please connect Grove Vision AI to your computer with a Type-C type data cable, and then release it again. At this point the device will enter BootLoader mode.

<img width="400" height="224" alt="image" src="https://github.com/user-attachments/assets/84406df0-7335-41fa-9070-d7fe0d13f4e8" />

 
Method 2
With the Grove Vision AI connected to your computer, you can enter BootLoader mode by pressing the Boot button and then quickly pressing the Reset button.

<img width="400" height="224" alt="image" src="https://github.com/user-attachments/assets/cf6989ab-8fd2-4b28-8038-5c6f9846e29e" />

 
Reset
If you're experiencing problems with device data suddenly not uploading or images getting stuck, you can try restarting your device using the Reset button.

<img width="500" height="280" alt="image" src="https://github.com/user-attachments/assets/728572c5-ac27-4e29-9d0e-f88d3ffeb13e" />

 
Driver
If you find that the Grove Vision AI V2 is not recognised after connecting it to your computer. Then you may need to install the CH343 driver on your computer. Here are some links to download and install the CH343 driver.
Windows Vendor VCP Driver One-Click Installer: CH343SER.EXE https://files.seeedstudio.com/wiki/grove-vision-ai-v2/res/CH343SER.EXE
Windows Vendor VCP Driver: CH343SER.ZIP https://files.seeedstudio.com/wiki/grove-vision-ai-v2/res/CH343SER.ZIP
Windows CDC driver one-click installer: CH343CDC.EXE https://files.seeedstudio.com/wiki/grove-vision-ai-v2/res/CH343CDC.EXE
Windows CDC driver: CH343CDC.ZIP https://files.seeedstudio.com/wiki/grove-vision-ai-v2/res/CH343SER.ZIP
macOS Vendor VCP Driver: CH34xSER_MAC.ZIP https://files.seeedstudio.com/wiki/grove-vision-ai-v2/res/CH341SER_MAC.ZIP
Below is a block Diagram of the Grove Vision AI (V2) system, including a camera and a master controller.

<img width="740" height="411" alt="image" src="https://github.com/user-attachments/assets/ffaadd94-d9ff-48d6-881b-abc4a61b0430" />

 
Getting started with SenseCraft Web Toolkit.
SenseCraft AI empowers users to effortlessly deploy a vast library of publicly available AI models on tot heir edge devices such as Recomputer(Jetson), XIAOS3, and more, and provides a seamless and user-friendly experience, allowing you to deploy public AI models directly on to your edge devices with just a few clicks.Say good bye to complex configurations and coding – with SenseCraft AI, you can efftortlessly unlock the power of AI on your devices. SenseCraft AI also allows you to upload and share your own trained AI models with the community. By publishing your models, you contribute to a growing library of shared knowledge, fostering collaboration and innovation among AI enthusiasts.Now we will quickly get started the modules with SenseCraft AI, and this will only require the module only.
Step 1. Connect the Grove Vision AI V2 to the SenseCraft AI Model Assistant
First, we need to open the main SenseCraft AI Model Assistant page.
Go to SenseCraft AI https://seeed-studio.github.io/SenseCraft-Web-Toolkit/#/setup/process
Create an account and login

<img width="740" height="343" alt="image" src="https://github.com/user-attachments/assets/4b17a2f2-dfa9-4dc6-ad30-d7b144399d47" />

 
Please use a Type-C type cable to connect Grove Vision AI V2 to your computer.
Here we are using a public model for testing the Grove Vision V2.

<img width="740" height="331" alt="image" src="https://github.com/user-attachments/assets/6cbe139c-bc4a-44e1-ab08-d7387e7e5521" />

 
we selected the "Gesture Detection" model to deploy.

<img width="740" height="379" alt="image" src="https://github.com/user-attachments/assets/8442e205-e8d5-4c7c-9e86-e2448f7bc9c4" />

 
Click on "Deploy Model"

 <img width="740" height="236" alt="image" src="https://github.com/user-attachments/assets/624009d6-6135-4e31-9b1a-34abd9942286" />

Then click on "connect"

<img width="740" height="400" alt="image" src="https://github.com/user-attachments/assets/02e61c94-85ce-4d4e-a696-cd9c3b7ee5cd" />

 
Click on "Confirm" and select the connected serial port

<img width="740" height="552" alt="image" src="https://github.com/user-attachments/assets/fc2cc137-7575-473f-8f63-c58de0692451" />

 
Now the model will begin to get uploaded to the Grove vision V2

 <img width="715" height="341" alt="image" src="https://github.com/user-attachments/assets/dd6565ce-ffb6-455e-b86c-f3e7e3c9854c" />

 <img width="740" height="411" alt="image" src="https://github.com/user-attachments/assets/674c857c-6fba-44ad-bc27-2193307d18e3" />

Now you can see that we have successfully uploaded the model.Now we can test it by showing different gestures
 
 <img width="740" height="402" alt="image" src="https://github.com/user-attachments/assets/511b8be1-a738-4334-8dc3-07e42e499824" />
<img width="740" height="402" alt="image" src="https://github.com/user-attachments/assets/91ad0106-f6c7-4535-b98a-2c366f6a734a" />
<img width="740" height="492" alt="image" src="https://github.com/user-attachments/assets/e6748fa9-165b-42f2-9e5c-f280cf6cce97" />

 
we can see how good the new Grove vision V2 is when compared to other MCUs and the previous version, we really got a massive upgrade in every terms, Really Loved it.
We can see that in the Preview Settings on the right hand side, there are two setting options that can be changed to optimise the recognition accuracy of the model.
•	Confidence: Confidence refers to the level of certainty or probability assigned by a model to its predictions.

<img width="400" height="394" alt="image" src="https://github.com/user-attachments/assets/715c4357-b2a1-41fe-8ec0-41e06b669422" />

 
•	IoU: IoU is used to assess the accuracy of predicted bounding boxes compared to truth bounding boxes.

<img width="400" height="392" alt="image" src="https://github.com/user-attachments/assets/bb801e47-cfc3-4ae1-8c53-974e61468b08" />

 
Arduino Environment Preparation

<img width="740" height="402" alt="image" src="https://github.com/user-attachments/assets/8bac9197-267c-4183-ae5e-e4b72c37daf9" />

 
1. Visit the official Arduinowebsite: https://www.arduino.cc/en/software
2. Click on the "Windows" or "Mac"buttonbased on your operatingsystem.
3. Download the ArduinoIDE1.8.19installer.
4. Once the downloadis complete, runtheinstaller.
5. Follow the installation wizard, acceptingthe license agreement and choosing the installation directory.
6. If prompted, allow the installer to install device drivers.
7. Once the installationis finished, click"Close" to exit the installer.
8. Open the Arduino IDE fromthedesktopshortcut or the start menu. 9. You're now ready tostart usingArduinoIDE 1.8.19!
Downloading the necessary libraries
1. Open your web browser and navigate to the GitHub repository:
https://github.com/Seeed-Studio/Seeed_Arduino_SSCMA
2. Click on the green "Code" button and select "Download ZIP" to download the library as a ZIP file.

 <img width="604" height="555" alt="image" src="https://github.com/user-attachments/assets/afaa48bc-9eac-4111-9889-e6f7401b42ec" />

3. Save the ZIP file to a location on your computer where you can easily find it.
4. Open the Arduino IDE.
5. Go to Sketch > Include Library >Add.ZIPLibrary.

<img width="740" height="294" alt="image" src="https://github.com/user-attachments/assets/d75b4c42-c9ba-4e5e-9514-e5cc359bf883" />

 
6. In the file browser window that appears, navigate to the location where you saved the downloaded ZIP file.
7. Select the ZIP file and click "Open" to add the library to your Arduino IDE.
8. The Seeed_Arduino_SSCMAlibrary should now be installed and ready to use.
9. To verify the installation, go to Sketch>Include Library and check if "Seeed_Arduino_SSCMA" appears in the list of installed libraries.
You also need to download one more library

<img width="740" height="439" alt="image" src="https://github.com/user-attachments/assets/759ae0b5-32dd-4eb5-9e84-93400e46422d" />


Go to the Sketch menu, then select Include Library>Manage Libraries.... This will open the Library Manager.In the search bar at the top of the Library Manager, type in ArduinoJSON. The search results will list the ArduinoJSON library. There will be an Install button next to the library. Click the Install button. The ArduinoIDE will automatically download and install the library into your Arduino development environment.
Installing the board to Arduino IDE
1. Open theArduinoIDE.

 <img width="740" height="478" alt="image" src="https://github.com/user-attachments/assets/b319c80f-4037-45eb-a8a7-077ed3294366" />

2. Go to File>Preferences.
3. In the "Additional BoardsManager URLs" field, enter the following URL:
https://raw.githubusercontent.com/espressif/arduinoesp32/gh-pages/package_esp32_index.json
4.Click "OK" to close the Preferences window.
5. Navigate to Tools >Board>Boards Manager.
6. In the Boards Manager window, search for "ESP32".
7. Locate the "ESP32 by Espressif Systems" entry and click on it.

<img width="740" height="416" alt="image" src="https://github.com/user-attachments/assets/77880219-f1da-45f6-be42-9464b1b36fb9" />

 
8. Select the latest version from the drop down menu and click "Install".
9. Wait for the installation process to complete. This may take a few minutes.
10. Once the installation is finished, close the Boards Manager window
Custom model for Elephant detection

<img width="740" height="531" alt="image" src="https://github.com/user-attachments/assets/1d6b3ceb-8bbc-415e-95c0-803343a9a356" />

 
In this part, we'll kick off by labeling our dataset with the intuitive tools provided by Roboflow. From there, we'll advance to training our model within Google Colab's collaborative environment. Next up, we'll explore deploying our trained model using the SenseCraft Model Assistant, a process designed to smoothly bridge the gap between training and real-world applications. By the conclusion of this part, you'll have your very own custom model ready to detect elephants, operational on Grove Vision AI V2.
From dataset to model deployment, our journey consists of the following key stages:
1. Dataset Labeling — This section details the process of acquiring datasets suitable for training models. There are two primary methods: utilizing labeled datasets from the Roboflow community or curating your own dataset with scenario-specific images, necessitating manual labeling.
2. Model Training with Google Colab — Here, we focus on training a model capable of deployment on Grove Vision AI V2, leveraging the dataset obtained in the previous step via the Google Colab platform.
3. Model Upload via SenseCraft Model Assistant — This segment explains how to employ the exported model file to upload our elephant detection model to Grove Vision AI V2 using the SenseCraft Model Assistant.
Step 1.Create a free Roboflow account

<img width="740" height="402" alt="image" src="https://github.com/user-attachments/assets/3018355b-514c-4254-bfe9-65f0c408d4be" />

 
Roboflow provides everything you need to label, train, and deploy computer vision solutions. To get started, create a free Roboflow account.
Step 2. Creating a New Project and Uploading images
Once you've logged into Roboflow, Click on Create Project.\

<img width="740" height="404" alt="image" src="https://github.com/user-attachments/assets/67134213-871c-4bea-85a8-46459a1aa823" />

 
Name your project ("EleTect"). Define your project as Object Detection. Set the Output Labels as Categorical
.Step 2. Creating a New Project and Uploading images
Once you've logged into Roboflow, Click on Create Project
 
Name your project ("EleTect"). Define your project as Object Detection. Set the Output Labels as Categorical
Now it's time to upload elephant images.
Collect images of elephants. Ensure you have a variety of backgrounds and lighting conditions. On your project page, click "Add Images".

<img width="740" height="404" alt="image" src="https://github.com/user-attachments/assets/bb71659b-82a8-496a-ac3d-0a1d5d8b9722" />

 
You can drag and drop your images or select them from your computer. Upload at least 2000 images for a robust dataset.

<img width="740" height="334" alt="image" src="https://github.com/user-attachments/assets/9e0028fc-d7db-4291-ac03-bb4d382f4ca7" />

 
click on Save and Continue

<img width="471" height="555" alt="image" src="https://github.com/user-attachments/assets/7f121b32-ae54-4d96-8369-25d4ee675b81" />

 
Step 3: Annotating Images
After uploading, you'll need to annotate the images by labeling elephant.
Roboflow offers three different ways of labelling images: Auto Label, Roboflow Labeling and Manual Labeling.

<img width="740" height="393" alt="image" src="https://github.com/user-attachments/assets/3a5d9f9d-cc14-48c2-9830-765e11e69cc9" />

 
Auto Label: Use a large generalized model to automatically label images.
Auto Label: Use a large generalized model to automatically label images.
•	Auto Label: Use a large generalized model to automatically label images.
Roboflow Labeling: Work with a professional team of human labelers. No minimum volumes. No upfront commitments. Bounding Box annotations start at $0.04 and Polygon annotations start at $0.08.
Roboflow Labeling: Work with a professional team of human labelers. No minimum volumes. No upfront commitments. Bounding Box annotations start at $0.04 and Polygon annotations start at $0.08.
•	Roboflow Labeling: Work with a professional team of human labelers. No minimum volumes. No upfront commitments. Bounding Box annotations start at $0.04 and Polygon annotations start at $0.08.
Manual Labeling: You and your team label your own images.
Manual Labeling: You and your team label your own images.
•	Manual Labeling: You and your team label your own images.
The following describes the most commonly used method of manual labelling.
Click on "Manual Labeling" button. Roboflow will load the annotation interface.

<img width="740" height="369" alt="image" src="https://github.com/user-attachments/assets/2694a3c0-6039-49b4-966b-d213ec0d9fc6" />

 
Select the "Start Annotating" button. Draw bounding boxes around the elephant in each image.

<img width="740" height="410" alt="image" src="https://github.com/user-attachments/assets/544e10d6-61bd-4ae8-917e-586a957a3df6" />

 
Label each bounding box as elephant.
Use the ">" button to move through your dataset, repeating the annotation process for each image.
Step 4: Review and Edit Annotations
It's essential to ensure annotations are accurate.
Review each image to make sure the bounding boxes are correctly drawn and labeled. If you find any mistakes, select the annotation to adjust the bounding box or change the label.

<img width="277" height="555" alt="image" src="https://github.com/user-attachments/assets/4e60a828-3136-4190-b29d-2d4911feca71" />

 
Step 5: Generating and Exporting the Dataset
Once all images are annotated. In Annotate click the Add x images to Dataset button in the top right corner.
Then click the Add Images button at the bottom of the new pop-up window.

<img width="740" height="402" alt="image" src="https://github.com/user-attachments/assets/3ec1b3f3-9cd2-4e9d-94c4-3824cc5f9035" />

 
Click Generate in the left toolbar and click Continue in the third Preprocessing step.

<img width="569" height="555" alt="image" src="https://github.com/user-attachments/assets/5e95c499-ef50-4e75-96ac-a886b11b2845" />

 
In the Augmentation in step 4, select Mosaic, which increases generalisation.
<img width="600" height="555" alt="image" src="https://github.com/user-attachments/assets/f0149f26-2d53-40ed-87ad-90f1b1e00b37" />

 <img width="740" height="393" alt="image" src="https://github.com/user-attachments/assets/aa88bba5-1a7e-4e40-a571-56af3917f765" />

 
In the final Create step, please calculate the number of images reasonably according to Roboflow's boost; in general, the more images you have, the longer it takes to train the model. However, the more pictures you have will not necessarily make the model more accurate, it mainly depends on whether the dataset is good enough or not.

<img width="740" height="425" alt="image" src="https://github.com/user-attachments/assets/7f4423ba-f207-4d52-9c85-663183a0a278" />

 
Click on Create to create a version of your dataset. Roboflow will process the images and annotations, creating a versioned dataset. After the dataset is generated, click Export Dataset. Choose the COCO format that matches the requirements of the model you'll be training.

 <img width="740" height="517" alt="image" src="https://github.com/user-attachments/assets/824b2869-76f0-4454-b13e-0e435601185d" />
<img width="740" height="503" alt="image" src="https://github.com/user-attachments/assets/bf9a114c-8570-4ae2-bd36-659cb07da394" />

 
Click on Continue and you'll then get the Raw URL for this model. Keep it, we'll use the link in the model training step a bit later.

<img width="740" height="405" alt="image" src="https://github.com/user-attachments/assets/4a9726b6-9f09-42c9-90b9-db44045d7931" />

 
Congratulations! You have successfully used Roboflow to upload, annotate, and export a dataset for elephant detection model. With your dataset ready, you can proceed to train a machine learning model using platforms like Google Colab.

Training Dataset Exported Model 
Step 1. Access the Colab Notebook
You can find different kinds of model Google Colab code files on the SenseCraft Model Assistant's Wiki. If you don't know which code you should choose, you can choose any one of them, depending on the class of your model (object detection or image classification). https://wiki.seeedstudio.com/ModelAssistant_Introduce_Quick_Start/#model-training

<img width="740" height="394" alt="image" src="https://github.com/user-attachments/assets/c118d027-6c17-49d1-b37c-007bfbcbcc60" />

 
If you are not already signed into your Google account, please sign in to access the full functionalities of Google Colab.
Click on "Connect" to allocate resources for your Colab session.

<img width="472" height="267" alt="image" src="https://github.com/user-attachments/assets/97c1f92f-38ee-46c9-818f-3c5700be52ff" />

 
select the panel showing RAM and Disk

 <img width="508" height="422" alt="image" src="https://github.com/user-attachments/assets/765fc4d2-1262-47ec-a8d6-4ef39628ce60" />

select "Change runtime type"

<img width="625" height="555" alt="image" src="https://github.com/user-attachments/assets/3d0e189b-5bb0-4b03-b736-0973b21352f0" />

 
Select "T4 GPU"

 <img width="740" height="307" alt="image" src="https://github.com/user-attachments/assets/eec253b3-c244-47ae-9d39-8b6624d584ba" />

Now run the "Setup SSCMA"

<img width="740" height="345" alt="image" src="https://github.com/user-attachments/assets/b72cddac-fcc8-4355-b0c4-e095f40e2663" />

 
you will get a warning like this click on "Run anyways"

<img width="740" height="321" alt="image" src="https://github.com/user-attachments/assets/02a1e658-a0a3-4653-b4ed-c6deefe5b71b" />

 
Wait untill the repositary is fully clonedand installed all the dependencies.

<img width="740" height="306" alt="image" src="https://github.com/user-attachments/assets/78da2375-2ee2-446b-a67b-044deb60519c" />

 
now its finished

<img width="740" height="65" alt="image" src="https://github.com/user-attachments/assets/21b52d7e-23be-4b78-a4ff-b1c1808c5584" />

 
Now run the "download the pretrain model weights file

<img width="740" height="73" alt="image" src="https://github.com/user-attachments/assets/02f54b9a-794d-4ac1-a6bc-1845a17215b1" />

 
Step 2. Add your Roboflow Dataset
Before officially running the code block step-by-step, we need to modify the code's content so that the code can use the dataset we prepared. We have to provide a URL to download the dataset directly into the Colab filesystem.

<img width="740" height="72" alt="image" src="https://github.com/user-attachments/assets/ef409b63-6899-45a3-9712-c8308a847990" />

 
To customize this code for your own model link from Roboflow:
1)Replace Gesture_Detection_Swift-YOLO_192 with the desired directory name where you want to store your dataset.
2)Replace the Roboflow dataset URL (https://universe.roboflow.com/ds/xaMM3ZTeWy?key=5bznPZyI0t)
with the link to your exported dataset (It's the Raw URL we got in the last step in Labelled Datasets). Make sure to include the key parameter if required for access.
3)Adjust the output filename in the wget command if necessary
(-O your_directory/your_filename.zip).4)Make sure the output directory in the unzip command matches the directory you created and the filename matches the one you set in the wget command.
 
 <img width="740" height="384" alt="image" src="https://github.com/user-attachments/assets/54350944-1401-4dcc-9b80-c8cd5b000951" />

Step 3. Adjustment of model parameters
The next step is to adjust the input parameters of the model. Please jump to the Train a model with SSCMA section and you will see the following code snippet.

<img width="740" height="219" alt="image" src="https://github.com/user-attachments/assets/6f589300-1ab6-436a-a115-1bc6461a3528" />

 
This command is used to start the training process of a machine learning model, specifically a YOLO (You Only Look Once) model, using the SSCMA (Seeed Studio SenseCraft Model Assistant) framework.
To customize this command for your own training, you would:
1)Replace configs/swift_yolo/swift_yolo_tiny_1xb16_300e_coco.py with the path to your own configuration file if you have a custom one.2)Change work_dir to the directory where you want your training outputs to be saved.3)Update num_classes to match the number of classes in your own dataset. It depends on the number of tags you have, for example rock, paper, scissors should be three tags.4)Adjust epochs to the desired number of training epochs for your model. Recommended values are between 50 and 100.5)Set height and width to match the dimensions of the input images for your model.6)Change data_root to point to the root directory of your dataset.7)If you have a different pre-trained model file, update the load_from path accordingly.

<img width="740" height="305" alt="image" src="https://github.com/user-attachments/assets/a70ff84e-f1ff-468c-b40d-f72e9d4a25a7" />

 
Step 5. Exportthe model
After training, you can export the model to the format for deployment. SSCMA supports exporting to ONNX, and TensorFlow Lite at present

<img width="740" height="187" alt="image" src="https://github.com/user-attachments/assets/024070c0-2acd-4aba-bf41-ef2c79b839ee" />

 
Step 6. Evaluate the model
When you get to the Evaluate the model section, you have the option of executing the Evaluate the TFLite INT8 model code block.

<img width="518" height="459" alt="image" src="https://github.com/user-attachments/assets/efb987d6-87c5-433a-8808-d93273f73ac1" />

 
Step 7. Download the exported model file
After the Export the model section, you will get the model files in various formats, which will be stored in the Model Assistant folder by default. Our stored directory is EleTect.

 <img width="519" height="420" alt="image" src="https://github.com/user-attachments/assets/4cb3dd34-997d-4d9f-978b-898f60b503eb" />

select "ModelAssistatnt"

<img width="588" height="285" alt="image" src="https://github.com/user-attachments/assets/8832e6a6-9c21-4790-8be8-b33b48dcd146" />

 
In the directory above, the .tflite model files are available for XIAO ESP32S3 and Grove Vision AI V2. For Grove Vision AI V2, we prefer to use the vela.tflite files, which are accelerated and have better operator support. And due to the limitation of the device memory size, we recommend you to choose INT8 model.

<img width="740" height="405" alt="image" src="https://github.com/user-attachments/assets/47f04a55-8eb5-46ba-a02e-e7aaf7b15cb9" />

 
After locating the model files, it's essential to promptly download them to your local computer. Google Colab might clear your storage directory if there's prolonged inactivity. With these steps completed, we now have exported model files compatible with Grove Vision AI V2. Next, let's proceed to deploy the model onto the device.

Upload models to Grove Vision V2 via SenseCraft Model Assistant
Please connect the device after selecting Grove Vision AI V2 and then select Upload Custom AI Model at the bottom of the page.

 <img width="740" height="505" alt="image" src="https://github.com/user-attachments/assets/b7325f91-0a12-49a6-a118-2b0776c8741d" />

You will then need to prepare the name of the model, the model file, and the labels. I want to highlight here how this element of the label ID is determined.
If you are using a custom dataset, then you can view the different categories and its order on the Health Check page. Just install the order entered here.
Then click Send Model in the bottom right corner. This may take about 3 to 5 minutes or so. If all goes well, then you can see the results of your model in the Model Name and Preview windows above.
Or you could use the model published by Us.Go to search and in public models search for "EleTect", you can find it.
 
<img width="740" height="391" alt="image" src="https://github.com/user-attachments/assets/300979c0-18f1-42d7-a51e-fecdf1a753a6" />

 <img width="696" height="555" alt="image" src="https://github.com/user-attachments/assets/b18c4489-9e08-4bb0-99f0-149940f163d5" />

Click on deploy and connect your grove vision V2.
 
 
<img width="740" height="422" alt="image" src="https://github.com/user-attachments/assets/455701d6-3bc3-47af-b77b-8a5cfa637059" />

Press Confirm and you are good to go.Now that we have done training the vision based model, now we can train the audio model also for increased accuracy

Check the video:https://youtu.be/5A9LV7e6Xzg
https://youtu.be/vQQ53FgJ9pc

Add the model to Edge Impulse using BYOM Feature.

<img width="1252" height="748" alt="image" src="https://github.com/user-attachments/assets/32f3ff3a-5b54-4e0d-9578-50c4c22e7191" />


Now that we have done training the vision based model, now we can train the audio model also for increased accuracy
Training audio based TinyML model on XIAO ESP32S3 Sense

XIAO ESP32S3 Sense Introduction

<img width="740" height="555" alt="image" src="https://github.com/user-attachments/assets/9cd7c5cb-a51d-4083-a506-6aa4adb3ff2d" />




<img width="638" height="555" alt="image" src="https://github.com/user-attachments/assets/2b3910d9-9141-4f72-bbd8-f7a653a0b4be" />

 
A compact yet powerful development board designed to kickstart your journey into intelligent voice and vision AI. With its integrated camera sensor, digital microphone, and SD card support, this tiny board packs a punch, offering embedded ML computing power and photography capabilities. Whether you're delving into edge computing or exploring AI applications, the XIAO ESP32S3 Sense is your go-to tool for realizing innovative projects with ease and efficiency.


 
Edge Impulse Introduction

<img width="740" height="393" alt="image" src="https://github.com/user-attachments/assets/0e8e89c8-10bb-4ef5-8ca2-4320f5637fb1" />


Edge Impulse is a platform for developing machine learning models specifically designed for edge devices and embedded systems. It provides a comprehensive set of tools and services that enable developers to quickly create, train, and deploy machine learning models without requiring deep expertise in machine learning.
Recording Audio with XIAO ESP32S3 Sense
Let's use the onboard SD Card reader to save.wav audio files, we need to habilitate the XIAO PSRAM first.

<img width="740" height="383" alt="image" src="https://github.com/user-attachments/assets/e46c42cb-81a3-46f4-a357-e0a141552d32" />


Insert the microSD card into the microSD card slot. Please note the direction of insertion, the side with the gold finger should face inward.
Then compile and upload the following program to XIAO ESP32S3.



/*
* WAV Recorder for Seeed XIAO ESP32S3 Sense
*
* NOTE: To execute this code, we will need to use the PSRAM
* function of the ESP-32 chip, so please turn it on before uploading.
* Tools>PSRAM: "OPI PSRAM"
*
* Adapted by M.Rovai @May23 from original Seeed code
*/
#include <I2S.h>
#include "FS.h"
#include "SD.h"
#include "SPI.h"
// make changes as needed
#define RECORD_TIME   10  // seconds, The maximum value is 240
#define WAV_FILE_NAME "data"
// do not change for best
#define SAMPLE_RATE 16000U
#define SAMPLE_BITS 16
#define WAV_HEADER_SIZE 44
#define VOLUME_GAIN 2
int fileNumber = 1;
String baseFileName;
bool isRecording = false;
void setup() {
Serial.begin(115200);
while (!Serial) ;
I2S.setAllPins(-1, 42, 41, -1, -1);
if (!I2S.begin(PDM_MONO_MODE, SAMPLE_RATE, SAMPLE_BITS)) {
Serial.println("Failed to initialize I2S!");
while (1) ;
}
if(!SD.begin(21)){
Serial.println("Failed to mount SD Card!");
while (1) ;
}
Serial.printf("Enter with the label name\n");
//record_wav();
}
void loop() {
if (Serial.available() > 0) {
String command = Serial.readStringUntil('\n');
command.trim();
if (command == "rec") {
isRecording = true;
} else {
baseFileName = command;
fileNumber = 1; // reset file number each time a new base file name is set
Serial.printf("Send rec for starting recording label \n");
}
}
if (isRecording && baseFileName != "") {
String fileName = "/" + baseFileName + "." + String(fileNumber) + ".wav";
fileNumber++;
record_wav(fileName);
delay(1000); // delay to avoid recording multiple files at once
isRecording = false;
}
}
void record_wav(String fileName)
{
uint32_t sample_size = 0;
uint32_t record_size = (SAMPLE_RATE * SAMPLE_BITS / 8) * RECORD_TIME;
uint8_t *rec_buffer = NULL;
Serial.printf("Start recording ...\n");
File file = SD.open(fileName.c_str(), FILE_WRITE);
// Write the header to the WAV file
uint8_t wav_header[WAV_HEADER_SIZE];
generate_wav_header(wav_header, record_size, SAMPLE_RATE);
file.write(wav_header, WAV_HEADER_SIZE);
// PSRAM malloc for recording
rec_buffer = (uint8_t *)ps_malloc(record_size);
if (rec_buffer == NULL) {
Serial.printf("malloc failed!\n");
while(1) ;
}
Serial.printf("Buffer: %d bytes\n", ESP.getPsramSize() - ESP.getFreePsram());
// Start recording
esp_i2s::i2s_read(esp_i2s::I2S_NUM_0, rec_buffer, record_size, &sample_size, portMAX_DELAY);
if (sample_size == 0) {
Serial.printf("Record Failed!\n");
} else {
Serial.printf("Record %d bytes\n", sample_size);
}
// Increase volume
for (uint32_t i = 0; i < sample_size; i += SAMPLE_BITS/8) {
(*(uint16_t *)(rec_buffer+i)) <<= VOLUME_GAIN;
}
// Write data to the WAV file
Serial.printf("Writing to the file ...\n");
if (file.write(rec_buffer, record_size) != record_size)
Serial.printf("Write file Failed!\n");
free(rec_buffer);
file.close();
Serial.printf("Recording complete: \n");
Serial.printf("Send rec for a new sample or enter a new label\n\n");
}
void generate_wav_header(uint8_t *wav_header, uint32_t wav_size, uint32_t sample_rate)
{
// See this for reference: http://soundfile.sapp.org/doc/WaveFormat/
uint32_t file_size = wav_size + WAV_HEADER_SIZE - 8;
uint32_t byte_rate = SAMPLE_RATE * SAMPLE_BITS / 8;
const uint8_t set_wav_header[] = {
'R', 'I', 'F', 'F', // ChunkID
file_size, file_size >> 8, file_size >> 16, file_size >> 24, // ChunkSize
'W', 'A', 'V', 'E', // Format
'f', 'm', 't', ' ', // Subchunk1ID
0x10, 0x00, 0x00, 0x00, // Subchunk1Size (16 for PCM)
0x01, 0x00, // AudioFormat (1 for PCM)
0x01, 0x00, // NumChannels (1 channel)
sample_rate, sample_rate >> 8, sample_rate >> 16, sample_rate >> 24, // SampleRate
byte_rate, byte_rate >> 8, byte_rate >> 16, byte_rate >> 24, // ByteRate
0x02, 0x00, // BlockAlign
0x10, 0x00, // BitsPerSample (16 bits)
'd', 'a', 't', 'a', // Subchunk2ID
wav_size, wav_size >> 8, wav_size >> 16, wav_size >> 24, // Subchunk2Size
};
memcpy(wav_header, set_wav_header, sizeof(set_wav_header));
}



Now, Compile and run the code and get samples of different elephant sounds. You can also capture noise and other sounds. The Serial monitor will prompt you to receive the label to be recorded.
Send the label (for example, Elephant). The program will wait for another command: rec. And the program will start recording new samples every time a command rec is sent. The files will be saved as elephant.1.wav, elephant.2.wav, elephant.3.wav, etc. until a new label (for example, Noice) is sent. In this case, you should send the command rec for each new sample, which will be saved as Noice1.wav, Noice.2.wav, Noice.3.wav, etc. Ultimately, we will get the saved files on the SD card.
send the first label name first, through the serial monitor

<img width="680" height="307" alt="image" src="https://github.com/user-attachments/assets/34a7cee0-4848-4ccc-8d98-9faa0b88cc7b" />

 
Then send command rec and start recording the elephant sounnd using XIAO.

<img width="733" height="296" alt="image" src="https://github.com/user-attachments/assets/945f69ed-fc30-4b54-b54e-68d7870111c9" />

 
Collect both samples in same amount.
Use a card reader to save all the sound samples stored inside the SD card to your computer.

<img width="471" height="555" alt="image" src="https://github.com/user-attachments/assets/7e7841b9-9d41-40f6-ac35-12c64986bf82" />

 
Training Exported Models with Edge Impulse

<img width="438" height="555" alt="image" src="https://github.com/user-attachments/assets/8fc13781-ec23-4951-b68d-1afe92d51ee8" />

 
We should initiate a new project at Edge Impulse and give it the same name “EleTect”.
Once the project is created, select the Upload Data tool in the Data Acquisition section. Choose the files to be uploaded.

 <img width="740" height="505" alt="image" src="https://github.com/user-attachments/assets/231139af-7de8-4c74-85fd-79f44ee63193" />

 <img width="688" height="555" alt="image" src="https://github.com/user-attachments/assets/52a72509-84fb-4edd-ac2b-aa4d7730a2da" />

make sure to balance between train and test set.80/20 is the best recommended ratio.
All data on dataset have a 1s length, but the samples recorded in the previous section have 10s and must be split into 1s samples to be compatible. Click on three dots after the sample name and select Split sample.

<img width="740" height="474" alt="image" src="https://github.com/user-attachments/assets/072a1b40-e1f5-424b-b637-c92ded019c83" />

 
Once inside the tool, split the data into 1-second records. If necessary, add or remove segments. This procedure should be repeated for all samples.
Goto Impulse design
An impulse takes raw data, uses signal processing to extract features, and then uses a learning block to classify new data. First, we will take the data points with a 1-second window, augmenting the data, sliding that window each 500ms. Note that the option zero-pad data is set. This is important to fill with zeros samples smaller than 1 second (in some cases, I reduced the 1000 ms window on the split tool to avoid noises and spikes).

<img width="740" height="471" alt="image" src="https://github.com/user-attachments/assets/4290492b-07e2-42c3-bf8d-d7b725c979e6" />

 
The next step is to create the images to be trained in the next phase. We can keep the default parameter values or take advantage of the DSP Autotuneparameters option, which we will do.

<img width="740" height="453" alt="image" src="https://github.com/user-attachments/assets/d4984ba9-4599-4920-9f32-7716cba5f67c" />

 
We will use a Convolution Neural Network (CNN) model. The basic architecture is defined with two blocks of Conv1D + MaxPooling (with 8 and 16 neurons, respectively) and a 0.25 Dropout. And on the last layer, after Flattening four neurons, one for each class.

<img width="517" height="555" alt="image" src="https://github.com/user-attachments/assets/29297eb8-a40c-4c73-9549-128f88be6f6f" />

 
Edge Impulse will package all the needed libraries, preprocessing functions, and trained models, downloading them to your computer. You should select the option Arduino Library and at the bottom, select Quantized (Int8) and press the button Build. When the Build button is selected, a Zip file will be created and downloaded to your computer.

 <img width="631" height="555" alt="image" src="https://github.com/user-attachments/assets/6573b195-7b0f-465a-8730-bdc67fb09d22" />
 <img width="740" height="387" alt="image" src="https://github.com/user-attachments/assets/9205baab-c7ab-4479-9de6-9bacac87c7b0" />


 
Deploying models to XIAO ESP32S3 Sense
Upload the zip file to you Arduino IDE

<img width="740" height="364" alt="image" src="https://github.com/user-attachments/assets/48a935fb-b60c-4218-a9c3-d1bcf9399f25" />
<img width="740" height="520" alt="image" src="https://github.com/user-attachments/assets/c42475f9-984f-4fa8-8b7d-93af6d8195a5" />

 
 
Before we use the downloaded library, we need to enable the ESP NN Accelerator. For that, you can download a preliminary version from the project GitHub, unzip it, and replace the ESP NN folder with it under: src/edge-impulse-sdk/porting/espressif/ESP-NN, in your Arduino library folder.
Link Address: https://github.com/Mjrovai/XIAO-ESP32S3-Sense/blob/main/ESP-NN.zip
Then you will get the program, compile and run it.


#define EIDSP_QUANTIZE_FILTERBANK 0
#include <EleTect_inferencing.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/i2s.h"
/** Audio buffers, pointers and selectors */
typedef struct {
int16_t *buffer;
uint8_t buf_ready;
uint32_t buf_count;
uint32_t n_samples;
} inference_t;
static inference_t inference;
static const uint32_t sample_buffer_size = 2048;
static signed short sampleBuffer[sample_buffer_size];
static bool debug_nn = false; // Set this to true to see e.g. features generated from the raw signal
static bool record_status = true;
/**
* @brief Arduino setup function
*/
void setup()
{
// put your setup code here, to run once:
Serial.begin(115200);
// comment out the below line to cancel the wait for USB connection (needed for native USB)
while (!Serial);
Serial.println("Edge Impulse Inferencing Demo");
// summary of inferencing settings (from model_metadata.h)
ei_printf("Inferencing settings:\n");
ei_printf("\tInterval: ");
ei_printf_float((float)EI_CLASSIFIER_INTERVAL_MS);
ei_printf(" ms.\n");
ei_printf("\tFrame size: %d\n", EI_CLASSIFIER_DSP_INPUT_FRAME_SIZE);
ei_printf("\tSample length: %d ms.\n", EI_CLASSIFIER_RAW_SAMPLE_COUNT / 16);
ei_printf("\tNo. of classes: %d\n", sizeof(ei_classifier_inferencing_categories) / sizeof(ei_classifier_inferencing_categories[0]));
ei_printf("\nStarting continious inference in 2 seconds...\n");
ei_sleep(2000);
if (microphone_inference_start(EI_CLASSIFIER_RAW_SAMPLE_COUNT) == false) {
ei_printf("ERR: Could not allocate audio buffer (size %d), this could be due to the window length of your model\r\n", EI_CLASSIFIER_RAW_SAMPLE_COUNT);
return;
}
ei_printf("Recording...\n");
}
/**
* @brief Arduino main function. Runs the inferencing loop.
*/
void loop()
{
bool m = microphone_inference_record();
if (!m) {
ei_printf("ERR: Failed to record audio...\n");
return;
}
signal_t signal;
signal.total_length = EI_CLASSIFIER_RAW_SAMPLE_COUNT;
signal.get_data = &microphone_audio_signal_get_data;
ei_impulse_result_t result = { 0 };
EI_IMPULSE_ERROR r = run_classifier(&signal, &result, debug_nn);
if (r != EI_IMPULSE_OK) {
ei_printf("ERR: Failed to run classifier (%d)\n", r);
return;
}
// print the predictions
ei_printf("Predictions ");
ei_printf("(DSP: %d ms., Classification: %d ms., Anomaly: %d ms.)",
result.timing.dsp, result.timing.classification, result.timing.anomaly);
ei_printf(": \n");
for (size_t ix = 0; ix < EI_CLASSIFIER_LABEL_COUNT; ix++) {
ei_printf(" %s: ", result.classification[ix].label);
ei_printf_float(result.classification[ix].value);
ei_printf("\n");
}
#if EI_CLASSIFIER_HAS_ANOMALY == 1
ei_printf(" anomaly score: ");
ei_printf_float(result.anomaly);
ei_printf("\n");
#endif
}
static void audio_inference_callback(uint32_t n_bytes)
{
for(int i = 0; i < n_bytes>>1; i++) {
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
/* read data at once from i2s */
i2s_read((i2s_port_t)1, (void*)sampleBuffer, i2s_bytes_to_read, &bytes_read, 100);
if (bytes_read <= 0) {
ei_printf("Error in I2S read : %d", bytes_read);
}
else {
if (bytes_read < i2s_bytes_to_read) {
ei_printf("Partial I2S read");
}
// scale the data (otherwise the sound is too quiet)
for (int x = 0; x < i2s_bytes_to_read/2; x++) {
sampleBuffer[x] = (int16_t)(sampleBuffer[x]) * 8;
}
if (record_status) {
audio_inference_callback(i2s_bytes_to_read);
}
else {
break;
}
}
}
vTaskDelete(NULL);
}
/**
* @brief Init inferencing struct and setup/start PDM
*
* @param[in] n_samples The n samples
*
* @return { description_of_the_return_value }
*/
static bool microphone_inference_start(uint32_t n_samples)
{
inference.buffer = (int16_t *)malloc(n_samples * sizeof(int16_t));
if(inference.buffer == NULL) {
return false;
}
inference.buf_count = 0;
inference.n_samples = n_samples;
inference.buf_ready = 0;
if (i2s_init(EI_CLASSIFIER_FREQUENCY)) {
ei_printf("Failed to start I2S!");
}
ei_sleep(100);
record_status = true;
xTaskCreate(capture_samples, "CaptureSamples", 1024 * 32, (void*)sample_buffer_size, 10, NULL);
return true;
}
/**
* @brief Wait on new data
*
* @return True when finished
*/
static bool microphone_inference_record(void)
{
bool ret = true;
while (inference.buf_ready == 0) {
delay(10);
}
inference.buf_ready = 0;
return ret;
}
/**
* Get raw audio signal data
*/
static int microphone_audio_signal_get_data(size_t offset, size_t length, float *out_ptr)
{
numpy::int16_to_float(&inference.buffer[offset], out_ptr, length);
return 0;
}
/**
* @brief Stop PDM and release buffers
*/
static void microphone_inference_end(void)
{
i2s_deinit();
ei_free(inference.buffer);
}
static int i2s_init(uint32_t sampling_rate) {
// Start listening for audio: MONO @ 8/16KHz
i2s_config_t i2s_config = {
.mode = (i2s_mode_t)(I2S_MODE_MASTER | I2S_MODE_RX | I2S_MODE_TX),
.sample_rate = sampling_rate,
.bits_per_sample = (i2s_bits_per_sample_t)16,
.channel_format = I2S_CHANNEL_FMT_ONLY_RIGHT,
.communication_format = I2S_COMM_FORMAT_I2S,
.intr_alloc_flags = 0,
.dma_buf_count = 8,
.dma_buf_len = 512,
.use_apll = false,
.tx_desc_auto_clear = false,
.fixed_mclk = -1,
};
i2s_pin_config_t pin_config = {
.bck_io_num = 26, // IIS_SCLK
.ws_io_num = 32, // IIS_LCLK
.data_out_num = -1, // IIS_DSIN
.data_in_num = 33, // IIS_DOUT
};
esp_err_t ret = 0;
ret = i2s_driver_install((i2s_port_t)1, &i2s_config, 0, NULL);
if (ret != ESP_OK) {
ei_printf("Error in i2s_driver_install");
}
ret = i2s_set_pin((i2s_port_t)1, &pin_config);
if (ret != ESP_OK) {
ei_printf("Error in i2s_set_pin");
}
ret = i2s_zero_dma_buffer((i2s_port_t)1);
if (ret != ESP_OK) {
ei_printf("Error in initializing dma buffer with 0");
}
return int(ret);
}
static int i2s_deinit(void) {
i2s_driver_uninstall((i2s_port_t)1); //stop & destroy i2s driver
return 0;
}
#if !defined(EI_CLASSIFIER_SENSOR) || EI_CLASSIFIER_SENSOR != EI_CLASSIFIER_SENSOR_MICROPHONE
#error "Invalid model for current sensor."
#endif



Setting up the DFMini
<img width="450" height="477" alt="image" src="https://github.com/user-attachments/assets/c63694dc-9cf6-432a-a82b-794272fe6ad5" />



The DFMini Player module is a small music player. It is low cost and low power and reproduces sounds stored on a memory card.
Based on this, the module can be controlled via the standalone mode, that is, in this mode, there will only be the DFMini module, a battery to power, the speaker, buttons to control it, and the SD card with the songs.
Another way to control it is to use an Arduino or another control device. The Arduino, for example, will send commands through serial communication with the DFMini Player Module.


 
To control it, it is important to use the basic standalone circuit

<img width="740" height="358" alt="image" src="https://github.com/user-attachments/assets/537649c8-c17a-4c10-bd3d-0954ad3078a7" />

 
The two buttons shown in the circuit above are used to change the music tracks and control the volume of the sound.
The button connected to pin IO1 is used to go to the previous track and reduce the volume.
With a quick touch the system returns to the previous song, however, if you press the button for more than 1 second, the system will reduce the volume of the song.
The button connected to pin IO2 is used to go to the next track and increase the volume.
With a quick touch the system advances to the next song, however, if you press the button for more than 1 second, the system will increase the volume of the song.
In this standalone method, the songs must be saved on the memory card

<img width="450" height="476" alt="image" src="https://github.com/user-attachments/assets/efe4a1da-54c2-4c26-ab73-6e6442f514f7" />

 
This way, each time the buttons are pressed, the system will play each song in ascending or descending order.
However, when using Arduino or another control device, we must modify the way of organizing the musical files on the SD Card.
Now, I'll explain how to control the DFMini Player using the Arduino through serial communication.
Controlling the DFMini Player with Arduino
In this step, the volume control, range control, equalization commands and other features will be sent by Arduino.
The Arduino must communicate via the serial with the DFMini Player and send the control commands.

<img width="740" height="389" alt="image" src="https://github.com/user-attachments/assets/d168bafb-9a3a-419c-8213-e1c986de8bbd" />

 
First, we must assemble the circuit shown in the Figure below.
After assembling this circuit, you must add the songs on your memory card. In this step, the songs should be renamed as 01, 02, 03, for example.
You cannot leave the songs with their names, as there will be a problem when the Arduino sends the command to execute the specific track. Therefore, you must configure as shown below.

<img width="740" height="389" alt="image" src="https://github.com/user-attachments/assets/4c7454f8-833b-4e70-89be-05b3b1755fe7" />

 
After naming the files, write the following code on your Arduino.


#include "SoftwareSerial.h"
#include "DFRobotDFPlayerMini.h"
//Inicia a serial por software nos pinos 10 e 11
SoftwareSerial mySoftwareSerial(10, 11); // RX, TX
DFRobotDFPlayerMini myDFPlayer;
char command;
int pausa = 0;
void setup()
{
//Comunicacao serial com o modulo
mySoftwareSerial.begin(9600);
//Inicializa a serial do Arduino
Serial.begin(115200);
//Verifica se o modulo esta respondendo e se o
//cartao SD foi encontrado
Serial.println();
Serial.println(F("DFRobot DFPlayer Mini"));
Serial.println(F("Initializing DFPlayer module ... Wait!"));
if (!myDFPlayer.begin(mySoftwareSerial))
{
Serial.println(F("Not initialized:"));
Serial.println(F("1. Check the DFPlayer Mini connections"));
Serial.println(F("2. Insert an SD card"));
while (true);
}
Serial.println();
Serial.println(F("DFPlayer Mini module initialized!"));
//Definicoes iniciais
myDFPlayer.setTimeOut(500); //Timeout serial 500ms
myDFPlayer.volume(5); //Volume 5
myDFPlayer.EQ(0); //Equalizacao normal
menu_opcoes();
}
void loop()
{
//Waits for data entry via serial
while (Serial.available() > 0)
{
command = Serial.read();
if ((command >= '1') && (command <= '9'))
{
Serial.print("Music reproduction");
Serial.println(command);
command = command - 48;
myDFPlayer.play(command);
menu_opcoes();
}
//Reproduction
//Stop
if (command == 's')
{
myDFPlayer.stop();
Serial.println("Music Stopped!");
menu_opcoes();
}
//Pausa/Continua a musica
if (command == 'p')
{
pausa = !pausa;
if (pausa == 0)
{
Serial.println("Continue...");
myDFPlayer.start();
}
if (pausa == 1)
{
Serial.println("Music Paused!");
myDFPlayer.pause();
}
menu_opcoes();
}
//Increases volume
if (command == '+')
{
myDFPlayer.volumeUp();
Serial.print("Current volume:");
Serial.println(myDFPlayer.readVolume());
menu_opcoes();
}
if (command == '<')
{
myDFPlayer.previous();
Serial.println("Previous:");
Serial.print("Current track:");
Serial.println(myDFPlayer.readCurrentFileNumber()-1);
menu_opcoes();
}
if (command == '>')
{
myDFPlayer.next();
Serial.println("next:");
Serial.print("Current track:");
Serial.println(myDFPlayer.readCurrentFileNumber()+1);
menu_opcoes();
}
//Decreases volume
if (command == '-')
{
myDFPlayer.volumeDown();
Serial.print("Current Volume:");
Serial.println(myDFPlayer.readVolume());
menu_opcoes();
}
}
}
void menu_opcoes()
{
Serial.println();
Serial.println(F("=================================================================================================================================="));
Serial.println(F("Commands:"));
Serial.println(F(" [1-3] To select the MP3 file"));
Serial.println(F(" [s] stopping reproduction"));
Serial.println(F(" [p] pause/continue music"));
Serial.println(F(" [+ or -] increases or decreases the volume"));
Serial.println(F(" [< or >] forwards or backwards the track"));
Serial.println();
Serial.println(F("================================================================================================================================="));
}



LoRa communication from Nodes to Master

LoRa is a low-power wireless modulation technology that enables devices to communicate over long distances with minimal energy consumption.
By leveraging LoRa , IoT devices can communicate directly with each other in environments requiring long-distance communication and low power consumption.
We can connect the Wio-E5 module to the UART socket directly as the below picture shows.
 
Download Library
The u8g2 library must be installed for this demo. Click to download the library and install it (How to install an Arduino Library).
Download the example
Copy the code stick on the Aruino IDE then upload it. One of them is used as a master, and the NODE_SLAVE macro definition in the code needs to be commented out, and the other is used as a slave, and the NODE_SLAVE macro definition in the code needs to be turned on.


# include <Arduino.h>
# include <U8x8lib.h>
// #define NODE_SLAVE
U8X8_SSD1306_128X64_NONAME_HW_I2C u8x8(/*reset=*/U8X8_PIN_NONE);
// U8X8_SSD1306_128X64_NONAME_SW_I2C u8x8(/*clock=*/ SCL, /*data=*/ SDA, /*reset=*/ U8X8_PIN_NONE);   // OLEDs without Reset of the Display
static char recv_buf[512];
static bool is_exist = false;
static int at_send_check_response(char *p_ack, int timeout_ms, char*p_cmd, ...)
{
int ch = 0;
int index = 0;
int startMillis = 0;
va_list args;
memset(recv_buf, 0, sizeof(recv_buf));
va_start(args, p_cmd);
Serial1.printf(p_cmd, args);
Serial.printf(p_cmd, args);
va_end(args);
delay(200);
startMillis = millis();
if (p_ack == NULL)
{
return 0;
}
do
{
while (Serial1.available() > 0)
{
ch = Serial1.read();
recv_buf[index++] = ch;
Serial.print((char)ch);
delay(2);
}
if (strstr(recv_buf, p_ack) != NULL)
{
return 1;
}
} while (millis() - startMillis < timeout_ms);
return 0;
}
static int recv_prase(void)
{
char ch;
int index = 0;
memset(recv_buf, 0, sizeof(recv_buf));
while (Serial1.available() > 0)
{
ch = Serial1.read();
recv_buf[index++] = ch;
Serial.print((char)ch);
delay(2);
}
if (index)
{
char *p_start = NULL;
char data[32] = {
0,
};
int rssi = 0;
int snr = 0;
p_start = strstr(recv_buf, "+TEST: RX \"5345454544");
if (p_start)
{
p_start = strstr(recv_buf, "5345454544");
if (p_start && (1 == sscanf(p_start, "5345454544%s", data)))
{
data[4] = 0;
u8x8.setCursor(0, 4);
u8x8.print("               ");
u8x8.setCursor(2, 4);
u8x8.print("RX: 0x");
u8x8.print(data);
Serial.print(data);
Serial.print("\r\n");
}
p_start = strstr(recv_buf, "RSSI:");
if (p_start && (1 == sscanf(p_start, "RSSI:%d,", &rssi)))
{
u8x8.setCursor(0, 6);
u8x8.print("                ");
u8x8.setCursor(2, 6);
u8x8.print("rssi:");
u8x8.print(rssi);
}
p_start = strstr(recv_buf, "SNR:");
if (p_start && (1 == sscanf(p_start, "SNR:%d", &snr)))
{
u8x8.setCursor(0, 7);
u8x8.print("                ");
u8x8.setCursor(2, 7);
u8x8.print("snr :");
u8x8.print(snr);
}
return 1;
}
}
return 0;
}
static int node_recv(uint32_t timeout_ms)
{
at_send_check_response("+TEST: RXLRPKT", 1000, "AT+TEST=RXLRPKT\r\n");
int startMillis = millis();
do
{
if (recv_prase())
{
return 1;
}
} while (millis() - startMillis < timeout_ms);
return 0;
}
static int node_send(void)
{
static uint16_t count = 0;
int ret = 0;
char data[32];
char cmd[128];
memset(data, 0, sizeof(data));
sprintf(data, "%04X", count);
sprintf(cmd, "AT+TEST=TXLRPKT,\"5345454544%s\"\r\n", data);
u8x8.setCursor(0, 3);
u8x8.print("                ");
u8x8.setCursor(2, 3);
u8x8.print("TX: 0x");
u8x8.print(data);
ret = at_send_check_response("TX DONE", 2000, cmd);
if (ret == 1)
{
count++;
Serial.print("Sent successfully!\r\n");
}
else
{
Serial.print("Send failed!\r\n");
}
return ret;
}
static void node_recv_then_send(uint32_t timeout)
{
int ret = 0;
ret = node_recv(timeout);
delay(100);
if (!ret)
{
Serial.print("\r\n");
return;
}
node_send();
Serial.print("\r\n");
}
static void node_send_then_recv(uint32_t timeout)
{
int ret = 0;
ret = node_send();
if (!ret)
{
Serial.print("\r\n");
return;
}
if (!node_recv(timeout))
{
Serial.print("recv timeout!\r\n");
}
Serial.print("\r\n");
}
void setup(void)
{
u8x8.begin();
u8x8.setFlipMode(1);
u8x8.setFont(u8x8_font_chroma48medium8_r);
Serial.begin(115200);
// while (!Serial);
Serial1.begin(9600);
Serial.print("ping pong communication!\r\n");
u8x8.setCursor(0, 0);
if (at_send_check_response("+AT: OK", 100, "AT\r\n"))
{
is_exist = true;
at_send_check_response("+MODE: TEST", 1000, "AT+MODE=TEST\r\n");
at_send_check_response("+TEST: RFCFG", 1000, "AT+TEST=RFCFG,866,SF12,125,12,15,14,ON,OFF,OFF\r\n");
delay(200);
# ifdef NODE_SLAVE
u8x8.setCursor(5, 0);
u8x8.print("slave");
# else
u8x8.setCursor(5, 0);
u8x8.print("master");
# endif
}
else
{
is_exist = false;
Serial.print("No E5 module found.\r\n");
u8x8.setCursor(0, 1);
u8x8.print("unfound E5 !");
}
}
void loop(void)
{
if (is_exist)
{
# ifdef NODE_SLAVE
node_recv_then_send(2000);
# else
node_send_then_recv(2000);
delay(3000);
# endif
}
}


The code presented above is quite simple and will help you to select the song by its number, stop, pause, control the volume and pass the tracks.

The musical control consists of sending data from the Arduino IDE serial to our Arduino board.

Initially, the system makes the configuration in the setup and checks if the SD Card is inserted in the module. If it is not inserted, the system presents a message to alert the user.

In addition, the system displays messages with system configuration options.

void setup()
{
//Comunicacao serial com o modulo
mySoftwareSerial.begin(9600);
//Inicializa a serial do Arduino
Serial.begin(115200);
//Verifica se o modulo esta respondendo e se o
//cartao SD foi encontrado
Serial.println();
Serial.println(F("DFRobot DFPlayer Mini"));
Serial.println(F("Initializing DFPlayer module ... Wait!"));
if (!myDFPlayer.begin(mySoftwareSerial))
{
Serial.println(F("Not initialized:"));
Serial.println(F("1. Check the DFPlayer Mini connections"));
Serial.println(F("2. Insert an SD card"));
while (true);
}
Serial.println();
Serial.println(F("DFPlayer Mini module initialized!"));
//Definicoes iniciais
myDFPlayer.setTimeOut(500); //Timeout serial 500ms
myDFPlayer.volume(5); //Volume 5
myDFPlayer.EQ(0); //Equalizacao normal
menu_opcoes();
}

If the memory card is inserted, the code flow will enter the loop function.

void loop()
{
//Waits for data entry via serial
while (Serial.available() > 0)
{
command = Serial.read();
if ((command >= '1') && (command <= '3'))
{
Serial.print("Music reproduction");
Serial.println(command);
command = command - 48;
myDFPlayer.play(command);
menu_opcoes();
}
//Reproduction
//Stop
if (command == 's')
{
myDFPlayer.stop();
Serial.println("Music Stopped!");
menu_opcoes();
}
//Pausa/Continua a musica
if (command == 'p')
{
pausa = !pausa;
if (pausa == 0)
{
Serial.println("Continue...");
myDFPlayer.start();
}
if (pausa == 1)
{
Serial.println("Music Paused!");
myDFPlayer.pause();
}
menu_opcoes();
}
//Increases volume
if (command == '+')
{
myDFPlayer.volumeUp();
Serial.print("Current volume:");
Serial.println(myDFPlayer.readVolume());
menu_opcoes();
}
if (command == '<')
{
myDFPlayer.previous();
Serial.println("Previous:");
Serial.print("Current track:");
Serial.println(myDFPlayer.readCurrentFileNumber()-1);
menu_opcoes();
}
if (command == '>')
{
myDFPlayer.next();
Serial.println("next:");
Serial.print("Current track:");
Serial.println(myDFPlayer.readCurrentFileNumber()+1);
menu_opcoes();
}
//Decreases volume
if (command == '-')
{
myDFPlayer.volumeDown();
Serial.print("Current Volume:");
Serial.println(myDFPlayer.readVolume());
menu_opcoes();
}
}
}

The user can send the following control characters:

Numbers 1 to 3: Select the song to be played;
Letter s: Stop the song;
Letter p: Pause the song;
Send the + sign: Increase the song volume;
Send the - signal: Decrease the song volume;
Send the signal <: Select the previous song;
Send the signal >: Select the next song;
From these signals, letters, and numbers, the Arduino will receive them via the serial and will control the music to be played.

Each condition is presented below and internally, with its respective commands.

if ((command >= '1') && (command <= '3'))
{
Serial.print("Music reproduction");
Serial.println(command);
command = command - 48;
myDFPlayer.play(command);
menu_opcoes();
}
//Reproduction
//Stop
if (command == 's')
{
myDFPlayer.stop();
Serial.println("Music Stopped!");
menu_opcoes();
}
//Pausa/Continua a musica
if (command == 'p')
{
pausa = !pausa;
if (pausa == 0)
{
Serial.println("Continue...");
myDFPlayer.start();
}
if (pausa == 1)
{
Serial.println("Music Paused!");
myDFPlayer.pause();
}
menu_opcoes();
}
//Increases volume
if (command == '+')
{
myDFPlayer.volumeUp();
Serial.print("Current volume:");
Serial.println(myDFPlayer.readVolume());
menu_opcoes();
}
if (command == '<')
{
myDFPlayer.previous();
Serial.println("Previous:");
Serial.print("Current track:");
Serial.println(myDFPlayer.readCurrentFileNumber()-1);
menu_opcoes();
}
if (command == '>')
{
myDFPlayer.next();
Serial.println("next:");
Serial.print("Current track:");
Serial.println(myDFPlayer.readCurrentFileNumber()+1);
menu_opcoes();
}
//Decreases volume
if (command == '-')
{
myDFPlayer.volumeDown();
Serial.print("Current Volume:");
Serial.println(myDFPlayer.readVolume());
menu_opcoes();
}
}

LoRa communication from Nodes to Master
LoRa is a low-power wireless modulation technology that enables devices to communicate over long distances with minimal energy consumption.  devices can communicate directly with each other .

By leveraging LoRa, IoT devices can communicate directly with each other in environments requiring long-distance communication and low power consumption.

Download Library​

The u8g2 library must be installed for this demo. Click to download the library and install it (How to install an Arduino Library).
https://github.com/olikraus/U8g2_Arduino

Download the example​ to test

Copy the code stick on the Aruino IDE then upload it. One of them is used as a master, and the NODE_SLAVE macro definition in the code needs to be commented out, and the other is used as a slave, and the NODE_SLAVE macro definition in the code needs to be turned on.



# include <Arduino.h>
# include <U8x8lib.h>
// #define NODE_SLAVE
U8X8_SSD1306_128X64_NONAME_HW_I2C u8x8(/*reset=*/U8X8_PIN_NONE);
// U8X8_SSD1306_128X64_NONAME_SW_I2C u8x8(/*clock=*/ SCL, /*data=*/ SDA, /*reset=*/ U8X8_PIN_NONE);   // OLEDs without Reset of the Display
static char recv_buf[512];
static bool is_exist = false;
static int at_send_check_response(char *p_ack, int timeout_ms, char*p_cmd, ...)
{
int ch = 0;
int index = 0;
int startMillis = 0;
va_list args;
memset(recv_buf, 0, sizeof(recv_buf));
va_start(args, p_cmd);
Serial1.printf(p_cmd, args);
Serial.printf(p_cmd, args);
va_end(args);
delay(200);
startMillis = millis();
if (p_ack == NULL)
{
return 0;
}
do
{
while (Serial1.available() > 0)
{
ch = Serial1.read();
recv_buf[index++] = ch;
Serial.print((char)ch);
delay(2);
}
if (strstr(recv_buf, p_ack) != NULL)
{
return 1;
}
} while (millis() - startMillis < timeout_ms);
return 0;
}
static int recv_prase(void)
{
char ch;
int index = 0;
memset(recv_buf, 0, sizeof(recv_buf));
while (Serial1.available() > 0)
{
ch = Serial1.read();
recv_buf[index++] = ch;
Serial.print((char)ch);
delay(2);
}
if (index)
{
char *p_start = NULL;
char data[32] = {
0,
};
int rssi = 0;
int snr = 0;
p_start = strstr(recv_buf, "+TEST: RX \"5345454544");
if (p_start)
{
p_start = strstr(recv_buf, "5345454544");
if (p_start && (1 == sscanf(p_start, "5345454544%s", data)))
{
data[4] = 0;
u8x8.setCursor(0, 4);
u8x8.print("               ");
u8x8.setCursor(2, 4);
u8x8.print("RX: 0x");
u8x8.print(data);
Serial.print(data);
Serial.print("\r\n");
}
p_start = strstr(recv_buf, "RSSI:");
if (p_start && (1 == sscanf(p_start, "RSSI:%d,", &rssi)))
{
u8x8.setCursor(0, 6);
u8x8.print("                ");
u8x8.setCursor(2, 6);
u8x8.print("rssi:");
u8x8.print(rssi);
}
p_start = strstr(recv_buf, "SNR:");
if (p_start && (1 == sscanf(p_start, "SNR:%d", &snr)))
{
u8x8.setCursor(0, 7);
u8x8.print("                ");
u8x8.setCursor(2, 7);
u8x8.print("snr :");
u8x8.print(snr);
}
return 1;
}
}
return 0;
}
static int node_recv(uint32_t timeout_ms)
{
at_send_check_response("+TEST: RXLRPKT", 1000, "AT+TEST=RXLRPKT\r\n");
int startMillis = millis();
do
{
if (recv_prase())
{
return 1;
}
} while (millis() - startMillis < timeout_ms);
return 0;
}
static int node_send(void)
{
static uint16_t count = 0;
int ret = 0;
char data[32];
char cmd[128];
memset(data, 0, sizeof(data));
sprintf(data, "%04X", count);
sprintf(cmd, "AT+TEST=TXLRPKT,\"5345454544%s\"\r\n", data);
u8x8.setCursor(0, 3);
u8x8.print("                ");
u8x8.setCursor(2, 3);
u8x8.print("TX: 0x");
u8x8.print(data);
ret = at_send_check_response("TX DONE", 2000, cmd);
if (ret == 1)
{
count++;
Serial.print("Sent successfully!\r\n");
}
else
{
Serial.print("Send failed!\r\n");
}
return ret;
}
static void node_recv_then_send(uint32_t timeout)
{
int ret = 0;
ret = node_recv(timeout);
delay(100);
if (!ret)
{
Serial.print("\r\n");
return;
}
node_send();
Serial.print("\r\n");
}
static void node_send_then_recv(uint32_t timeout)
{
int ret = 0;
ret = node_send();
if (!ret)
{
Serial.print("\r\n");
return;
}
if (!node_recv(timeout))
{
Serial.print("recv timeout!\r\n");
}
Serial.print("\r\n");
}
void setup(void)
{
u8x8.begin();
u8x8.setFlipMode(1);
u8x8.setFont(u8x8_font_chroma48medium8_r);
Serial.begin(115200);
// while (!Serial);
Serial1.begin(9600);
Serial.print("ping pong communication!\r\n");
u8x8.setCursor(0, 0);
if (at_send_check_response("+AT: OK", 100, "AT\r\n"))
{
is_exist = true;
at_send_check_response("+MODE: TEST", 1000, "AT+MODE=TEST\r\n");
at_send_check_response("+TEST: RFCFG", 1000, "AT+TEST=RFCFG,866,SF12,125,12,15,14,ON,OFF,OFF\r\n");
delay(200);
# ifdef NODE_SLAVE
u8x8.setCursor(5, 0);
u8x8.print("slave");
# else
u8x8.setCursor(5, 0);
u8x8.print("master");
# endif
}
else
{
is_exist = false;
Serial.print("No E5 module found.\r\n");
u8x8.setCursor(0, 1);
u8x8.print("unfound E5 !");
}
}
void loop(void)
{
if (is_exist)
{
# ifdef NODE_SLAVE
node_recv_then_send(2000);
# else
node_send_then_recv(2000);
delay(3000);
# endif
}
}


Setting up the Master


<img width="734" height="555" alt="image" src="https://github.com/user-attachments/assets/04b1d2c6-d4c3-4f35-ad4a-df58ff1ef36b" />


 
The master will house the
•	Lora and Antenna
•	SIM800L
•	Arduino mega
•	Power system
The master will collect the data from all of the deployes data and will send alert to the local people when an elephant is spotted near them and will send the data to the base station where we will be able to monitor the data from all the nodes.
Using the SIM800L Module for Alert from Master


<img width="514" height="433" alt="image" src="https://github.com/user-attachments/assets/68975f6a-cc88-4619-a45a-47a23089f7a6" />


 
The SIM800L is a quad-band GPRS module that is a highly integrated module developed with a TCP/IP protocol stack. SIM800L is a small cellular module allowing GPRS communication, sending and receiving SMS, and making and receiving voice calls.
it works on frequencies EGSM 900MHz, DCS 1800MHz, and PCS 1900MHz It supports a GPRS connection with download speeds of up to 85.6kbps. The module has an inbuilt TCP/IP stack that allows it to connect to the internet. The SIM800L also has an inbuilt RTC and can be used to send and receive text messages (SMS). making this module an excellent solution for any project that needs long-range connectivity.


<img width="740" height="445" alt="image" src="https://github.com/user-attachments/assets/db39fde0-08f7-433f-bb86-59a9ce19c06b" />

 
Now, insert the SIM card into the back of the SIM800 module. 
If the power to the SIM800L is enough, the onboard LED starts blinking. If there’s not enough power, the LED blinks for almost three seconds and then turns off.
Here is the full sketch for the AT command test:

#include &lt;SoftwareSerial.h&gt;
SoftwareSerial sim800l(2,3);
void setup() {
Serial.begin(9600);
sim800l.begin(9600);
}
void loop() {
while (Serial.available()) {
delay(1);
sim800l.write(Serial.read());
}
while (sim800l.available()) {
Serial.write(sim800l.read());
}
}

Test Code


#include &lt;SoftwareSerial.h&gt;
String Arsp, Grsp;
SoftwareSerial gsm(2, 3); // RX, TX
void setup() {
// put your setup code here, to run once:
Serial.begin(9600);
Serial.println("Testing GSM SIM800L");
gsm.begin(4800);
}
void loop() {
// put your main code here, to run repeatedly:
if(gsm.available())
{
Grsp = gsm.readString();
Serial.println(Grsp);
}
if(Serial.available())
{
Arsp = Serial.readString();
gsm.println(Arsp);
}
}



Once you upload the code to the Arduino board, you’ll be able to send all the AT commands in order to send/receive text messages or make calls.
The FONA library is a library for interfacing with the SIM800 module. It allows you to send and receive SMS messages, make and receive calls, and connect to the internet. The SIM800 FONA library is open source and is released under the MIT license. The SIM800 FONA library is easy to use and is well documented. I would recommend this library to anyone looking for an easy way to interface with the SIM800 module.
The library I recommend is Adafruit’s FONA library you can go to Sketch > Include Library > Manage Libraries and type “FONA” in the search bar.
Download the source and click the library:
•	Library SIM800L: Adafruit FONA https://drive.google.com/open?id=1DAVvBwXJJ4Y6k7LKiGhHueCHFCYkekYu
The library comes with a number of examples. The FONA_test sketch provides us access to all the SIM800l functions! If you upload the sketch and use the same wiring diagram.
The FONA library owns a simple send SMS() function that takes the number and message as parameters and returns true if the message was sent through the network successfully. Here’s an example code that sends one SMS:
Now we will make code the Arduino mega to send a message to the local people near the device to warn them of elephant sightings.

#include &lt;SoftwareSerial.h&gt;
#include "Adafruit_FONA.h"
#define FONA_RX 2
#define FONA_TX 3
#define FONA_RST 4
char replybuffer[255];
SoftwareSerial sim800l = SoftwareSerial(FONA_TX, FONA_RX);
Adafruit_FONA gsm = Adafruit_FONA(FONA_RST);
//uint8_t readline(char *buff, uint8_t maxbuff, uint16_t timeout = 0);
void setup() {
Serial.begin(9600);
sim800l.begin(9600);
if (! gsm.begin(sim800l)) {
Serial.println(F("Couldn't find SIM800L!"));
while (1);
}
char sendto[21] = "*********"; //give the phone number
char message[141] = "Alert!!!
                    Elephant spotted at Node x
                    Place"; // replace the x and place with node number and installed place
gsm.sendSMS(sendto, message);
delay(1000);
}
void loop() {}


<img width="250" height="555" alt="image" src="https://github.com/user-attachments/assets/8c38ba22-b387-4922-a21c-f0cc69ce7ad5" />


 
Data monitoring and logging using NodeRed from Master


A Master will be collecting the information from all the deployed nodes and sending the data to the base station so that the authorities can monitor elephant spotting and the data can be used to analyze the elephant sighting pattern and behaviours so that we can make the solution more efficient and bring in necessary changes and take better actions to avoid elephant-human conflicts and for a better co-existence
Now lets setup Node-red :
1.Install Node.js
Download the latest LTS version of Node.js from the official Node.js home page. It will offer you the best version for your system.
Run the downloaded MSI file. Installing Node.js requires local administrator rights; if you are not a local administrator, you will be prompted for an administrator password on install. Accept the defaults when installing. After installation completes, close any open command prompts and re-open to ensure new environment variables are picked up.
while installing make sure to tick this box
Once installed, open a command prompt and run the following command to ensure Node.js and npm are installed correctly.
Using Powershell: node --version; npm --version
Using cmd: node --version && npm --version
You should receive back output that looks similar to:
v18.15.0
9.5.0
2. Install Node-RED
Installing Node-RED as a global module adds the command node-red to your system path. Execute the following at the command prompt:
npm install -g --unsafe-perm node-red
3. Run Node-RED
Once installed, you are ready to run Node-RED
Then open your comment prompt and type
node-red
It will show the initialization of the Node-red in the cmd


<img width="579" height="555" alt="image" src="https://github.com/user-attachments/assets/b514e050-5539-4220-9bbc-993501032f87" />

 
from there copy the http://127.0.0.1:1880/
and paste it into chrome browser
and this workspace will open up


<img width="740" height="336" alt="image" src="https://github.com/user-attachments/assets/7bed14ee-a16a-4354-bbda-13060bd7b4a5" />

 
After that workspace has opened up we need something called the node-red-dashboard
inorder to install it :
click on the three bars you see on the top right and then click on manage palette and then go to install section and paste "node-red-dashboard" there and install it
the window will look like this :


<img width="740" height="503" alt="image" src="https://github.com/user-attachments/assets/f6bcc149-5035-46b0-8452-2b585e68ab56" />

 
Now we can start setting up the flow in node-red and we will show the data in a table in the dashboard where we can monitor and log the data of elephant sighting from the nodes with the date, time and location

<img width="740" height="407" alt="image" src="https://github.com/user-attachments/assets/44e7f310-eb6d-46a1-83c5-0dc29813ceeb" />

 
The EleTect dashboard will look like this.


Designing and manufacturing the Casing for Nodes and Master

A casing for the Nodes and Master was designed using SolidWorks.

Design of Node

https://youtu.be/Fs8tWA_q1AM

Design of Master

https://youtu.be/XL0--xHIrCQ

Manufacturing

https://youtu.be/xgO9uVvKEzs

The entire casing was fabricated using 3D printing in our college fablab, I used PLA+ as the material.I will give you the product link.If you need it you can purchase it.I found it quite good.Click on this link to purchase it.The manufacturing was done using Prusa and Ultimaker.
After the 3D printing process we finally assembled eveything and this is the final product.


<img width="740" height="416" alt="image" src="https://github.com/user-attachments/assets/543fd2b5-8d7b-40bc-9f39-c945f82476df" />



 ![Uploading image.png…]()


 
Demonstration

https://youtu.be/SIgVDPAxZdk


https://youtu.be/JUwJKVzlODY



Scalability of the Project

1) Modular Design:TinyML-enabled nodes enable quick deployment over large elephant corridors. According to a 2021 International Union for Conservation of Nature (IUCN) study, TinyML and other modular technology are especially well-suited for wildlife conservation applications because of their low infrastructure requirements and simplicity of scalability.
2) Range Adjustment: Depending on the length of the forest boundary is, the system can be scaled up or down by adding or removing nodes. Elephant migration patterns were used to determine the optimal node density for cost-effectiveness, as shown by a 2023 deployment in Kenya's Namunyak Wildlife Conservancy.
3) Habitat Diversity: Eletect isn't just for certain kinds of forests. A 2022 study that was published in the journal Ecological Applications discovered that elephants in different African and Asian settings showed aversion to bee noises, indicating the deterrent's universality.
4) Integration with Existing Systems: The LoRa or LoRaWAN communication technology can potentially integrate with existing wildlife monitoring systems, enhancing overall effectiveness.
5) Anti-Poaching:
● Early Warning Systems: Rangers might be informed of any poaching activities by nodes equipped with acoustic sensors, which could pick up strange sounds or gunshots. African savanna anti-poaching operations were greatly enhanced by acoustic monitoring equipment, according to a 2022 study published in Global Ecology and Conservation.
● Tracking Animals: By combining TinyML with GPS, rangers may be able to track endangered animals in real time, keeping an eye on their whereabouts and discouraging poaching. A 2023 pilot study in Nepal proved how well a device like this is in tracking rhinos.
6) Military Applications:
● Perimeter Security: Unauthorized incursions near borders or sensitive military sites may be detected by nodes. TinyML-based acoustic monitoring systems fared well in perimeter security applications, according to a 2021 study published in Sensors.
● Early Warning for Explosives: By adding more sensors, the system might be able to identify the acoustic characteristic of IEDs, which would provide important early warnings. Current research in this field shows encouraging findings from a 2022 study published in the journal PLOS One.
7) Natural Disaster Detection: Nodes with additional sensors can detect changes in air pressure, humidity, or seismic activity, providing early warnings for natural disasters like floods or landslides. A 2020 report by the World Meteorological Organization (WMO) highlights the importance of low-cost, scalable sensor networks for disaster risk reduction.

Further expanding on this project we made EleTect 1.5 the smart signage replacing traditional static signages.

💡Where it all started

<img width="740" height="523" alt="image" src="https://github.com/user-attachments/assets/a6a611f9-5fc1-4831-ab18-5f575ac05fe1" />


In the dense forests and mountainous regions of Kerala, especially areas like Nelliampathy, wild elephants frequently traverse routes that have been part of their migratory patterns for centuries. These pathways, known locally as “Aanathaara” (elephant corridors), are deeply embedded in the landscape and ecology. However, with rapid human expansion — including roads, farmlands, and settlements — these natural trails now intersect with human activity, often with devastating consequences.

While locals may instinctively understand where and when to be cautious, most visitors, tourists, and even daily commuters remain unaware of the risks.In early 2025, a tragic incident occurred in Nelliampathy, Kerala. A German tourist, unfamiliar with the terrain and unaware of a wild elephant blocking the road, ventured forward despite the locals’ warnings. Tragically, he encountered the elephant and lost his life. Traditional static signage, such as painted boards warning of elephants, often fades into the background and fails to provide real-time, actionable alerts. The result? Dangerous — and sometimes fatal — encounters that could have been avoided with better awareness.

https://youtu.be/seuNstVdjqc


That's where EleTect 1.5 comes in — combining TinyML, LoRa, solar power, and interactive signage to proactively warn and deter.

🛠️ What It Does

EleTect 1.5 is an advanced extension of the award winning EleTect 1.0 system. It introduces an interactive digital signage system that provides real-time warnings to riders and drivers when elephants are present ahead on forest roads.

🐘 EleTect Node (Detection Unit)

Detects elephants using a TinyML-powered system which can identify an elephant using vision and sound.

Uses LoRa to send elephant presence status to the signage node.

Triggers a deterrent mechanism (e.g., honeybee sound) only when vehicles are present.

🚦 Signage Node (Warning System)

Placed 500m before known elephant crossings.

Displays a bright, red, flashing elephant warning.

Integrated camera detects the presence of vehicles.

Sends vehicle presence data to EleTect Node.

All powered entirely by solar energy.

🔁 Workflow

Elephant detected ➡️ EleTect Node triggers LoRa alert to Sign Board.

Signboard flashes elephant warning if vehicles are approaching.

Signboard checks for vehicles using camera:

If vehicles are detected → message sent to EleTect Node.

EleTect Node waits 10 minutes → plays deterrent bee sound.

After elephants leave, detection stops → Signboard resets.


Architecture

Signages will be placed like below.

<img width="416" height="555" alt="image" src="https://github.com/user-attachments/assets/418e25c9-5fa8-44cb-ba61-3f184684bed7" />


🔗 Components Used

Component

EleTect Node

ESP32-C6 DevKitC-1

Grove LoRa-E5 Module

Solar Charging Modules

Custom battery pack

Custom LED panel

Enclosure Using Acrylic sheet or 3D Printed




🛠️ Step 1: Build the Custom Signage Enclosure

In this step, we’ll create a weatherproof and visually impactful enclosure that houses the electronics for the elephant warning signage system. The enclosure is made from 5mm clear acrylic sheets, designed in Fusion 360, and laser cut for precision.

🧰 Materials Needed

5mm thick clear acrylic sheet

Access to a laser cutter

Acrylic glue (e.g., Weld-On 3 or Fevikwik)

Vinyl cutter and precision knife

Reflective vinyl sticker sheet (yellow and red)

Matte black vinyl sheet

Clamps or tape for alignment

Fusion 360 or similar CAD software

Cooling film

🖥️ Step 1.1: Design the Enclosure in Fusion 360

Create a Design in Fusion360 for the enclosure.

<img width="740" height="529" alt="image" src="https://github.com/user-attachments/assets/843a544c-b730-464f-8542-c7d42fd8d08f" />


Sketch the front panel dimensions based on your component layout (camera, LEDs, LoRa antenna, etc.).Ensure the box has enough depth to house the electronics.

<img width="589" height="555" alt="image" src="https://github.com/user-attachments/assets/3a363351-7b09-4226-8aea-428d2f409f6b" />

<img width="740" height="469" alt="image" src="https://github.com/user-attachments/assets/078604ce-0230-49be-ac81-a2ad810068c3" />


Export each face of the enclosure as a DXF file for laser cutting.

<img width="312" height="555" alt="image" src="https://github.com/user-attachments/assets/fc2c763d-40eb-45e6-934a-5ca885266535" />


🔥 Step 1.2: Laser Cut the Acrylic Panels

Upload the DXF files to your laser cutter’s software.

Set your laser cutter to the appropriate power/speed settings for 5mm acrylic.

Carefully cut each panel and label them as you go to avoid confusion during assembly.Peel off any protective film after cutting.

👉 Safety first! Wear proper eye protection and operate the cutter in a ventilated area.

<img width="740" height="555" alt="image" src="https://github.com/user-attachments/assets/e9f591d6-f2fe-42fc-87d2-6c895c079955" />



https://youtu.be/p9OrC6K7Lsw


 

<img width="416" height="555" alt="image" src="https://github.com/user-attachments/assets/158af12c-25f5-4142-b64d-9a0ae27d2845" />


🧷 Step 1.3: Assemble the Enclosure

Lay out all the cut pieces on a clean surface.

<img width="555" height="555" alt="image" src="https://github.com/user-attachments/assets/877961db-79a1-4ace-89a5-096d72a4d476" />


Begin with the base and edges.Apply acrylic glue along the joining edges and press pieces together.Use clamps or masking tape to hold parts in place until dry.


https://youtu.be/pcny2LYDyHY


Continue assembling all sides until the box is complete.

<img width="740" height="555" alt="image" src="https://github.com/user-attachments/assets/432a9ff7-d8d1-4f58-919a-543d3c9c35b2" />


Let the entire assembly cure for several hours to ensure strong bonding.

👉 Tip: Double-check the alignment before applying glue — acrylic bonds instantly!Grind and smoothen the irregular edges using a grinding tool.

https://youtu.be/9nwdK971FR8

✨ Step 1.4: Apply the Reflective Graphics

Design an elephant silhouette and the text “ELEPHANTS AHEAD” using vector software (e.g., Adobe Illustrator or Inkscape).

<img width="312" height="555" alt="image" src="https://github.com/user-attachments/assets/97314987-435d-4efc-9fe1-3215ba5ddb30" />


Cut the design using a vinyl cutter from reflective vinyl sheet.

Clean the front acrylic panel with a microfiber cloth.Carefully transfer the reflective vinyl design onto the panel using transfer tape.

<img width="312" height="555" alt="image" src="https://github.com/user-attachments/assets/c3696e8b-8479-46bc-9251-31b8f18e1adf" />


<img width="416" height="555" alt="image" src="https://github.com/user-attachments/assets/a602cb34-3355-4429-929b-7224ca0f4764" />


Cover the remaining  back and side edges with matte black vinyl to block internal components and focus attention on the warning.

👉 Result: A bold, reflective front that is highly visible when headlights or onboard LEDs shine on it.

💡 Step 2: Building the Custom LED Panel

In this step, we’ll design and assemble a high-visibility LED panel in the shape of an elephant, mounted inside our previously built acrylic enclosure. This panel serves as a visual alert, visible from a distance even in low-light conditions.

🧰 Materials Required

<img width="416" height="555" alt="image" src="https://github.com/user-attachments/assets/8d85229b-2cbc-40c7-8836-9271187f8755" />


<img width="312" height="555" alt="image" src="https://github.com/user-attachments/assets/912ed693-d8ae-45c5-b725-198f60ff93ed" />


4x generic dotted PCBs (perforated board)

400x 5mm Red Clear LEDs

200x 68Ω resistors

22 AWG hookup wire

Soldering iron + solder wire

Black matte spray paint (optional, for aesthetics)

1x N-channel MOSFET (e.g., IRLZ44N)

1x 220Ω resistor (for MOSFET gate)

1x Custom 3S3P LiPo battery pack (11.1V nominal)

Heat shrink, glue, basic tools

🎨 Step 2.1: Prep and Paint the PCBs

Take your four dotted PCBs paint them with matte black paint — this step is optional but gives a professional look and improves contrast against the red LEDs.

<img width="416" height="555" alt="image" src="https://github.com/user-attachments/assets/3830dfd2-b593-4113-8c22-831547e6f04f" />


Let them dry completely.

👉 Tip: Paste a sheet or paper on the back of the pcb before painting so that the paint won't get into the backside✂️ Step 2.2: Join the PCBs to Form a Large Panel

Measure and cut the boards to your desired dimensions.

<img width="416" height="555" alt="image" src="https://github.com/user-attachments/assets/7252401c-1fe9-48cc-afbe-fa4b670a977d" />


Carefully align and glue the four PCBs together to create a larger panel.

<img width="416" height="555" alt="image" src="https://github.com/user-attachments/assets/54ed9dca-0b8a-41a7-91f6-4011187259b2" />

<img width="640" height="555" alt="image" src="https://github.com/user-attachments/assets/4dc32b07-0fb1-4ca6-bcbf-1b9266356099" />



Make sure all the solder pads align properly and the board is flat.

🐘 Step 2.3: Trace and Plan the LED Layout

Place the vinyl elephant signage or sticker over the panel as a reference.Using a white marker or chalk, roughly trace the outline of the elephant and the text “ELEPHANTS AHEAD”.

<img width="416" height="555" alt="image" src="https://github.com/user-attachments/assets/7fdc8d25-e76e-491a-bfe7-25c048fde940" />


Plan the LED positions inside this trace to match the shape as closely as possible

👉 Tip: Leave a bit of spacing between each LED to avoid overcrowding.

🔗 Step 2.4: LED Chain Design

We’ll use a simple and efficient wiring scheme:

2 LEDs in series + 1 resistor (68Ω) = 1 chain

Multiple such chains are wired in parallel across the panel

<img width="312" height="555" alt="image" src="https://github.com/user-attachments/assets/f785c09b-4d5e-4378-bea2-3193d9fa172a" />


Why this config?With a 3S (11.1V) LiPo battery, 2 red LEDs (approx. 2V each) + 68Ω resistor draws safe current and provides balanced brightness.

🧪 Step 2.5: Prototype and Test the LED Circuit

First, build one LED chain on a breadboard.

Power it using a bench power supply.

<img width="740" height="416" alt="image" src="https://github.com/user-attachments/assets/fc1475b2-6803-4b3b-9e22-a7ca6bfee753" />


<img width="312" height="555" alt="image" src="https://github.com/user-attachments/assets/a9c58f05-14ac-474b-ab27-256f345c9483" />



https://youtu.be/GQ8ii498P9E


Confirm brightness and measure current draw.Once satisfied, continue soldering the full design onto the board.

🔩 Step 2.6: Solder All LED Chains

Start from the top of the board, following your traced outline.

<img width="403" height="555" alt="image" src="https://github.com/user-attachments/assets/455fa115-dcb7-43c6-aff3-bf8540d8e824" />


Insert 2 LEDs in series and connect the 68Ω resistor to complete the chain.Continue placing and soldering LED chains across the board, following your elephant outline and text.

<img width="480" height="202" alt="image" src="https://github.com/user-attachments/assets/465c93c6-3c4d-4213-9640-c0c7b5526b2a" />


Use thin wires to connect common positive and negative rails at the back.

After soldering, check for shorts and test small sections individually.

⚡ Step 2.7: Power and Drive Circuit

Connect all the negative lines from each LED chain to a MOSFET drain.Connect the MOSFET source to ground.Use a 220Ω resistor on the MOSFET gate and connect it to your microcontroller’s digital output (for PWM or ON/OFF control).The positive rail of all LED chains goes directly to the power supply.

https://youtu.be/qenyklmx56E

Check heat levels and ensure no resistors or LEDs are overheating.

✅ Final Testing

Securely mount the pack inside the enclosure and wire it to the LED panel via a toggle switch or microcontroller control..Turn on the system and ensure all LEDs light up in the correct pattern.

<img width="740" height="416" alt="image" src="https://github.com/user-attachments/assets/7da9a4b6-32ee-436e-93e9-be671e594a08" />

https://youtu.be/64pGLh4sXxg


But unfortunately, it didn’t quite meet my expectations. During the first test, I wasn’t fully satisfied, as it didn’t look as refined or close to the vision I had in mind.

<img width="498" height="498" alt="image" src="https://github.com/user-attachments/assets/0f2cbbc7-d7d6-41ca-9b5b-7c209d0fb117" />


But then I had a small idea — if I could diffuse the LED light, it might look much cleaner and more aesthetically pleasing. To quickly test this, I placed a simple A4 sheet between the front acrylic panel and the LED panel.

https://youtu.be/2vTdIML7QeQ

After diffusing it with an A4 sheet, the display looked even better—cleaner and clearer. There were some dead LEDs ,so i replaced them and it worked perfect.

<img width="500" height="226" alt="image" src="https://github.com/user-attachments/assets/1d2bb59a-aebe-4f9e-a006-c5a799ea31c0" />


Initially, my idea was to keep the elephant silhouette completely black when the sign was inactive and then illuminate it in red once activated. To match this concept, I painted the PCB black so that the LEDs would remain invisible until turned on. However, when I tried adding a simple A4 sheet as a diffuser, it disrupted the clean aesthetic I was aiming for, as the sheet made the panel look less appealing.

To tackle this, I thought of using smoked acrylic. This material would give the panel a sleek black look when off, while still allowing the red LEDs to shine through when active. Pairing it with a thin frosted acrylic sheet underneath would help diffuse the light evenly, achieving both functionality and the desired aesthetics.

The challenge, however, was that smoked acrylic was not easily available at the time, and even if sourced, it would add to the cost and overall weight of the system. To find a more practical alternative, I came up with the idea of applying car window cooling film to the back of the front panel to replicate the smoked effect. For light diffusion, I could then use a lightweight and low-cost option like a thin plastic sheet or even butter paper. This way, I could preserve both the aesthetics and the functionality without compromising on budget or weight. Firstly apply the cooling film on the back of the front acrylic panel.



Then use a thin plastic sheet or butter paper to diffuse the light on top of that.

<img width="739" height="555" alt="image" src="https://github.com/user-attachments/assets/2ee1c420-6ce5-450a-91b5-b965ccb637d6" />


So to test it i quickly made a setup and tested it.

https://youtu.be/UoSKB1phJbM

Finally, after several trials, I was able to achieve exactly the result I had envisioned: a signage system that remains sleek and minimal when inactive, but transforms into a striking, attention-grabbing warning when activated.

<img width="740" height="555" alt="image" src="https://github.com/user-attachments/assets/314d5508-1854-48a1-b6e8-bc7f06ce1c09" />


Step 3:Custom model for vehicle detection

🧠 Central Controller: ESP32-C6-DevKitC-1
ESP32-C6-DevKitC-1
<img width="3329" height="2583" alt="esp32-c6-devkitc-1-isometric" src="https://github.com/user-attachments/assets/b31baa94-d35d-4b44-811e-ef33c85f29f2" />

At the heart of our smart signage system is the ESP32-C6-DevKitC-1, a powerful and flexible development board from Espressif, designed for modern IoT applications. This board is responsible for receiving elephant detection alerts from EleTect nodes, interpreting camera-based AI inferences from the Grove Vision AI module, and triggering appropriate responses—like visual signage alerts or honeybee deterrent playback.

We chose this board for its cutting-edge wireless connectivity, generous memory, and support for RISC-V-based on-device processing.

<img width="637" height="384" alt="image" src="https://github.com/user-attachments/assets/6d5cb87e-2ad5-4805-8bf3-e007e886b66a" />

<img width="754" height="459" alt="image" src="https://github.com/user-attachments/assets/42fb6bc1-2a7d-45ff-8db8-0b7ba5219ceb" />


🧩 How It Works in the EleTect Signage System

Mounted Inside the Smart Signage Unit
The ESP32-C6 board is installed inside our custom enclosure along with the  display, and power circuitry. It acts as the main controller and communication bridge.

Grove Vision AI Integration
The Grove Vision AI V2 module is connected via UART to the ESP32-C6. The Grove module runs its own on-device model to detect vehicles waiting near signage. It sends inference results (e.g. “vehicle detected”) to the C6 board via serial messages.

Data Fusion & Decision Logic
The ESP32-C6 receives elephant presence alerts from EleTect edge nodes via LoRa, and vehicle presence inferences from the camera. Based on these inputs, it decides whether to:Send alert to node to play the honeybee deterrent sound

Trigger LED display of smart signage

Log or escalate to forest officials (optional future SIM module)

LoRa Communication
An external LoRa module connects via SPI/UART. The C6 board listens for LoRa packets from the field-deployed acoustic EleTect nodes. When an elephant alert is received, it stores the event and coordinates camera-based checks before responding.

Signage & Deterrent ControlThe ESP32-C6 controls a DFPlayer Mini  speaker to play honeybee buzz sounds.

It drives an RED LED Panel  for visual alerts to oncoming drivers using MOSFET Drive.

GPIOs control any future add-ons (like floodlights ).

Power & Deployment
The board runs on 5V via USB-C or DC input and is designed for outdoor enclosure integration. It’s lightweight, low-power, and ideal for long-term signage deployment.


<img width="1200" height="869" alt="image" src="https://github.com/user-attachments/assets/e2420c45-f833-4253-9b85-6ad60ac6dab0" />


<img width="1187" height="1600" alt="image" src="https://github.com/user-attachments/assets/d457c848-7bc4-443a-8af6-f1524d6cf3c1" />


Custom model using google collab and Roboflow for Vehicle detection

<img width="740" height="531" alt="image" src="https://github.com/user-attachments/assets/2d7979bb-a2b3-4a31-bb3e-53818236653a" />


In this part, we'll kick off by labeling our dataset with the intuitive tools provided by Roboflow. From there, we'll advance to training our model within Google Colab's collaborative environment. Next up, we'll explore deploying our trained model using the SenseCraft Model Assistant, a process designed to smoothly bridge the gap between training and real-world applications. By the conclusion of this part, you'll have your very own custom model ready to detect vehicles, operational on Grove Vision AI V2.

From dataset to model deployment, our journey consists of the following key stages:

1. Dataset Labeling — This section details the process of acquiring datasets suitable for training models. There are two primary methods: utilizing labeled datasets from the Roboflow community or curating your own dataset with scenario-specific images, necessitating manual labeling.

2. Model Training with Google Colab — Here, we focus on training a model capable of deployment on Grove Vision AI V2, leveraging the dataset obtained in the previous step via the Google Colab platform.

3. Model Upload via SenseCraft Model Assistant — This segment explains how to employ the exported model file to upload our elephant detection model to Grove Vision AI V2 using the SenseCraft Model Assistant.

Step 1.Create a free Roboflow account

<img width="740" height="407" alt="image" src="https://github.com/user-attachments/assets/c586fb13-1ddb-412c-bd7b-3329595667b4" />


Roboflow provides everything you need to label, train, and deploy computer vision solutions. To get started, create a free Roboflow account.

Step 2. Creating a New Project and Uploading images

<img width="740" height="402" alt="image" src="https://github.com/user-attachments/assets/1af0e128-e486-4742-9a32-ea66f378b998" />


Once you've logged into Roboflow, Click on Create Project.\

Name your project ("EleTect 1.5"). Define your project as t as Object Detection. Set the Output Labels as Categorical

Now it's time to upload vehicle images.

Collect images of elephants. Ensure you have a variety of backgrounds and lighting conditions. On your project page, click "Add Images".

You can drag and drop your images or select them from your computer. Upload at least 100 images for a robust dataset.

click on Save and Continue

Step 3: Annotating Images

After uploading, you'll need to annotate the images by labeling vehicle.

Roboflow offers three different ways of labelling images: Auto Label, Roboflow Labeling and Manual Labeling.

<img width="471" height="555" alt="image" src="https://github.com/user-attachments/assets/39840ba1-3f03-4e53-865c-c57aab9b2161" />


Auto Label: Use a large generalized model to automatically label images.

Roboflow Labeling: Work with a professional team of human labelers. No minimum volumes. No upfront commitments. Bounding Box annotations start at $0.04 and Polygon annotations start at $0.08.

Manual Labeling: You and your team label your own images.

The following describes the most commonly used method of manual labelling.

Click on "Manual Labeling" button. Roboflow will load the annotation interface.

Select the "Start Annotating" button. Draw bounding boxes around the vehicle in each image.

Label each bounding box as vehicle.

Use the ">" button to move through your dataset, repeating the annotation process for each image.

Step 4: Review and Edit Annotations

It's essential to ensure annotations are accurate.

Review each image to make sure the bounding boxes are correctly drawn and labeled. If you find any mistakes, select the annotation to adjust the bounding box or change the label.

Step 5: Generating and Exporting the Dataset

Once all images are annotated. In Annotate click the Add x images to Dataset button in the top right corner.

Then click the Add Images button at the bottom of the new pop-up window.

Click Generate in the left toolbar and click Continue in the third Preprocessing step.

In the Augmentation in step 4, select Mosaic, which increases generalisation.

<img width="569" height="555" alt="image" src="https://github.com/user-attachments/assets/a93e509e-959b-41e6-9c1d-8b38a325e581" />


<img width="600" height="555" alt="image" src="https://github.com/user-attachments/assets/9f592e31-ee49-4df9-8d3e-bbda278810be" />


In the final Create step, please calculate the number of images reasonably according to Roboflow's boost; in general, the more images you have, the longer it takes to train the model. However, the more pictures you have will not necessarily make the model more accurate, it mainly depends on whether the dataset is good enough or not.

Click on Create to create a version of your dataset. Roboflow will process the images and annotations, creating a versioned dataset. After the dataset is generated, click Export Dataset. Choose the COCO format that matches the requirements of the model you'll be training.

<img width="740" height="517" alt="image" src="https://github.com/user-attachments/assets/cfa3a661-ba5f-4c82-9cd5-45ccfcb015e8" />


Click on Continue and you'll then get the Raw URL for this model. Keep it, we'll use the link in the model training step a bit later.

Congratulations! You have successfully used Roboflow to upload, annotate, and export a dataset for elephant detection model. With your dataset ready, you can proceed to train a machine learning model using platforms like Google Colab.

Training Dataset Exported Model ​

Step 1. Access the Colab Notebook​

You can find different kinds of model Google Colab code files on the SenseCraft Model Assistant's Wiki. If you don't know which code you should choose, you can choose any one of them, depending on the class of your model (object detection or image classification).

<img width="740" height="405" alt="image" src="https://github.com/user-attachments/assets/f6eab48b-f1c8-43bc-a512-62ea641cafc5" />


If you are not already signed into your Google account, please sign in to access the full functionalities of Google Colab.

Click on "Connect" to allocate resources for your Colab session.

<img width="740" height="394" alt="image" src="https://github.com/user-attachments/assets/3a84845f-df18-4921-8dd9-6f27d2a81de8" />


select the panel showing RAM and Disk

image.png

select "Change runtime type"

<img width="472" height="267" alt="image" src="https://github.com/user-attachments/assets/fa7d077d-67cb-4748-9701-23fccbd7a404" />


Select "T4 GPU"

<img width="508" height="422" alt="image" src="https://github.com/user-attachments/assets/26b71a71-755a-4b12-9f23-22b1b5c9852e" />


Now run the "Setup SSCMA"

<img width="740" height="307" alt="image" src="https://github.com/user-attachments/assets/23753601-ddcd-4a8d-90c4-ae419faa62a5" />



you will get a warning like this click on "Run anyways"

<img width="740" height="345" alt="image" src="https://github.com/user-attachments/assets/37ffebd6-3467-41f9-b8cc-755f01d691c0" />


Wait untill the repositary is fully clonedand installed all the dependencies.

<img width="740" height="321" alt="image" src="https://github.com/user-attachments/assets/9fe83857-aaf5-4e49-a6db-b023c5a58a71" />


now its finished

Now run the "download the pretrain model weights file

<img width="740" height="65" alt="image" src="https://github.com/user-attachments/assets/776c26be-7a76-4d30-977f-84c9054babc7" />


Step 2. Add your Roboflow Dataset​

Before officially running the code block step-by-step, we need to modify the code's content so that the code can use the dataset we prepared. We have to provide a URL to download the dataset directly into the Colab filesystem.

To customize this code for your own model link from Roboflow:

1)Replace Gesture_Detection_Swift-YOLO_192 with the desired directory name where you want to store your dataset.

2)Replace the Roboflow dataset URL (https://app.roboflow.com/ds/uQS9v4ZUkd?key=8d2CgUki6U)

with the link to your exported dataset (It's the Raw URL we got in the last step in Labelled Datasets). Make sure to include the key parameter if required for access.

3)Adjust the output filename in the wget command if necessary

(-O your_directory/your_filename.zip).4)Make sure the output directory in the unzip command matches the directory you created and the filename matches the one you set in the wget command.

Step 3. Adjustment of model parameters​

The next step is to adjust the input parameters of the model. Please jump to the Train a model with SSCMA section and you will see the following code snippet.

This command is used to start the training process of a machine learning model, specifically a YOLO (You Only Look Once) model, using the SSCMA (Seeed Studio SenseCraft Model Assistant) framework.

To customize this command for your own training, you would:

1)Replace configs/swift_yolo/swift_yolo_tiny_1xb16_300e_coco.py with the path to your own configuration file if you have a custom one.

2)Change work_dir to the directory where you want your training outputs to be saved.

3)Update num_classes to match the number of classes in your own dataset. It depends on the number of tags you have, for example rock, paper, scissors should be three tags.

4)Adjust epochs to the desired number of training epochs for your model. Recommended values are between 50 and 100.

5)Set height and width to match the dimensions of the input images for your model.

6)Change data_root to point to the root directory of your dataset.

7)If you have a different pre-trained model file, update the load_from path accordingly.

<img width="740" height="219" alt="image" src="https://github.com/user-attachments/assets/b9042c6f-7f29-42aa-b4b5-759af0bc6992" />




Step 5. Exportthe model​

After training, you can export the model to the format for deployment. SSCMA supports exporting to ONNX, and TensorFlow Lite at present

Step 6. Evaluate the model​

When you get to the Evaluate the model section, you have the option of executing the Evaluate the TFLite INT8 model code block.

Step 6. Download the exported model file​

After the Export the model section, you will get the model files in various formats, which will be stored in the Model Assistant folder by default. Our stored directory is EleTect 1.5.

<img width="518" height="459" alt="image" src="https://github.com/user-attachments/assets/9fe2b64f-071c-4339-a2e2-be9404915d27" />


select "ModelAssistatnt"

In the directory above, the .tflite model files are available for XIAO ESP32S3 and Grove Vision AI V2. For Grove Vision AI V2, we prefer to use the vela.tflite files, which are accelerated and have better operator support. And due to the limitation of the device memory size, we recommend you to choose INT8 model.

After locating the model files, it's essential to promptly download them to your local computer. Google Colab might clear your storage directory if there's prolonged inactivity. With these steps completed, we now have exported model files compatible with Grove Vision AI V2. Next, let's proceed to deploy the model onto the device.


Upload models to Grove Vision V2 via SenseCraft Model Assistant

Please connect the device after selecting Grove Vision AI V2 and then select Upload Custom AI Model at the bottom of the page.

<img width="740" height="405" alt="image" src="https://github.com/user-attachments/assets/f76a26ca-b5ff-4f5a-adf1-517d996c4393" />


You will then need to prepare the name of the model, the model file, and the labels. I want to highlight here how this element of the label ID is determined.

If you are using a custom dataset, then you can view the different categories and its order on the Health Check page. Just install the order entered here.

Then click Send Model in the bottom right corner. This may take about 3 to 5 minutes or so. If all goes well, then you can see the results of your model in the Model Name and Preview windows above.

Click on deploy and connect your grove vision V2.

Press Confirm and you are good to go.

Add the model to Edge impulse using BYOM Feature

<img width="1230" height="702" alt="image" src="https://github.com/user-attachments/assets/f437a540-819c-4d01-bac2-4a85f7d4913c" />




📦 Camera Enclosure Design and Fabrication

<img width="1200" height="913" alt="image" src="https://github.com/user-attachments/assets/1af98669-1b09-4e62-90da-4d0b80ae5edd" />


To enable reliable visual monitoring in forest-edge and roadside environments, we designed a custom enclosure for the Grove Vision AI V2 Module using Autodesk Fusion 360. This case houses the camera securely and is optimized for outdoor use, with a snug lens window, mounting slots, and environmental protection. The enclosure was 3D printed using PLA filament and tested for hardware alignment and field durability.

<img width="1200" height="1067" alt="image" src="https://github.com/user-attachments/assets/c9904c16-88f1-4300-b7d1-17d2f1929832" />

<img width="312" height="555" alt="image" src="https://github.com/user-attachments/assets/d24846ee-8222-4736-bd37-95231b74ce01" />

<img width="567" height="555" alt="image" src="https://github.com/user-attachments/assets/65c20cad-28a6-479a-ae74-5d464b7695bb" />




The camera system is mounted on top of the smart signage unit, giving it an elevated, unobstructed view of the road ahead. Its primary role is to detect the presence of vehicles near the signage location, enabling dynamic decision-making. If an elephant is detected  and remains in the elephant corridor for a prolonged time—potentially blocking the road—the system uses camera input to verify the presence of halted vehicles. In such cases, it automatically triggers the honeybee deterrent and visual warning mechanisms, encouraging the elephant to move away and clear the path safely.

<img width="544" height="429" alt="image" src="https://github.com/user-attachments/assets/9e8ded4c-453c-4e0a-870a-df06534c369a" />


For field reliability and modular maintenance, the camera module connects to the signage base using aviation-grade connectors, ensuring secure power and signal transmission in harsh outdoor conditions.
 

Where to place the camera

<img width="1200" height="1012" alt="image" src="https://github.com/user-attachments/assets/ce9f617d-e1d0-4cd5-a954-8657e8dd496b" />



 

Now that we have done training the vision based model, now we can connect it to EleTect node

🧠 Step 4: Connecting the Signboard to EleTect Node

<img width="312" height="555" alt="image" src="https://github.com/user-attachments/assets/6e0242ae-47fc-4cd1-861d-5f6f072c1029" />

Now that we have our physical enclosure and the custom LED warning panel ready, it's time to connect the system to the EleTect detection node using LoRa communication.

📡 Communication Architecture:

1.EleTect Node (Forest-side)

Detects elephant presence using:

Grove Vision AI V2 → vision-based elephant detection.

XIAO ESP32S3 Sense → sound-based detection.

On detection → Sends ELEPHANT_DETECTED message via LoRa to the Signboard Node.

If VEHICLE_PRESENT is received back → waits 10 minutes → activates bee sound deterrent via DFPlayer Mini + Speaker.

Sends ELEPHANT_LEFT when elephants leave → resets the system.

2.Signboard Node (Roadside)

Listens for elephant alerts from EleTect Node.

On detection → flashes warning LED (with elephant symbol) continuously until elephant leaves.

Uses Grove Vision AI V2 running a TinyML vehicle detection model to constantly check for vehicles.

If vehicles are detected while elephants are present → sends VEHICLE_PRESENT message to EleTect Node.

Outcome

🚦 Elephant but no vehicles → Only flashing signboard (no sound, less disturbance).

🚦 Elephant + vehicles present → Signboard flashes + EleTect triggers bee sound after 10 minutes.

✅ Once elephant leaves → Signboard turns off, deterrent stops, system resets.

🧰 What You’ll Need:

XIAO ESP32S3 – For LoRa and LED control

LoRa-E5 Grove Module – For receiving data from EleTect node3S3P Li-ion Pack – Custom power solution for high LED current drawMOSFET (e.g., IRF540N or similar) – To drive the LED panel

220Ω Resistor – Gate resistor for the MOSFET

Jumper Wires

🔌 Firmware for the Signboard XIAO ESP32S3:

Here's a basic sketch to control the LED flashing when elephant presence data is received from the EleTect node.

🧾 Code for the Signboard Node (Receiver):

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


🔋 Powering the System:

The entire signboard is powered by a custom 3S3P battery pack made using Li-ion cells (11.1V ~ 12.6V).And downed using a buck converter to 5V.

The MOSFET allows the microcontroller to switch the high current LED panel without overloading the XIAO.

🧩 Step 5: 3D Printing and Mounting the LED Panel to a Custom Stand

Stand Construction from Scrap Metal

To reduce costs and promote sustainability, the stand for the EleTect warning signage and solar panel was made entirely from scrap metal. Despite being built from repurposed material, it is sturdy, weather-resistant, and highly visible.

Materials Used

1-inch square metal pipe (scrap, reused)

Welding machine (for joints)

Cutting tool (angle grinder)

Anti-rust paint (to protect against corrosion in forest conditions)

Mounting bolts & brackets (for signage + solar panel)

Dimensions & Assembly

Height: ~8 feet (tall enough for clear visibility to drivers).

Pole: Single vertical square pipe serves as the main post.

Base: Welded flat support with angled bracing, bolted into the ground for stability.

Top Section:

Solar panel mounted with a small angled bracket for optimal sunlight.

Warning signage (“Elephants Ahead”) firmly attached just below the panel.

Construction Steps

Cutting the Scrap Pipe: The scrap pipe was cut into one 8 ft piece (main vertical) and smaller pieces for the base support.

Building the Base: A flat base with short stabilizers was welded to the bottom so it could be anchored securely into the ground with bolts.

Mounting the Sign & Solar Panel:

A horizontal bracket at the top holds the solar panel at an angle.

The triangular signage board is bolted slightly below the solar panel.

Painting & Finishing: The entire stand was coated with anti-rust paint, ensuring long durability outdoors.

Benefits

Ultra Low Cost: Made from waste scrap material.

Eco-Friendly: Reuses metal that would otherwise be discarded.

Durable: Strong enough to withstand wind, rain, and wildlife contact.

Scalable: Simple design can be replicated in bulk for multiple forest corridors.

Designing the Mount

To ensure stability and long-term deployment in outdoor environments, we designed a custom 3D printed mount that securely holds the LED signboard and aligns it on the custom metal pipe-based stand.

🛠️ Materials Used:

PLA filament (Black)

3D printerM4 bolts and nutsScrews (for enclosure-mounting)steel pipe (for pole mounting)

🎯 Design Process:

CAD Modeling:

Using Fusion 360 design a mounting bracket that matches the dimensions of the acrylic signboard enclosure

<img width="1200" height="1044" alt="image" src="https://github.com/user-attachments/assets/11ff694e-0069-4f8e-84b6-fc86b9d828be" />


Printing:
https://youtu.be/4GXDACcXri0


Assembly:

Once printed, the enclosure was carefully slotted into the mount

<img width="1200" height="1002" alt="image" src="https://github.com/user-attachments/assets/e8d25165-6895-4468-844c-30348152ce39" />


Secure with M4 bolts on either side to lock it in place.The mount was then clamped or screwed onto a metal/PVC pole, completing the physical installation.

https://youtu.be/G5NsqCx_GkA


🌍 Sustainability and Edge Deployment

No internet required: Uses LoRa for remote communication

Fully solar-powered, ideal for deployment in forest areas

Deterrent only activates when necessary, conserving energy and minimizing disturbance to wildlife

📽️ Video Demonstration


https://youtu.be/pJKIsCA3bDk


Website Structure


https://youtu.be/JQBXXlHDU3I


The Eletect website serves as a pivotal platform connecting advanced hardware deployed in forests and agricultural areas with users, including community members and forest officers. It provides real-time monitoring and alerts, enabling timely detection of elephants, wild boars, and illegal activities. This immediate access allows users to take swift preventive measures, ensuring human-wildlife conflict mitigation and forest protection.

Through hardware-software integration, the website consolidates data from AI-enabled devices such as Grove Vision AI modules, XIAO ESP32S3 sensors, and LoRa/LoRaWAN communication nodes. This integration ensures that information from multiple detection points is centrally accessible, visualized on maps, and displayed in interactive tables and image galleries. The platform allows users to track wildlife locations, upload and review images, and monitor detection logs in a clear and intuitive manner.

The website also provides role-based access, allowing community users to monitor wildlife and receive alerts, while forest officers gain access to advanced functionalities like illegal activity detection, anti-poaching monitoring, and deforestation tracking. This ensures that both the public and authorities can respond effectively and collaboratively.

Moreover, this maintains a historical record of detections, storing timestamps, locations, and images. This data supports research, trend analysis, and strategic planning for conservation efforts. Its scalable design allows for future enhancements, such as adding more detection nodes, expanding species monitoring, or integrating mobile notifications, all through the same user-friendly interface.

In summary, the Eletect website transforms raw hardware data into actionable intelligence, offering a centralized, real-time, and scalable solution for wildlife conservation, community safety, and forest management. By bridging the gap between field-deployed devices and end-users, it ensures efficient monitoring, informed decision-making, and proactive protection of both humans and wildlife.

Home Page

Hero section highlighting the      system’s purpose.

Key features displayed as      cards: Elephant Detection, Wild Boar Protection, Illegal Activity      Detection.

Login prompt for Community      Users and Forest Officers. 📷

Login Page

Role-based login form for      Community and Officer accounts.

Credentials validation to      provide access to dashboards.

<img width="740" height="361" alt="image" src="https://github.com/user-attachments/assets/8f2e5a7c-56f7-498a-bf32-265948d7b607" />


Dashboard

Accessible after login.

Role-specific features      displayed as interactive cards.

Community Users: Elephant,      Boar, Bird monitoring.

Officers: Illegal Activity,      Deforestation, Anti-Poaching.

<img width="740" height="193" alt="image" src="https://github.com/user-attachments/assets/f3bea2cf-55ec-43bc-8c73-85aecbc139b4" />

<img width="740" height="192" alt="image" src="https://github.com/user-attachments/assets/a65f18b0-7338-4901-93bc-060448d6554f" />



Feature Page

Shows feature-specific      information, detection logs, uploaded images, and live monitoring.

For Elephant detection: Map      showing detected locations (Kothamangalam, Kottapady), sample images, and      hardware integration details.

<img width="740" height="350" alt="image" src="https://github.com/user-attachments/assets/ebe4eefc-b74b-4286-9828-41bc90cc1d59" />


<img width="740" height="355" alt="image" src="https://github.com/user-attachments/assets/6dbe1b29-c80f-4fd6-8647-2628dd50256d" />


AI-powered detection using      hardware nodes deployed in forests.

Key locations: Kothamangalam      (detected on 30/06/2025), Kottapady (detected on 20/12/2024).

Features:

Detection log with timestamp,       location, confidence, size, and alert status.

Live monitoring with       real-time alerts.

Image gallery for uploaded       elephant images and sample images.

Map integration using Google       Maps or Leaflet to visualize detected locations.

· Backend Framework: Using Python with FastAPI to handle API requests, user authentication, and real-time data processing.

· Database: PostgreSQL for storing user accounts, detection logs, uploaded images, and hardware sensor data.

· Data Structure: Each detection entry includes location, GPS coordinates, detection confidence, size, timestamp, and alert status.

· Hardware Integration: Field nodes with cameras and sensors send data via REST APIs  to the backend.

· Real-Time Updates: Backend can push instant updates to the frontend using WebSockets, ensuring immediate alerts and monitoring.

· Scalability & Security: PostgreSQL ensures reliable persistence, and the backend architecture allows scaling for more users, devices, and features.



🔄 Updated Version (V2) — Fully 3D-Printed Body + Custom 12V LED Strip Panel

After completing the first version of the EleTect Signage node, we designed and built a second, improved version with several major upgrades focused on durability, manufacturability, and better nighttime visibility.

✅ 1. Fully 3D-Printed Enclosure
🔄 Updated Version (V2) — Fully 3D-Printed Body + Custom 12V LED Strip Panel

After completing the first version of the EleTect Signage node, we designed and built a second, improved version with several major upgrades focused on durability, manufacturability, and better nighttime visibility.

✅ 1. Fully 3D-Printed Enclosure


[printing video](https://youtube.com/shorts/Y8RRU8p8Xps?si=zQXjvkMarSZ--831)


<img width="960" height="1280" alt="image" src="https://github.com/user-attachments/assets/a998a3d8-1215-48d3-a0ba-1d8ca41bfe47" />

<img width="1200" height="900" alt="image" src="https://github.com/user-attachments/assets/8d65bafa-9d66-44b1-974a-315e5915f416" />

<img width="555" height="555" alt="image" src="https://github.com/user-attachments/assets/aa573d28-acbb-47fd-be4e-234aa39c78cf" />

<img width="555" height="555" alt="image" src="https://github.com/user-attachments/assets/dfb51538-81c6-469e-bc41-bcce0569a590" />


The entire signage housing was redesigned in Fusion 360 and is now 100% 3D-printed, making it:

More rugged and weather-resistant

Easier to assemble and service

Customizable for different mounting setups

More suitable for outdoor deployments in forest-side roads

The new enclosure includes proper mounting slots, structured ribs for reinforcement, and a dedicated sealed chamber for the electronics.

✅ 2. Upgraded LED Panel → Custom 12V LED Strip Module


[Initial test video](https://youtube.com/shorts/t8Q6Qv7HXrM?si=4E1iOYaPRBNmvcE8)
 
<img width="555" height="555" alt="image" src="https://github.com/user-attachments/assets/ead70b69-7d91-4987-93e2-44d7400d840b" />



Instead of the earlier panel, the V2 design uses a custom 12V high-brightness LED strip module, which:

Provides significantly higher visibility in fog, rain, and nighttime

Works directly with the MOSFET driver stage

Is easier to replace or extend based on signage size

Offers a more even and uniform glow across the panel

This makes the alert signal much more noticeable for drivers when an elephant alert is triggered.

🔧 3. Improved Cable Routing & Connector System

The updated version incorporates:

Proper cable ducts within the enclosure

Aviation-grade connectors for camera + power + signal lines

Better strain relief for long-term outdoor use

📌 Summary

The second version of the EleTect Signage node is:

More durable

Brighter and safer for roadside awareness

Fully modular

Ready for scalable deployment

This improved version is now the recommended design for future field installations.

The entire signage housing was redesigned in Fusion 360 and is now 100% 3D-printed, making it:

More rugged and weather-resistant

Easier to assemble and service

Customizable for different mounting setups

More suitable for outdoor deployments in forest-side roads

The new enclosure includes proper mounting slots, structured ribs for reinforcement, and a dedicated sealed chamber for the electronics.

✅ 2. Upgraded LED Panel → Custom 12V LED Strip Module

Instead of the earlier panel, the V2 design uses a custom 12V high-brightness LED strip module, which:

Provides significantly higher visibility in fog, rain, and nighttime

Works directly with the MOSFET driver stage

Is easier to replace or extend based on signage size

Offers a more even and uniform glow across the panel

This makes the alert signal much more noticeable for drivers when an elephant alert is triggered.

🔧 3. Improved Cable Routing & Connector System

The updated version incorporates:

Proper cable ducts within the enclosure

Aviation-grade connectors for camera + power + signal lines

Better strain relief for long-term outdoor use

📌 Summary

The second version of the EleTect Signage node is:

More durable

Brighter and safer for roadside awareness

Fully modular

Ready for scalable deployment

This improved version is now the recommended design for future field installations.


V2 of EleTect Detection node


To keep the system field-ready, weatherproof, and modular, the entire enclosure was designed in Fusion 360. The design balances IP67 protection, thermal management, and easy servicing using aviation connectors.

CAD Design (Fusion 360)

<img width="472" height="555" alt="image" src="https://github.com/user-attachments/assets/dd6463f7-e734-4dbf-a773-52b5456d5140" />


Fusion 360 was used for parametric enclosure modeling.

Key design considerations:

Drip edges and sloped tops to shed rainwater.

Sun-facing panel mount with adjustable tilt (10–20°)

Internal mounting bosses for Vision AI board, XIAO S3, LoRa SX1262, and amplifier.

Connector panel with GX12/GX16 aviation connectors and IP67 glands.

Separate battery box (external IP67 case) linked via XT30/XT60 for safety and easy replacement.

RF clearance zone for LoRa SMA antenna, isolated from metal LED plate to reduce interference.



Prototyping & Manufacturing

3D Printing:

Main enclosure shell printed in using 3D Priting.

<img width="472" height="555" alt="image" src="https://github.com/user-attachments/assets/c3a52b21-e9c4-4371-9f5d-f09d0be1ae0a" />


Internal mounts & brackets (board trays, speaker cages) printed in ABS.

Custom vent plugs printed with hydrophobic membranes for condensation control.



<img width="739" height="555" alt="image" src="https://github.com/user-attachments/assets/ff78bdc1-e63a-4241-a137-837a18aabc97" />

<img width="416" height="555" alt="image" src="https://github.com/user-attachments/assets/8c7a53aa-48e9-4207-bc66-243846bb678c" />



Laser Cutting (Acrylic/Aluminum):

<img width="416" height="555" alt="image" src="https://github.com/user-attachments/assets/7c6a211a-a9d3-499f-a0d5-3ff298772317" />


Acrylic faceplates (transparent IR-filter window for camera, clear slots for strobes).

<img width="771" height="437" alt="image" src="https://github.com/user-attachments/assets/cf0f1b88-85d4-42b2-98df-76d9b51916d5" />


<img width="416" height="555" alt="image" src="https://github.com/user-attachments/assets/a31cdc53-b4ee-408b-9e31-908f04dc572e" />


Assembly:

Boards mounted with M3 brass heat-set inserts (.

Rubber gaskets + O-rings used at lid seams and aviation connectors.

Speakers mounted on vibration-isolating rubber grommets.


<img width="416" height="555" alt="image" src="https://github.com/user-attachments/assets/7a24247c-44a5-4c0d-a940-81ced77e3dde" />





Cable routing handled via IP67 glands with strain relief.



Why Modular?

Field servicing → damaged modules (amp, LEDs, speakers, boards) can be hot-swapped.

Upgrade path → e.g., swap strobes for higher-wattage LEDs or speakers with horns.

Cross-project reuse → same enclosure shell works for EleTect Razor, Ember, or Link with minor internal changes.



🆕 EleTect Node: Upgraded, Rugged, and Multi-Threat Aware


<img width="416" height="555" alt="image" src="https://github.com/user-attachments/assets/f307358a-8da0-4bd5-b7d5-b89e5c459f51" />


The latest version of the EleTect Node introduces major enhancements — both in structural durability and AI functionality — transforming it into a powerful multi-threat early warning system for forest-edge safety.

🛡️ Ruggedized for the Wild

To withstand extreme weather and terrain:

The enclosure is now fully weatherproofed, with improved thermal and structural resilience

All electronics are protected with IP-rated housings for long-term, unattended outdoor operation

🎯 Acoustic Intelligence — Smarter Than Ever

All detection models now run on acoustic data, making the system more effective even in low-visibility or obstructed environments. This includes:

Elephant Call Detection — Recognizes vocalizations and rumbling calls of elephants

Gunshot Detection — Alerts forest rangers to potential poaching activity

Chainsaw Detection — Identifies illegal logging and tree-cutting attempts

Vehicle Sound Detection — For situational awareness at road crossings

(And support for future additions like human voices or distress sounds)

These Edge AI models are trained using Edge Impulse and run entirely on-device, enabling fast, cloud-free response using minimal power.

<img width="424" height="555" alt="image" src="https://github.com/user-attachments/assets/cd39bd04-a614-4fbc-a73e-6b32c8c3f4c5" />
<img width="1200" height="746" alt="image" src="https://github.com/user-attachments/assets/3b46d827-a406-40e2-8f2e-7c1632f2adeb" />


<img width="1200" height="697" alt="image" src="https://github.com/user-attachments/assets/eed42232-37fd-4898-8598-76828c0a0058" />



Note: If you're looking to build similar acoustic models, refer to the earlier section in this documentation where we cover full steps on dataset creation and Edge Impulse model training.

📷 Enhanced Vision – Wider, Sharper, Night-Ready

The visual detection system has also been upgraded:

The old 67° field-of-view camera has been replaced with a 160° wide-angle night-vision camera

This dramatically improves coverage in dense forest terrain and during low-light conditions, making detection more reliable 24/7

Power, Build & Connectors

<img width="416" height="555" alt="image" src="https://github.com/user-attachments/assets/76f1d5e9-40a8-4903-af2f-f37246d44d23" />


Standard activity (MED):

Energy: ~80 Wh/day

Solar: 30–40 W panel (PSH 4 h, 0.7 derate)

Battery (1 night + losses): 3S 10 Ah

Fuses: Main 10 A; Amp 3 A; Strobes 7.5 A; Logic 1 A

Wiring: Battery/LED/Amp AWG16–18; Logic AWG22–24

High activity (more flashes):

Energy: ~96 Wh/day

Solar: 40–50 W panel

Battery: 3S 12 Ah



🌧️ Weatherproofing & Layout (IP67)

![Uploading image.png…]()



Enclosure: PETG/ASA/ABS, drip edges, overhangs, UV-resistant

Glands: IP67 cable glands for every external cable (power, speakers, LED harness, RF)

Power (GX12-2 or GX16-2)

Speakers L/R (GX12-2 each)

Strobes harness (GX16-4 or GX16-6, depending on grouping)

LoRa antenna via SMA bulkhead (not aviation) with 50 Ω coax

Connectors: GX12/GX16 aviation with O-rings & caps:

Power (GX12-2 or GX16-2)

Speakers L/R (GX12-2 each)

Strobes harness (GX16-4 or GX16-6, depending on grouping)

LoRa antenna via SMA bulkhead (not aviation) with 50 Ω coax

Battery: in external IP67 box with XT30/XT60, main fuse, and strain relief

Vent: hydrophobic ePTFE vent plug to minimize condensation




🌏 Exhibition at Maker Faire Shenzhen 2025


<img width="960" height="1280" alt="image" src="https://github.com/user-attachments/assets/40417e60-4a88-450f-ac2a-be9648d6dca9" />


The EleTect Signage system was officially exhibited at Maker Faire Shenzhen 2025, one of Asia’s largest community-driven innovation events.
 
![Uploading image.png…]()



At the event, we showcased:

The complete EleTect workflow — Detection Node → LoRa Communication → Signage Alert Node

The new fully 3D-printed enclosure and hardware improvements

The upgraded 12V LED strip–based signage panel

The real-time demo of vehicle detection using Grove Vision AI V2

Live explanation of the LoRa communication pipeline and how alerts propagate
 

https://youtu.be/5J3gPbpJmuA


The project received strong interest from makers, engineers, educators, and sustainability-oriented groups, especially due to its focus on wildlife protection, rural safety, and low-power distributed sensing.

Participating in Maker Faire Shenzhen 2025 helped validate the design, gather feedback from industry experts, and explore possibilities for scaling the EleTect system for real-world deployments.

🌍 Future Plans

![Uploading image.png…]()


One of the most impactful upgrades we are planning for EleTect is the integration of Google Maps into the system. Currently, EleTect is capable of detecting elephant movement and triggering local deterrents or alerts. However, by incorporating Google Maps, we aim to create a real-time, centralized monitoring system that will drastically improve response times and ensure safer coexistence between humans and elephants.

🔹 How It Will Work:

Live Location Mapping – Each EleTect unit deployed in the field will send detection data (timestamp, location coordinates, and event details) to a central cloud server.

Google Maps Visualization – The data will be displayed on Google Maps, showing the exact position of elephant sightings or conflicts in real-time.

Risk Zone Alerts – Areas with frequent detections will be marked as “High Risk” zones, allowing authorities and locals to take precautionary measures.

Community Access – Farmers, drivers, and forest officials will be able to access a live web/app dashboard powered by Google Maps, ensuring they are instantly informed of nearby elephant movement.  Historical Data & Prediction – By overlaying historical data on Google Maps, the system can predict elephant routes and hotspots, helping in long-term conflict mitigation planning.

🔹 Benefits:

Prevent Road Accidents – Drivers will receive live alerts on elephant crossings ahead, reducing the risk of collisions (like the unfortunate German tourist incident).

Safer Agriculture – Farmers can check real-time elephant movement before stepping into their fields at night.

Better Resource Deployment – Forest officials can allocate patrols and deterrents more effectively.

Community Awareness – Local communities gain accessible, visual information, fostering safer human-elephant coexistence.

While designed for mitigating human-elephant conflict, the system can also be adapted for other regions and animals, such as kangaroos, deer, or bison, with only minimal modifications required. The overall goal remains the same: to reduce accidents, save human lives, and protect wildlife.

![Uploading image.png…]()

![Uploading image.png…]()



This integration will make EleTect not just a detection and deterrent system, but a smart, location-aware safety network that can save countless lives – both human and elephant.

🌱 Let’s Save Lives — Humans and Elephants Alike

With EleTect 1.5, we bridge the communication gap between the wild and the road.
Our goal is simple yet powerful: make our forests safer — not by blocking wildlife, but by understanding and respecting their natural paths.

By combining AI, long-range communication, and intelligent alert systems, EleTect aims to reduce human–elephant conflict and create safer environments for both wildlife and people.

We are now looking forward to deploying this system in real-world locations, gathering field data, and continuously improving the platform.
Our hope is to make a genuine impact — protecting wildlife, preventing accidents, and ultimately making people’s lives better.



