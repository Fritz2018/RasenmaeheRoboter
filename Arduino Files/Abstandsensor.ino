int led = 3;
int threshold = 30; //Change This
int volume;

void setup() {                
  Serial.begin(9600); // Serial port begin
  pinMode(led, OUTPUT);     
}

void loop() {
  
  volume = analogRead(A0); // Reads the value from the Analog PIN A0
 
    //Serial print level
    
    Serial.println(volume);
    delay(100);

  if(volume>=threshold){
    digitalWrite(led, HIGH); //Turn ON Led
  }  
  else{
    digitalWrite(led, LOW); // Turn OFF Led
  }

}
