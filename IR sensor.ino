#include<IRremote.h>
int RECV_PIN =7;
IRrecv irrecv(RECV_PIN);
decode_results results;


void setup()
{
  pinMode(2, OUTPUT);
  Serial.begin(9600);
  Serial.println("Enabling IRin");
  irrecv.enableIRIn();
  Serial.println("Enabled IRin");
}

void loop()
{ 
  if(irrecv.decode(&results))
  {
  	Serial.println(results.value,HEX);
  	irrecv.resume();
  	if(results.value==0xFD08F7)
  	{
  		digitalWrite(2,HIGH);
  	}
  	else if(results.value==0xFD8877)
  	{
 		digitalWrite(2,LOW);
  	}
   }
  delay(20);
}
