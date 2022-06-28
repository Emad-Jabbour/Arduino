unsigned long pastTime =0;
bool Delay(unsigned long delayTime){
  if(millis() - pastTime > delayTime){
    pastTime =millis();
    return 1;
  }else{
    return 0;
  }
  
}

void setup(){
  pinMode(13,1);

}
void loop(){
  if(Delay(1000)){
    digitalWrite(13, !digitalRead(13));
  }

  
}
