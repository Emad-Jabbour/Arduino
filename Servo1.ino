#include <Servo.h>
Servo S;
void setup()
{
  S.attach(3);
}

void loop()
{
 S.write(0);
 delay(2000);
 S.write(180);
 delay(2000);
  
}
