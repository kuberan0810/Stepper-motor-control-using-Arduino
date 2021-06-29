/*     Simple Stepper Motor Control Exaple Code
 *      
 *  by Dejan Nedelkovski, www.HowToMechatronics.com
 *  
 */
// defines pins numbers
const int stepPin = 2; 
const int dirPin = 3; 
 const int stepPin1 = 4; 
const int dirPin1 = 5; 
 
void setup() {
  // Sets the two pins as Outputs
  pinMode(stepPin,OUTPUT); 
  pinMode(dirPin,OUTPUT);
}
void loop() {
  digitalWrite(dirPin,HIGH); // Enables the motor to move in a particular direction
  digitalWrite(dirPin1,HIGH); 
  // Makes 200 pulses for making one full cycle rotation
  for(int x = 0; x < 200;x++) {
    digitalWrite(stepPin,HIGH); 
    digitalWrite(stepPin1,HIGH);
    delayMicroseconds(1000); 
    digitalWrite(stepPin,LOW); 
    digitalWrite(stepPin1,LOW);
    delayMicroseconds(1000); 
   
  }
 
  
  delay(1000); // One second delay
  
  digitalWrite(dirPin,LOW); //Changes the rotations direction
  digitalWrite(dirPin1,LOW);
  // Makes 400 pulses for making two full cycle rotation
  for(int x = 0; x < 400; x++) {
    digitalWrite(stepPin,HIGH);
    digitalWrite(stepPin1,HIGH);
    delayMicroseconds(500);
    digitalWrite(stepPin,LOW);
    digitalWrite(stepPin1,LOW);
    delayMicroseconds(500);
  }
  delay(1000);
}
