#define rled 5
#define gled 6
#define bled 9
#define ldr A0
#define led 7
#define button_blue 13
#define button_white 11
#define button_voice 12
#define buzzer  8

int counter1 = 0;
int counter2 = 2;


void setup() {  
  
  pinMode(rled,OUTPUT);
  pinMode(gled,OUTPUT);
  pinMode(bled,OUTPUT);
  pinMode(led,OUTPUT);
  pinMode(button_blue,INPUT);
  pinMode(button_white,INPUT);
  pinMode(button_voice,INPUT);
  pinMode(buzzer,OUTPUT);
  
  Serial.begin(9600);
  
}


void loop() {
  
  int light = analogRead(ldr);
  int bluebutton = digitalRead(button_blue);
  int voicebutton = digitalRead(button_voice);
  int whitebutton = digitalRead(button_white);
  
  Serial.print("LDR Degree:");
  Serial.println(light);
  
  if (bluebutton == 1) {
    counter1++;
    Serial.print("1. counter:");
    Serial.println(counter1);
    delay(500);
    
    if (counter1 % 2 == 0){
     digitalWrite(bled, 0);
     }
    else {
     digitalWrite(bled, 1); 
   }
  }

  if(whitebutton==1){
   counter2++; 
   Serial.print("2. counter:");
   Serial.println(counter2);
   delay(500);
   
   if (counter2 % 2 == 0){
    digitalWrite(bled, 255);
    digitalWrite(rled, 255);
    digitalWrite(gled, 255);
   } 
   else{
    digitalWrite(bled, 0);
    digitalWrite(rled, 0);
    digitalWrite(gled, 0);
  
   }
  }
  
  if(voicebutton == 1){
   digitalWrite(buzzer, 0);
  else
   digitalWrite(buzzer, 1);
  
  if(light > 180)
   digitalWrite(led, 1);
  else
   digitalWrite(led, 0);
  
}
