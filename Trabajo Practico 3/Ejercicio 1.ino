#include <Servo.h>
#define pinServo 2

Servo ser;

void setup()
{
  Serial.begin(9600);
  ser.attach(pinServo);
}

void loop()
{
  int rand = random(1, 181);
  ser.write(rand);
  delay(1500);
}