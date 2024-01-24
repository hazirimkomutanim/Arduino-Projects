
#define buzzer 8


void setup() {
  pinMode(buzzer, OUTPUT);
}


void loop(){
  
  digitalWrite(8,1);
  delay(1000);
  digitalWrite(buzzer, LOW);
  delay(10000);
  
}
