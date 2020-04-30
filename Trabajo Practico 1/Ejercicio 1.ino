#define led1 4
#define led2 3
#define led3 2
void setup()
{
	Serial.begin(9600);
  	pinMode(led1, OUTPUT);
  	pinMode(led2, OUTPUT);
  	pinMode(led3, OUTPUT);
}

void loop()
{
  	digitalWrite(led3, LOW);
  	digitalWrite(led1, HIGH);
    delay(2000);
  	digitalWrite(led1, LOW);
  	digitalWrite(led2, HIGH);
  	delay(2000);
  	digitalWrite(led2, LOW);
  	digitalWrite(led3, HIGH);
  	delay(2000);
}