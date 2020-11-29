
#include <Servo.h>
int pos = 165;
Servo myservo; 

void setup() {
  pinMode(10, INPUT); //set our pin10 to input where our toggle button is placed
  myservo.attach(9);  // attach our servo motor to pin 9
}

void loop() {
   
  if(digitalRead(10)==HIGH) // when our toggle button is high it will move our servo
  {
   myservo.write(pos);               
   pos=-5;
   delay(20);   
  }
  if(digitalRead(10)==LOW) // when servo switch off our button it will go to back to our box
  {
   pos=165;
   myservo.write(pos);                 
   delay(20);   
  }
  
}
