#define pinPote 5
#define pinMotor 3

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  long valorPote = analogRead(pinPote);
  valorPote = map(valorPote, 0, 1023, 0, 255);
  analogWrite(pinMotor, valorPote);
  delay(500);
}