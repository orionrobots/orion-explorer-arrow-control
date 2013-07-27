#include "MotorControl.h"

Motor motorLeft(10, 8, 9); //A
Motor motorRight(3, 4, 5); //B

void setup() {
  motorLeft.forward();
  motorRight.forward();
  delay(2000);
  motorLeft.forward();
  motorRight.back();
  delay(1000);
  motorLeft.forward();
  motorRight.forward();
  delay(2000);
  motorLeft.stop();
  motorRight.stop();
}

void loop() {
}
