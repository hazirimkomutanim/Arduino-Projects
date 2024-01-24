
int led = 7;
int button = 10;


void setup() {
  pinMode(button,INPUT);
  pinMode(led,OUTPUT);
}

 
void loop() { 
  if (digitalRead(button) == 1)
    digitalWrite(led,1);
  else
    digitalWrite(led,0);
}
