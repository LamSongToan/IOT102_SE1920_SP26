// reading the valude of potentiometer
int ledPin = 13; 
int potPin = 2; 
int potValude = 0; 
void setup() { 
pinMode(ledPin, OUTPUT); 
// pinMode(potPin, INPUT); default Analog pins are INPUT => skip this instruction
} 
void loop() { 
potValude =  analogRead (potPin);
digitalWrite(ledPin, HIGH); 
delay(potValude); 
digitalWrite(ledPin, LOW); 
delay(potValude); 
}
