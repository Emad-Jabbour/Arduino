
void setup()
{
  Serial.begin(9600);
}

void loop()
{
Serial.println(Temp(A0));
  delay(1000);
}

float Temp(int Apin){
  float var = analogRead(Apin);
  var = var * 0.00488;
  var = var - 0.5;   // في حال استخدام حساس ال35 قم بحذف هذا السطر
  var = var * 100;
 return var;

}
