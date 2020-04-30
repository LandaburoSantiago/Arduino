#define ledR 5
#define ledG 3
#define ldrPin 2

void setup()
{
	Serial.begin(9600);
  	
}

void loop()
{
  float valorLdr = 0;
  valorLdr = analogRead(ldrPin);
  Serial.println(valorLdr);
  valorLdr = map(valorLdr, 366, 1018, 0, 255);
  analogWrite(ledR, valorLdr);
  analogWrite(ledG, valorLdr);
  
  delay(100);
}