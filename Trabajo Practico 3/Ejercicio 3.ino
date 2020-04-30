#include <Servo.h>
#define pinServo 2

Servo ser;
int cont = 0;

void setup()
{
  Serial.begin(9600);
  ser.attach(pinServo);
}

void loop()
{
  int rand = random(1, 181);
  ser.write(rand);
  cont ++;
  if (cont == 3){
    Serial.println(rand);
    delay(1500);
    ser.write(0);
    delay(1500);
    ser.write(90);
    delay(1500);
    ser.write(180);
    delay(1500); 
    cont = 0;
  }
  delay(2000);
}