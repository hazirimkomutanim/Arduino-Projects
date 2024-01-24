
#define led 9
#define ldr A4

void setup() {
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}


void loop() {
 
  int light = analogRead(ldr);
  Serial.println(light);
  delay(1000);
  
  if (isik < 600) {
    digitalWrite(led, 0);
    delay(1000);
  }
  else {
    digitalWrite(led, 1);
    delay(1000);
  }

}
