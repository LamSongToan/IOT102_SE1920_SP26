// LAB 1 - LED Flasher 
int ledPin = 13; 
void setup()
 { 
pinMode(ledPin, OUTPUT); 
// OUTPUT means we are sending some data out of  uC
} 
void loop()
 { 
digitalWrite(ledPin, HIGH); 
delay(1000); 
digitalWrite(ledPin, LOW); 
delay(1000); 
}
