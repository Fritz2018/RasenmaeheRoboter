#include <AFMotor.h>


AF_DCMotor motor1(4);

void setup() {
Serial.begin(9600);
motor1.setSpeed(255);

}

void loop() {

motor1.run(BACKWARD);

delay(100);
motor1.run(FORWARD);


 }
