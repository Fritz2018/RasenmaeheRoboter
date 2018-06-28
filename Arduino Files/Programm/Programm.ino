#include <Servo.h>

//Servo
Servo radRechts;
Servo radLinks;

//abstand
int abstand = 0;

void setup() {

  //Datenaustauschrate festlegen
  Serial.begin(9600);

  //Servo auf pin 9 setzen
  radRechts.attach(9);
  radLinks.attach(10);
}

void loop() {
  //Abstand einlesen
  abstand = analogRead(A0);

  //Abstand ausgeben
  Serial.println(abstand);

  //Wartezeit festlegen(in Millisekunden)
  delay(15);

  if (abstand < 15) {
    //Servo drehen
    radRechts.write(+90);
  }
  else {
    //weiterfahren
    radRechts.write(+90);
    radLinks.write(+90);
  }

}
