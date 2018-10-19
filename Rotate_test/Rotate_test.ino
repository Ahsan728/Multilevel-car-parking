const int stepPin3 = 22; //180 ROTATE STEPPER
const int dirPin3 = 24; 
const int enPin3 = 26;

#include <Keypad.h>
#include <Stepper.h> 


void setup() {
 // put your setup code here, to run once:
Serial.begin(9600);
  // Sets the two pins as Outputs
  pinMode(stepPin3,OUTPUT); 
  pinMode(dirPin3,OUTPUT);
  pinMode(enPin3,OUTPUT);
  digitalWrite(enPin3,LOW);

}

void loop() {

     //rotate koro

   digitalWrite(dirPin3,LOW); // Enables the motor to move in a particular direction
  // Makes 200 pulses for making one full cycle rotation
  for(int x = 0; x < 4300; x++) {
    digitalWrite(stepPin3,HIGH); 
    delayMicroseconds(500); 
    digitalWrite(stepPin3,LOW); 
    delayMicroseconds(500); 
  }
  delay(1000); // One second delay
   //rotate koro

   digitalWrite(dirPin3,HIGH); // Enables the motor to move in a particular direction
  // Makes 200 pulses for making one full cycle rotation
  for(int x = 0; x < 4300; x++) {
    digitalWrite(stepPin3,HIGH); 
    delayMicroseconds(500); 
    digitalWrite(stepPin3,LOW); 
    delayMicroseconds(500); 
  }
  delay(1000); // One second delay

 

}
