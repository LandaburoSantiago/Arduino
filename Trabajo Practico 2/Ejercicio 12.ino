#define pinPir 2
#define ledR 5
#define ledG 4
#define ledB 3
int contador = 0;

void setup()
{
  Serial.begin(9600);
  pinMode(ledR, OUTPUT);
  pinMode(pinPir, INPUT);
}

void loop()
{
  int valorPir = digitalRead(pinPir);
  digitalWrite(ledR, LOW);
  digitalWrite(ledB, LOW);
  delay(500);
  Serial.println(valorPir);
  if (valorPir == HIGH){
    digitalWrite(ledR, HIGH);
    delay(500);
  }else{
    digitalWrite(ledB, HIGH);
    delay(500);
  }
}