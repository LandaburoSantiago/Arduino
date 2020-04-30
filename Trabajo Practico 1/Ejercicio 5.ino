#define ledR 6
#define ledG 3
#define ledB 5
void setup()
{
	Serial.begin(9600);
  	pinMode(ledR, OUTPUT);
  	pinMode(ledG, OUTPUT);
  	pinMode(ledB, OUTPUT);
}

void loop()
{
  float valorPoteR = analogRead(0);
  float valorPoteB = analogRead(1);
  float valorPoteG = analogRead(2);  
  valorPoteR = map(valorPoteR, 0, 1023, 0, 255);
  valorPoteB = map(valorPoteB, 0, 1023, 0, 255);
  valorPoteG = map(valorPoteG, 0, 1023, 0, 255);
  analogWrite(ledR, valorPoteR);
  analogWrite(ledB, valorPoteB);
  analogWrite(ledG, valorPoteG);
}
