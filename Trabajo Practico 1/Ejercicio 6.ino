#define ledR 6
#define ledG 3
#define ldrPin 0

void setup()
{
	Serial.begin(9600);
  	
}

void loop()
{
  float valorLdr = 0;
  valorLdr = analogRead(0);
  Serial.println(valorLdr);
  delay(100);
}
