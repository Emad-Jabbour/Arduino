// C++ code
//
void setup()
{
pinMode(6,HIGH);
}

void loop(){
  if(digitalRead(2)){
    for(int i = 100;i<1000;i++){
      tone(6,i);
        delay(1);
    
    }
    
  }

  noTone(6);
}
