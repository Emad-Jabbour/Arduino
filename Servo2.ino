#include <Servo.h>
Servo S;
void setup()
{
  S.attach(3);
}

void loop()
{
 int pot = analogRead(A0);
 S.write(pot/6);
 delay(10);

  
}
