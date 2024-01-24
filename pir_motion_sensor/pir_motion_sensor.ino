
#define led 9
#define pir 8


void setup() {
  Serial.begin(9600);
  
  pinMode(led, OUTPUT);
  pinMode(pir, INPUT);
}


void loop() { 
  int motion = digitalRead(pir);
  Serial.println(motion);
  delay(250);
  
  if (hareket == 1)
    digitalWrite(led, 1);
  else
    digitalWrite(led, 0);
}
