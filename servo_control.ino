Connect the 3 pins of the servo:
1- to 5v preferably external
2- to Ground 
3- the 3rd cable to pin 13

void setup() {
  // put your setup code here, to run once:
pinMode(13,OUTPUT);
pinMode(2,INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  int val = digitalRead(2);

  if(val== HIGH) {
    
  }
  else{
    digitalWrite(13,LOW);
    delay(100);
    digitalWrite(13,HIGH);
    delay(100);
    
  }
}
