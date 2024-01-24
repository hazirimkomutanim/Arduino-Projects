
#define led 9
#define potpin A4


void setup() {
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}


void loop() {
  int potdegree = analogRead(potpin);
  int pot = map(potdegree,0,1023,0,255);
  Serial.println(pot);
  analogWrite(led, pot);

  delay(150);
}
