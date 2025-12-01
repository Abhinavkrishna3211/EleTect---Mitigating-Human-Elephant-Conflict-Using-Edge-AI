Introduction
<img width="584" height="555" alt="image" src="https://github.com/user-attachments/assets/47cd4a0d-84aa-4d12-908c-96d3e3c644d0" />

Communities in Kerala that live close to forest boundaries are seriously threatened by conflicts between humans and elephants. Tragic events that result in death, wild elephants have destroyed families and uprooted livelihoods. The number of human casualties were 3930 during an eight-year period which requires immediate response. "EleTect, " our endeavor, uses technology to facilitate early detection. At the margins of forests, nodes with TinyML capabilities keep watch and swiftly notify authorities. Our inventiveness doesn't stop there, though. We use the sound elephants naturally dread, the drone of honey bees as a harmless deterrent. "EleTect" seeks to alter the narrative by encouraging safer coexistence, reducing conflicts, and supporting conservation efforts—one in which people and elephants coexist together
Problem Statement
WhatsApp Image 2024-05-16 at 20.06.58_8717f167.jpg
News paper reports on recent Elephant attacks in Kerala
Kerala, a state known for its lush forests and diverse wildlife, has faced a growing hazard :Human- Elephant Conflicts. Tragic incidents involving wild elephants turning deadly have occurred in areas such as Wayanad, Mananthavady, Munnar, and Idukki. An angry elephant crushed a tribal woman who was collecting honey in the wild. A man in Mananthavady lost his life as a result of a tusker breaking into a residential area. In the same way, another guy was attacked by an elephant on the Kannimala estate, which is close to Munnar. And an elephant in the Idukki district killed a 70-year-old woman. These tragic occurrences highlight how urgent it is to develop workable answers. With an emphasis on early detection, deterrents, and communication, the "Eletect" project seeks to protect lives, foster coexistence, and make a positive contribution to wildlife conservation. "Eletect" uses technology to identify elephants early in order to lessen the impact of these conflicts. Despite their majesty and strength, elephants have a startling weakness: they are afraid of some noises. The sound of bees buzzing is the most noticeable among them. The sound of bees is a surefire way for these gentle giants, despite their great strength, to become wary and even retreat. We may use this amazing natural occurrence to our advantage and the benefit of elephants as well as people. Using this knowledge in the "Eletect" project to develop a long-term resolution to conflicts between people and elephants. We carefully use honey bee noise to discourage elephants from approaching residential areas where people live. As a harmless deterrent, the buzzing noise guides elephants away without endangering them. It's a peaceful strategy that honors both species. At the boundaries of forests, nodes with TinyML capabilities are placed in a thoughtful way. Elephants are deterred and conflicts avoided by using deterrents like playing honey bees noises. Costeffective warnings are ensured through the use of LoRa or LoRaWAN technologies to promote communication between nodes and central systems. The project aims to reduce conflict, support conservation efforts, and encourage a safer cohabitation between humans and elephants. Scalability guarantees that the solution may be successfully implemented in various locations, safeguarding both human life and natural environments.

Solution Overview
Data acquisition architecture .png
caption (optional)
By integrating the Seeed Studio Grove Vision AI V2 module and Xiao ESP32S3 Sense within the same enclosure, equipped with a speaker for emitting deterrent sounds, we've created a comprehensive system for elephant detection and mitigation. The Grove Vision AI V2 module runs a vision-based TinyML model using the onboard camera to detect elephants, while the ESP32S3 Sense employs a sound-based TinyML model to detect elephant presence through surrounding sounds. This combination not only ensures multiple layers of detection but also allows for real-time decision-making without relying on external servers, thanks to TinyML's efficiency and autonomy. Furthermore, by harnessing solar power for all components, the system becomes self-sustainable, making it ideal for deployment in remote areas. The use of TinyML on low-power IoT devices not only minimizes energy consumption but also facilitates rapid response to detected events, such as activating deterrent measures like playing honeybee sounds to prevent elephants from entering human habitats. This holistic approach addresses the challenges of human-elephant conflicts by offering a sustainable, efficient, and effective solution.
image.png
caption (optional)
This is how we planned to deploy the project.We will be having multiple nodes in the elephant attack prone area which wil spot the elephant and produce deterrent sounds and also a master to which all the nodes will send the information through LoRa and The master willsend alert to the locals when an elephant is spotted near them and aslo will send all of the collected data to the base station from where we can monitor everything and study about the elephant behaviours and track the pattern of elephant sighting which can be used to improve the projects accuracy and make the life of those who are affected safer.
Some studies shows that elephants are afraid of bee sounds, so we decided to use it as the deterrent sound.
image.png
caption (optional)
🌿 Field Survey, Government Approval & Real-World Testing
To ensure that EleTect truly addresses on-ground challenges of human-elephant conflict (HEC), we conducted an extensive community survey and received official clearance for field testing from the Divisional Forest Officer (DFO) Kothamangalam, Mr. Varun Dalia IFS, and Forest Range Officer, Mr. Jaleel.
🧭 Survey & Study Area
Our field study focused on Kothamangalam and Kottapady, two regions of Kerala severely affected by elephant incursions. These locations lie at the foothills of the Western Ghats, close to dense forests — making them high-risk zones for HEC incidents.
Using household surveys, we collected firsthand data from residents to understand the real impact of conflicts.
Out of 100 houses surveyed, 85 reported direct elephant attacks on residential or agricultural areas.
Major losses identified included:
Crop damage: Reported by 66% of respondents
Injury or death of people: Reported by 38.4% of respondents
These alarming numbers reinforced the urgency of deploying a technological mitigation solution like EleTect.
Screenshot 2025-10-06 144224.png
caption (optional)

🏛️ Official Approval & Collaboration
We formally presented EleTect to the DFO office, Kothamangalam, and the Forest Range Office, discussing both its safety and community benefits.
After technical evaluation, the forest department approved live field trials of the system within designated buffer zones around Kothamangalam and Kottapady.
Screenshot 2025-10-06 144348.png
caption (optional)

The department’s involvement ensured ethical deployment — protecting both wildlife and local communities — and validated EleTect as a practical conservation technology.
🌍 Field Testing & Early Results
Following approval, EleTect prototypes were installed along forest boundaries where elephant movement was frequent.
Each node combined vision + audio TinyML with LoRa connectivity to relay detections in real time.
Screenshot 2025-10-06 144450.png
caption (optional)

Initial trials showed promising outcomes:
Locals reported fewer night-time elephant entries after installation.
Forest officers received consistent detection logs and LoRa alerts.
The bee-buzz deterrent effectively turned elephants away without harm.
The positive community feedback and official validation confirm that EleTect can be scaled safely for real-world conservation use.
