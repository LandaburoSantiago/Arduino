#define ledR 4
#define ledG 3
#define ledY 2
void setup()
{
	Serial.begin(9600);
  	pinMode(ledR, OUTPUT);
  	pinMode(ledG, OUTPUT);
  	pinMode(ledY, OUTPUT);
}

void loop()
{
  float valorPote = analogRead(0);
  valorPote = map(valorPote, 0, 1023, 0, 255);
  Serial.println(valorPote);
  analogWrite(ledG, valorPote);
}
