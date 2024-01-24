
#define led 9
#define trigg 10
#define echoo 11


void setup() {
  pinMode(led, OUTPUT);
  pinMode(trigg, OUTPUT);
  pinMode(echoo, INPUT);

  Serial.begin(9600);
}


void loop() {
  
  digitalWrite(trigg, 1);
  delay(100);
  digitalWrite(trigg, 0);
  
  int t = pulseIn(echoo, 1);
  int range = (t/2)/29.1/2;
  
  Serial.println(range);
  delay(100);
  
  if (range < 30) {
    digitalWrite(led, 1);
    delay(100);
    digitalWrite(led, 0);
  }
  else 
    digitalWrite(led, 0);

}
