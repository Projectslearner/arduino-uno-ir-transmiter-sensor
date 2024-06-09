/*
    Project name : IR Transmiter Sensor
    Modified Date: 10-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-uno-ir-transmiter-sensor
*/

#include <IRremote.h>

// Define pin for IR LED
#define IR_LED_PIN 3

// Create IRsend object
IRsend irsend;

void setup() {
  Serial.begin(9600);
}

void loop() {
  // Send IR signal
  irsend.sendNEC(0x20DF10EF, 32); // Example NEC IR code (adjust as needed)
  
  Serial.println("IR signal sent");
  delay(1000); // Delay between IR signals
}
