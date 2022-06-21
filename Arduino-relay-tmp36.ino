
void setup()
{
pinMode(2,1);
}

void loop()
{
  float tv = temp(A0);
  
  if(tv >30){
    digitalWrite(2,1);
    
  }else if(tv <= 28){
     digitalWrite(2,0);
  }
}


float temp(int temp){
  float t = analogRead(temp);
  t = t * 0.00488;
  t = t - 0.5;
  t = t * 100;
  return t;
  
}
