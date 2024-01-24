
#define led_1 11
#define led_2 12
#define led_3 13
#define sound_sens A0


void setup() {
  Serial.begin(9600);
  
  digitalWrite(led_1, OUTPUT);
  digitalWrite(led_2, OUTPUT);
  digitalWrite(led_3, OUTPUT);
}


void loop() {
  
  int sound = analogRead(sound_sens);
  Serial.println(sound);
  
  if(sound > 300) {
    digitalWrite(led_1, 1);
    digitalWrite(led_2, 1);
    digitalWrite(led_3, 1);
    delay(100);
    digitalWrite(led_1, 0);
    digitalWrite(led_2, 0);
    digitalWrite(led_3, 0);
    delay(100); 
  }
  else {
    digitalWrite(led_1, 0);
    digitalWrite(led_2, 0);
    digitalWrite(led_3, 0);
  }

}
