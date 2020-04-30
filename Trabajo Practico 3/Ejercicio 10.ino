#include <Servo.h>

#define pinTrig 4
#define pinEcho 3
#define pinServo 2
#define pinLed 5

Servo ser;

long cm, distancia;

void setup()
{
  Serial.begin(9600);
  pinMode(pinTrig, OUTPUT);
  pinMode(pinEcho, INPUT);
  pinMode(pinLed, OUTPUT);
  ser.attach(pinServo);
  digitalWrite(pinTrig, LOW);
}

void loop()
{
  digitalWrite(pinTrig, HIGH);
  delayMicroseconds(10);
  digitalWrite(pinTrig, LOW);
  distancia = pulseIn(pinEcho, HIGH);
  cm = distancia*0.034/2;
  if (cm < 30){
    digitalWrite(pinLed, HIGH);
  }else{
    digitalWrite(pinLed, LOW);
    ser.write(0);
    delay(1900);
    ser.write(180);
    delay(1900);
  }
}