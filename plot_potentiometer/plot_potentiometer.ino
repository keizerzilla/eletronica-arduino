#include <Ultrasonic.h>

#define SONIC_TRIG 4
#define SONIC_ECHO 5
#define POT_INPUT A5

Ultrasonic ultrasonic(SONIC_TRIG, SONIC_ECHO);
float pot_val = 0.0f;
float dist = 0.0f;
long tof = 0.0f;

void setup() {
   pinMode(POT_INPUT, INPUT);
   Serial.begin(9600);
}

void loop() {
  pot_val = map(analogRead(POT_INPUT), 0, 1023, 0, 255);
  tof = ultrasonic.timing();
  dist = ultrasonic.convert(tof, Ultrasonic::CM);
  
  Serial.println(dist);
}
