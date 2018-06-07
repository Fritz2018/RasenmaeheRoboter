#include <Servo.h>
Servo myservo;

int potpin = 0; 
int val;  

void setup() {
  myservo.attach(9); 
}

void loop() {
  val = analogRead(potpin);            
  val = map(val, 0, 1023, 0, 180);    
  for(int i = 0; i<360;i++){
  myservo.write(i);    
  delay(15);    
  }                      
}
