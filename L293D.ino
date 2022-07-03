
void setup()
{
pinMode(2,1);
pinMode(3,1);

}

void loop()
{
  Forward(2,3);
  delay(1000);
  backward(2,3);
  delay(1000);
  Stop(2,3);
  delay(1000);

}

void Forward(int pin1 , int pin2){
  
  digitalWrite(pin1,1);
    digitalWrite(pin2,0);


}

void backward(int pin1 , int pin2){
 digitalWrite(pin1,0);
    digitalWrite(pin2,1);

}

void Stop (int pin1 , int pin2){
  
  digitalWrite(pin1,0);
    digitalWrite(pin2,0);


}
