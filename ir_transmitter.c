/*
    Project name : Arduino Uno IR Transmitter (IR LED)
    Modified Date: 29-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-uno-ir-transmitter
*/

#include <IRremote.h>  // Include the IRremote library for modulation

// Define the pin connected to the IR LED
const int IR_LED_PIN = 3;  // Change this pin according to your setup

IRsend irsend;  // Create an instance of the IRsend class

void setup() {
  // No specific setup needed for IR transmitter using IR LEDs
}

void loop() {
  // Send a sample IR signal (NEC protocol) to demonstrate
  unsigned int data = 0x20DF10EF;  // Example IR code (NEC protocol)

  // Send the IR signal
  irsend.sendNEC(data, 32);  // Send the data and the number of bits
  delay(1000);  // Delay before sending next signal
}
