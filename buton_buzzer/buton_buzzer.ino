
int buzzer = 7;
int button = 10;


void setup() {
  pinMode(button,INPUT);
  pinMode(buzzer,OUTPUT);
}

 
void loop() { 
  if (digitalRead(button) == 1)
    digitalWrite(buzzer,1);
  else
    digitalWrite(buzzer,0);
}
