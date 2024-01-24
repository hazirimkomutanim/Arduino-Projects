
#define ldr A4


void setup() {
  Serial.begin(9600);
}


void loop() {
  int light = analogRead(ldr);
  Serial.print("ISIK DEGERI ->");
  Serial.println(light);
  delay(1000);
}
