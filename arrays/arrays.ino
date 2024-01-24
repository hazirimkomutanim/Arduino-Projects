
int arrayx[2][5] = { {0,1,2,3,4},{5,6,7,8,9} };


void setup() {
  Serial.begin(9600);
}


void loop() {
  for(int a=0; a<2; a++) {
   for(int b=0; b<5; b++) {
     Serial.println(arrayx[a][b]);
     delay(500);
    }
  }
}
