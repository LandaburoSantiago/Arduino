#include <Servo.h>
#define pinServo 2
#define pinPote 5

Servo ser;

void setup()
{
  Serial.begin(9600);
  ser.attach(pinServo);
}

void loop()
{
  int rand = random(1, 181);
  long valorPote = analogRead(pinPote);
  valorPote = map(valorPote, 0, 1023, 1, 181);
  ser.write(valorPote);
  delay(1500);
}