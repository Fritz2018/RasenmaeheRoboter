//Links
int triggerL=A0; 
int echoL=A1; 
long dauerL=0; 
long entfernungL=0; 

//Rechts
int triggerR = A5;
int echoR = A4;
long dauerR = 0;
long entfernungR=0;


void setup()
{
Serial.begin (9600); 

//Sensor Links-
pinMode(triggerL, OUTPUT);
pinMode(echoL, INPUT);

//Sensor Rechts
pinMode(triggerR, OUTPUT);
pinMode(echoR, INPUT);

//Motor Rechts
}
void loop()
{
//Links
digitalWrite(triggerL, LOW);
delay(5); 
digitalWrite(triggerL, HIGH); 
delay(10); 
digitalWrite(triggerL, LOW);
dauerL = pulseIn(echoL, HIGH); 
entfernungL = (dauerL/2) * 0.03432; 
if (entfernungL >= 500 || entfernungL <= 0) 
{
Serial.println("Kein Messwert"); 
}
if(entfernungL <= 20){
  //drehen
  
}
else
{
//weiterfahren
}

//Rechts
digitalWrite(triggerR, LOW);
delay(5); 
digitalWrite(triggerR, HIGH); 
delay(10); 
digitalWrite(triggerR, LOW);
dauerR = pulseIn(echoR, HIGH); 
entfernungR = (dauerR/2) * 0.03432; 
if (entfernungR >= 500 || entfernungR <= 0) 
{
Serial.println("Kein Messwert"); 
}
if(entfernungR <= 20){
}
else
{
}
  //Links
Serial.println();
Serial.print("Links: ");
Serial.print(entfernungL); 
Serial.println(" cm"); 

  //Rechts
Serial.print("Rechts: ");
Serial.print(entfernungR); 
Serial.println(" cm"); 
delay(100); 
}


