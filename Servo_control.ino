//Connect the 3 pins of the servo:
//1- (red) to 5v preferably external
//2- (brown) to Ground 
//3- (orange) to pin 5

// Second Servo, save for red and brown
// connect the orange cable of the servo to pin 6


#include <Servo.h> 

Servo Servo1; 
Servo Servo2;
int pos1=90;
int pos2=90;
int pos=0;

void setup() { 
  
   Servo2.attach(5); 
   Servo1.attach(6); 
   Servo1.write(pos1);
   Servo2.write(pos2);
   delay(1000);
}

void loop() {
  
  for (pos = pos1; pos <= 150; pos += 1) {
   Servo1.write(pos);
   delay(10);
  }
  delay(1000);
  for (pos = pos2; pos >= 30; pos -= 1) {
    Servo2.write(pos);
    delay(5);
  }
  delay(1000);
  for (pos = 150; pos >= pos1; pos -= 1) {
    Servo1.write(pos);
    delay(5);
  }
  delay(1000);
  for (pos = 30; pos <= pos2; pos += 1) {
    Servo2.write(pos);
    delay(5);
  }
  delay(1000);
}
