
int volume;

void setup() {                
  Serial.begin(9600); // Serial port begin 
    
}

void loop() {
  
  volume = analogRead(A0); // Reads the value from the Analog PIN A0
 
    //Serial print level
    
    Serial.println(volume);
    delay(100);

}
