# Arduino-sensors

Here are provided several Arduino code examples to be used with several sensors and bluetooth connected to the Arduino-Uno board.

The only library needed is for the Sonar sensor: NewPing 
the library can be installed </br>
- from: https://bitbucket.org/teckel12/arduino-new-ping/downloads/ </br>
- or directly from Arduino GUI through Sketch/include libraries/manage libraries, then serach for NewPing and then press install.

The Arduino sensor files have two modes for using the monitor;
one mode for visualisation on the IDE monitor (Serial.print)
and one mode to be used for processing (Serial.write).

Following are the connections for the sensors and bluetooth:

## LDR-sensor:
![ldr-sensor](https://user-images.githubusercontent.com/12084024/33549030-e306300a-d8f1-11e7-87c5-09155e4ce9fa.jpg)

## Sonar-sensor:
![sonar-sensor](https://user-images.githubusercontent.com/12084024/33549029-e2cb67e0-d8f1-11e7-9479-3f3535f9558f.jpg)

## Sound-sensor:
![sound-sensor](https://user-images.githubusercontent.com/12084024/33549028-e2a103f6-d8f1-11e7-8d4a-fd089b476833.jpg)

## Bluetooth:
![bluetooth](https://user-images.githubusercontent.com/12084024/33548741-e0abdda6-d8f0-11e7-84ef-ec52d4d1569d.jpg)



## Debug Note:
### to solve: </br>
avrdude: ser_open(): can't open device "/dev/ttyACM0": Device or resource busy</br>
Problem uploading to board.  See http://www.arduino.cc/en/Guide/Troubleshooting#upload for suggestions.</br>
Change to card type on Tools/Boards to any other type and then put back the right one
