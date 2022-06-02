
float sum(float x1, float x2){

return x1 + x2; 
  
}

void STR1(String s1, String s2){
  Serial.println(String(s1)+String(" ")+String(s2));
}

void setup() {
Serial.begin(9600);
}

void loop() {
//Serial.println(sum(6.26,3));
STR1("Ej","Electro");
while(1);
}
