// C++ code
//
void setup()
{
  pinMode(2,INPUT);
  pinMode(5,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int i=digitalRead(2);
  Serial.print(i);
  if (i==1) {
    digitalWrite(5,HIGH);
    delay(5000);}
  else {
    digitalWrite(5,LOW);
    delay(1000);}
}