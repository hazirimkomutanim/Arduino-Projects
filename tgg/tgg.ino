#define x A0
#define INA 9
#define INB 10


void setup() {
  Serial.begin(9600);
  
  pinMode(x,INPUT);
  pinMode(INA, OUTPUT);
  pinMode(INB, OUTPUT);
}


void loop() {
  
  int xdegree = analogRead(x);
  int WPstat = map(xdegree, 0,1023,0,255);
  
  Serial.print("STAT:");
  Serial.print(WPstat);
  Serial.print("X DEGREE:");
  Serial.println(xdegree);
  
  if(WPstat == 120){
    digitalWrite(INA, 0);
    digitalWrite(INB, 0);
  }
  else if(WPstat < 120){
    digitalWrite(INA, WPstat);
    digitalWrite(INB, 0);
  }
  else if(WPstat > 120){
    digitalWrite(INA, 0);
    digitalWrite(INB, WPstat);
  }
  
}
