#include <Servo.h>

#define SERVO_PIN 6

Servo servo;
int pos;

void setup() {
  servo.attach(SERVO_PIN);
  servo.write(0);
}

void loop() {
}
