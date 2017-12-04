/*
 * This Arduino file is to be used with Bluetooth device plugged on arduino 
 * RX of bluetooth on pin 11 of Arduino Uno
 * TX of bluetooth on pin 10 of Arduino Uno
 * Monitor application should be installed on smart phone or computor
 * Bluetooth password is 1234 
 * This program switched on and off the arduino Uno led connected to pin13
 * using commands a and s from the smart phone monitor.
 * Michel Platnic
 */

#include <SoftwareSerial.h>// import the serial library

SoftwareSerial BT(10, 11); // RX, TX

int ledpin=13; // led on D13 will show blink on / off
int BluetoothData; // the data given from Computer

void setup() {
  // put your setup code here, to run once:
  BT.begin(9600);
  BT.println("Bluetooth On please press 1 or 0 blink LED ");
  pinMode(ledpin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (BT.available()){
     BluetoothData=BT.read();
      
     if(BluetoothData=='a'){   // if 'a' pressed.
       digitalWrite(ledpin,1);
       BT.println("LED  On D13 ON ! ");
     }
     if (BluetoothData=='s'){  // if 's' pressed.
       digitalWrite(ledpin,0);
       BT.println("LED  On D13 Off ! ");
     }
  }
  delay(100);// prepare for next data.
}
