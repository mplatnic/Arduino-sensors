/* 
 *  Tthis Arduino File is to be used with light sensor
 *  Pin should be connected to A0
 *  then VCC and ground to respective pins
 */

void setup()
{
Serial.begin(9600);
}

void loop()
{
int AnalogValue;
AnalogValue = analogRead(A0);
//Serial.println(AnalogValue);  //this is to read on terminal
Serial.write(AnalogValue);  //binary format to send to processing

delay(200);
}
