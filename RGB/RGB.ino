#define red 9
#define green 11
#define blue 10

#define Bbutton 6
#define Rbutton 7
#define Gbutton 8 


void setup() {
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
  
  pinMode(Bbutton, INPUT);
  pinMode(Rbutton, INPUT);
  pinMode(Gbutton, INPUT);
}


void loop() {
  
  int button1 = digitalRead(Rbutton);
  int button2 = digitalRead(Bbutton);
  int button3 = digitalRead(Gbutton);
  
  if(button1 == 1)
    analogWrite(blue, 255);
  else
    analogWrite(blue, 0);

  if(button2 == 1)
    analogWrite(red, 255);
  else
    analogWrite(red, 0);
  
  
  if(button3 == 1)
    analogWrite(green, 255);
  else
    analogWrite(green, 0);

}
