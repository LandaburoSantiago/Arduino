#define ledVer 4
#define ledRo 3
#define ledAm 2
void setup()
{
	Serial.begin(9600);
  	pinMode(ledVer, OUTPUT);
  	pinMode(ledAm, OUTPUT);
  	pinMode(ledRo, OUTPUT);
}

void loop()
{
  int numero = random(0, 11);
  if (numero == 1 || numero == 3 || numero == 7){
      digitalWrite(ledRo, HIGH);
      delay(2000);
      digitalWrite(ledRo, LOW);	
  }else if(numero == 0 || numero == 2 || numero == 8){
    		digitalWrite(ledVer, HIGH);
      		delay(2000);
      		digitalWrite(ledVer, LOW);
  }else if(numero == 4 || numero == 5 || numero == 9){
    		digitalWrite(ledAm, HIGH);
      		delay(2000);
      		digitalWrite(ledAm, LOW);
  		}else{
    		digitalWrite(ledAm, LOW);
            digitalWrite(ledRo, LOW);
            digitalWrite(ledVer, LOW);
    		delay(2000);
  		};
}