#define pinTrig 4
#define pinEcho 2
#define ledR 5
#define ledG 6
long cm, distancia;

void setup()
{
  Serial.begin(9600);
  pinMode(pinTrig, OUTPUT);
  pinMode(pinEcho, INPUT);
  //pinMode(ledR, OUTPUT);
  digitalWrite(pinTrig, LOW);
}

void loop()
{
  digitalWrite(pinTrig, HIGH);
  delayMicroseconds(10);
  digitalWrite(pinTrig, LOW);
  digitalWrite(ledR, LOW);
  digitalWrite(ledG, LOW);
  distancia = pulseIn(pinEcho, HIGH);
  cm = distancia*0.034/2;
  Serial.println(cm);
  if (cm < 5){
    digitalWrite(ledR, HIGH);
  }else if(cm < 10){
    analogWrite(ledG, 30);
    analogWrite(ledR, 255);
  }else if(cm < 25){
    analogWrite(ledG, 255);
    analogWrite(ledR, 255);
  }else{
    analogWrite(ledR, 0);
  }
  delay(200);
}