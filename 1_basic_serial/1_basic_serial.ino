#include "MotorControl.h"

Motor motorLeft(10, 8, 9); //A
Motor motorRight(3, 4, 5); //B

void setup() {
  // initialize serial:
  Serial.begin(9600);
}

void loop() {
  if(Serial.available()) {
    char ignore = (char)Serial.read();
    motorLeft.forward();
    motorRight.forward();
    delay(100);
    motorLeft.stop();
    motorRight.stop();
  }
}
