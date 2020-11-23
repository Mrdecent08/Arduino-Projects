void setup()
{
  pinMode(6,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(3,OUTPUT);
}

void loop()
{
  Forward();
  delay(3000);
  Backward();

}
void Forward(){
  digitalWrite(6,HIGH);
  digitalWrite(5,LOW);
  digitalWrite(3,HIGH);
  digitalWrite(4,LOW);
}

void Backward(){
  digitalWrite(6,LOW);
  digitalWrite(5,HIGH);
  digitalWrite(3,LOW);
  digitalWrite(4,HIGH);
}