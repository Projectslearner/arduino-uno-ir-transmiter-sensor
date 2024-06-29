# Arduino Uno IR Transmitter (IR LED)

#### Project Overview

This project demonstrates how to use an IR LED with an Arduino Uno to transmit infrared signals. The Arduino sends a sample IR signal using the NEC protocol to showcase the IR LED's functionality. The IRremote library is utilized for modulating the IR signal.

#### Components Needed

- **Arduino Uno**
- **IR LED**
- **Resistor (typically 220Ω to 1kΩ)**
- **Jumper Wires**
- **Breadboard**

#### Block diagram


#### Circuit Setup

1. **Connect the IR LED to Arduino Uno:**
   - **Anode (longer leg) of the IR LED:** Connect to digital pin 3 on the Arduino Uno through a current-limiting resistor.
   - **Cathode (shorter leg) of the IR LED:** Connect to GND on the Arduino Uno.

#### Instructions

1. **Circuit Setup:**
   - Connect the IR LED to the Arduino Uno as described in the circuit setup section.

2. **Code Upload:**
   - Open the Arduino IDE and create a new sketch.
   - Copy and paste the provided Arduino code into the sketch.

3. **Testing:**
   - Upload the code to the Arduino Uno.
   - Point an IR receiver (like the one used in the Arduino Uno IR Receiver Module project) towards the IR LED.
   - Verify if the receiver detects the transmitted IR signal.

#### Applications

- **Remote Control Systems:** Use in projects where IR remote-like functionality is required.
- **Home Automation:** Implement in smart home systems for controlling devices using IR signals.
- **Consumer Electronics:** Integrate into electronics projects for transmitting specific IR codes.

#### Notes

- Ensure the IR LED is correctly connected to the Arduino Uno and powered.
- Modify the code to send different IR protocols or custom IR codes as per your project requirements.
- IR LEDs typically operate at a wavelength of around 940nm; ensure compatibility with your IR receiver.

---

🌐 [ProjectsLearner](https://projectslearner.com/learn/arduino-uno-ir-transmitter)  
📧 [projectslearner@gmail.com](mailto:projectslearner@gmail.com)  
📸 [Instagram](https://www.instagram.com/projectslearner/)  
📘 [Facebook](https://www.facebook.com/projectslearner)  
▶️ [YouTube](https://www.youtube.com/@ProjectsLearner)  
📘 [LinkedIn](https://www.linkedin.com/in/projectslearner)

Crafted with ❤️ by ProjectsLearner