#define pinTrig 4
#define pinEcho 2
long cm, distancia;

void setup()
{
  Serial.begin(9600);
  pinMode(pinTrig, OUTPUT);
  pinMode(pinEcho, INPUT);
}

void loop()
{
  digitalWrite(pinTrig, LOW);
  delayMicroseconds(5);
  digitalWrite(pinTrig, HIGH);
  delayMicroseconds(10);
  digitalWrite(pinTrig, LOW);
  
  distancia = pulseIn(pinEcho, HIGH);
  
  cm = distancia*0.034/2;
  Serial.println("Distancia: ");
  Serial.println(cm);
  Serial.println("cm");
}