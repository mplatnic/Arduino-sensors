/*
circuit:
* left and right pins of resistor to respectively +5V to analog and 0 
* Middle Pin to A0
*/

int thisSensor = 0;

void setup() {
  //start serial connection
  Serial.begin(9600);
}

void loop() {
  int sensorReading = analogRead(thisSensor);
  Serial.println(sensorReading);
  delay(220);
}
