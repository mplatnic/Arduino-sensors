//Connect the 3 pins of the servo:
//1- (red) to 5v preferably external
//2- (brown) to Ground 
//3- (orange) to pin 5

// Second Servo, save for red and brown
// connect the orange cable of the servo to pin 6


#include <Servo.h> 

const int ledPin = 13; //pin 13 built-in led
const int soundPin = 1; //sound sensor attach to digital pin1

Servo Servo1; 
Servo Servo2;
int pos1=90;
int pos2=90;
int pos = 0;
int posNew=0;

int value = 0;
int valuePast = 0;


void setup() { 

   pinMode(ledPin,OUTPUT);//set pin13 as OUTPUT
   pinMode(soundPin, INPUT);  // Set sensor pin as an INPUT
   Serial.begin(9600);
   Servo2.attach(5); 
   Servo1.attach(7); 
   Servo1.write(pos1);
   Servo2.write(pos2);
   delay(1000);
}


void loop() {

//SOUND

  valuePast=value;

  value = analogRead(soundPin);//read the value of A0
  Serial.println(value);//print the value
//Serial.write(value*3);//send the value in binary for processing


//Program to know if sensor value increases or decreases

  if(value > valuePast) //if the value is greater 
  {
    digitalWrite(ledPin,HIGH);//turn on the led
    posNew = posNew + 10;
    if(posNew > 180) {posNew = 180; }
    for (pos = pos1; pos <= posNew; pos += 1) {
    Servo1.write(pos);
    Servo2.write(pos);
    delay(10);
    }
  }
  else
  {
    digitalWrite(ledPin,LOW);//turn off the led
    posNew = posNew - 10;
    if(posNew < 0) {posNew = 0; }
    for (pos = pos1; pos >= posNew; pos -= 1) {
    Servo1.write(pos);
    Servo2.write(pos);
    delay(10);
    }
 
  }
  delay(200);//delay 200ms
 
}
