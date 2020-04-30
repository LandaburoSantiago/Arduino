#define pinPulsador 2
#define ledR 5
#define ledG 4
#define ledB 3
int contador = 0;

void setup()
{
  Serial.begin(9600);
  pinMode(ledR, OUTPUT);
  pinMode(pinPulsador, INPUT);
}

void loop()
{
  int valorPulsador = digitalRead(pinPulsador);

  if (valorPulsador == HIGH){
   	digitalWrite(ledG, HIGH);
    digitalWrite(ledR, HIGH);
  }else{
    digitalWrite(ledG, LOW);
    digitalWrite(ledR, LOW);
    digitalWrite(ledB, LOW);
  }
  delay(500);
}