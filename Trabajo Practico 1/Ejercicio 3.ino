#define ledG 4
#define ledB 3
#define ledR 2
void setup()
{
	Serial.begin(9600);
  	pinMode(ledG, OUTPUT);
  	pinMode(ledB, OUTPUT);
  	pinMode(ledR, OUTPUT);
}

void loop()
{
  for (int i = 1; i<8; i++){
    int numero = i;
    color(numero);
    delay(2000);
    digitalWrite(ledG, LOW);
    digitalWrite(ledB, LOW);
    digitalWrite(ledR, LOW);
    delay(2000);
    }  
}

void color(int numero){
  switch(numero){
    case 1:
      digitalWrite(ledG, HIGH);
      digitalWrite(ledB, LOW);
      digitalWrite(ledR, LOW);
   	  break;
    case  2:
      digitalWrite(ledG, LOW);
      digitalWrite(ledB, HIGH);
      digitalWrite(ledR, LOW);
   	  break;
    case 3:
      digitalWrite(ledG, LOW);
      digitalWrite(ledB, LOW);
      digitalWrite(ledR, HIGH);
   	  break;
    case 4: 
      digitalWrite(ledG, HIGH);
      digitalWrite(ledB, HIGH);
      digitalWrite(ledR, LOW);
      break;
    case 5:
      digitalWrite(ledG, HIGH);
      digitalWrite(ledB, LOW);
      digitalWrite(ledR, HIGH);
      break;
    case 6:
      digitalWrite(ledG, LOW);
      digitalWrite(ledB, HIGH);
      digitalWrite(ledR, HIGH);
      break;
    case 7:
      digitalWrite(ledG, HIGH);
      digitalWrite(ledB, HIGH);
      digitalWrite(ledR, HIGH);
      break;
  }
}
