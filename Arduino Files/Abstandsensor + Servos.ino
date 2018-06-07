#include <Servo.h>

int sensorPin = 0; //analog pin 0
Servo myservo;

int potpin = 0; 
int val;  
void setup(){
  Serial.begin(9600);
   myservo.attach(9); 
}

void loop(){
  val = analogRead(potpin);            
  val = map(val, 0, 1023, 0, 180);   
  int input = analogRead(sensorPin);
  int finishedInput = (input-264)/2;
  Serial.print(finishedInput);

  if(finishedInput <=5){
    Serial.println("-->drehen!");
     myservo.write(360);
  }
 else {Serial.println("-->weiterfahren!");}
     myservo.write(0);
     delay(250);


}
