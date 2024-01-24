#include <Servo.h>

Servo servo;

#define led 4
#define pot A4
#define water_s A0
#define servoo 11;


void setup() {
  Serial.begin(9600);
  
  pinMode(led, OUTPUT);
  pinMode(water_s, INPUT);
  servo.attach(servoo);
}


void loop() {
  
  int potdegree = analogRead(pot);
  int wdegree = analogRead(water_s);
  int x = map(potdegree, 0,1023,0,180);
  servo.write(x);
  
  Serial.print("Su Değeri:");
  Serial.println(wdegree);
  Serial.print("Potansiyometre:");
  Serial.println(potdegree);
  
  if(wdegree > 1022)
    digitalWrite(led, 1);
  else 
    digitalWrite(led, 0); 
  
}
