#define pinTrig 4
#define pinEcho 2
#define ledR 5
long cm, distancia;

void setup()
{
  Serial.begin(9600);
  pinMode(pinTrig, OUTPUT);
  pinMode(pinEcho, INPUT);
  pinMode(ledR, OUTPUT);
  digitalWrite(pinTrig, LOW);
}

void loop()
{
  digitalWrite(pinTrig, HIGH);
  delayMicroseconds(10);
  digitalWrite(pinTrig, LOW);
  distancia = pulseIn(pinEcho, HIGH);
  cm = distancia*0.034/2;
  Serial.println(cm);
  if (cm < 5){
    digitalWrite(ledR, HIGH);
  }else{
    digitalWrite(ledR, LOW);
  }
  delay(200);
}