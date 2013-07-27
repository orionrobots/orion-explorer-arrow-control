#include "MotorControl.h"

Motor motorLeft(10, 8, 9); //A
Motor motorRight(3, 4, 5); //B

void setup() {
  // initialize serial:
  Serial.begin(9600);
}

unsigned long timeout = 0;

void loop() {
  //Stop after the timeout
  if (millis() > timeout) {
    motorLeft.stop();
    motorRight.stop();
  }
  if(Serial.available()) {
    char data = (char)Serial.read();
    if (data == ' ') {
      motorLeft.stop();
      motorRight.stop();        
    } else {
      motorLeft.forward();
      motorRight.forward();
      //reset the timeout
      timeout = millis() + 1000;
    }
  }
}
