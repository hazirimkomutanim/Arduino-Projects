
int leds[]={10,11,12,13};


void setup() {
  for(int a=0; a<4; a++)
   pinMode(leds[a], OUTPUT);
}


void loop() {
  for(int b=0; b<4; b++){
    digitalWrite(leds[b], 1);
    delay(1000);
    digitalWrite(leds[b], 0);
    delay(1000);
  }
}
