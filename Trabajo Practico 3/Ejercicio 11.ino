#include <Servo.h>
#define pinServo 4
#define pinBuzzer 3
#define ledPin1 6
const int c = 261;
const int d = 294;
const int e = 329;
const int f = 349;
const int g = 391;
const int gS = 415;
const int a = 440;
const int aS = 466;
const int b = 494;
const int cH = 523;
const int cSH = 554;
const int dH = 587;
const int dSH = 622;
const int eH = 659;
const int fH = 698;
const int fSH = 740;
const int gH = 784;
const int gSH = 830;
const int aH = 880;
int counter;
Servo ser;
void setup()
{
  Serial.begin(9600);
  pinMode(pinBuzzer, OUTPUT);
  ser.attach(pinServo);
}

void loop()
{
  //Variant 1
  ser.write(0);
  beep(f, 250);  
  beep(gS, 500);  
  beep(f, 350);  
  beep(a, 125);
  beep(cH, 500);
  beep(a, 375);  
  beep(cH, 125);
  beep(eH, 650);
  ser.write(180);
  delay(500);
  //Repeat second section
  secondSection();
 
  //Variant 2
  ser.write(0);
  beep(f, 250);  
  beep(gS, 500);  
  beep(f, 375);  
  beep(cH, 125);
  beep(a, 500);  
  beep(f, 375);  
  beep(cH, 125);
  beep(a, 650);  
  ser.write(180);
  delay(650);
} 


void beep(int note, int duration)
{
  //Play tone on buzzerPin
  tone(pinBuzzer, note, duration);
  digitalWrite(ledPin1, HIGH);
  delay(duration);
  digitalWrite(ledPin1, LOW);
  //Stop tone on buzzerPin
  noTone(pinBuzzer);
  delay(50);
  //Increment counter
  counter++;
}
void secondSection()
{
  beep(aH, 500);
  beep(a, 300);
  beep(a, 150);
  beep(aH, 500);
  beep(gSH, 325);
  beep(gH, 175);
  beep(fSH, 125);
  beep(fH, 125);    
  beep(fSH, 250);
 
  delay(325);
 
  beep(aS, 250);
  beep(dSH, 500);
  beep(dH, 325);  
  beep(cSH, 175);  
  beep(cH, 125);  
  beep(b, 125);  
  beep(cH, 250);  
 
  delay(350);
}