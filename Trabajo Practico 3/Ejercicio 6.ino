#define pinTrig 4
#define pinEcho 2
#define pinBuzzer 3
long cm, distancia;
void setup()
{
  Serial.begin(9600);
  pinMode(pinTrig, OUTPUT);
  pinMode(pinEcho, INPUT);
  pinMode(pinBuzzer, OUTPUT);
  digitalWrite(pinTrig, LOW);
}

void loop()
{
  digitalWrite(pinTrig, HIGH);
  delayMicroseconds(10);
  digitalWrite(pinTrig, LOW);
  distancia = pulseIn(pinEcho, HIGH);
  cm = distancia*0.034/2;
  if (cm >= 2 && cm <6){
    tone(pinBuzzer, 500);
    delay(250);
    noTone(pinBuzzer);
    delay(250);
  }else if (cm >= 6 && cm < 12){
    tone(pinBuzzer, 500);
    delay(500);
    noTone(pinBuzzer);
    delay(500);
  }else if (cm >= 12 && cm < 20){
    tone(pinBuzzer, 500);
    delay(1000);
    noTone(pinBuzzer);
    delay(1000);
  }else if (cm >= 20 && cm <= 30){
    tone(pinBuzzer, 500);
    delay(1500);
    noTone(pinBuzzer);
    delay(1500);
  }else{
    noTone(pinBuzzer);
  }
} 