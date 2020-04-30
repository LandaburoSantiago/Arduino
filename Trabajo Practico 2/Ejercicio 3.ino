#define pinLdr 0
#define ledR 5
long cm, distancia;

void setup()
{
  Serial.begin(9600);
  pinMode(ledR, OUTPUT);
}

void loop()
{
  float valorLdr = analogRead(pinLdr);
  valorLdr = map(valorLdr, 366, 1018, 0, 255);  
  Serial.println(valorLdr);
  if (valorLdr < 250){
 	 digitalWrite(ledR, HIGH);
  }
  digitalWrite(ledR, LOW);
  delay(733);
}