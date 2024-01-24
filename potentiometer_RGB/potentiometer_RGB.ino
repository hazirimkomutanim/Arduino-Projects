#define red 9
#define green 10
#define blue 11
#define pot_r A1
#define pot_g A3
#define pot_b A5


void setup() {
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
}


void loop() {
  
  int potdegree_r = analogRead(pot_r);
  int potdegree_g = analogRead(pot_g);
  int potdegree_b = analogRead(pot_b);
  
  int potR = map(potdegree_r, 0,1023,0,255);
  int potG = map(potdegree_g, 0,1023,0,255);
  int potB = map(potdegree_b, 0,1023,0,255);
  
  analogWrite(red, potR);
  analogWrite(green, potG);
  analogWrite(blue, potB);

}
