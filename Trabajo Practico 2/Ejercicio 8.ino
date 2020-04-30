#define pinSensor 2
#define ledR 5
int contador = 0;

void setup()
{
  Serial.begin(9600);
  pinMode(ledR, OUTPUT);
  pinMode(pinSensor, INPUT);
}

void loop()
{
  int valorTilt = digitalRead(pinSensor);
  Serial.println(valorTilt);
  if (contador < 10){
    if (valorTilt == 1){
      contador++;
      digitalWrite(ledR, HIGH);
      delay(500);
    }
  }else{
    contador = 0;
  }
  Serial.println(contador);
  digitalWrite(ledR, LOW);
  delay(500);
}