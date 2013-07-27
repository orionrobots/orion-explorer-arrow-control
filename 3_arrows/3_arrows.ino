#include "MotorControl.h"

#define COMMAND_LEFT 'a'
#define COMMAND_RIGHT 'd'
#define COMMAND_FORWARD 'w'
#define COMMAND_BACK 's'
#define COMMAND_STOP ' '

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
    //always reset the timeout
    timeout = millis() + 1000;
    switch(data) {
      case COMMAND_FORWARD:
        motorLeft.forward();
        motorRight.forward();
        break;
      case COMMAND_BACK:
        motorLeft.back();
        motorRight.back();
        break;
      case COMMAND_LEFT:
        motorLeft.back();
        motorRight.forward();
        break;
      case COMMAND_RIGHT:
        motorLeft.forward();
        motorRight.back();
        break;
      case COMMAND_STOP:
      default:
        motorLeft.stop();
        motorRight.stop();
    }
  }
}
