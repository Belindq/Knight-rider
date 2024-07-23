
//the pins
int pinArray[] = {2, 3, 4, 5, 6, 7};
int count = 0;
int timer = 100;
int buttonPin = 8;
int buttonState = HIGH;
int toggle = LOW;
void setup(){ 
   pinMode(buttonPin, INPUT_PULLUP);
  //the music tones
   tone(13, 277);
  delay(250);
  noTone(13);
tone(13, 294);
  delay(125);
  noTone(13);
  tone(13, 277);
  delay(125);
  noTone(13);
   tone(13, 277);
  delay(125);
  noTone(13);
  tone(13, 294);
  delay(125);
  noTone(13);
  tone(13, 277);
  delay(125);
  noTone(13);
   tone(13, 277);
  delay(125);
  noTone(13);
  tone(13, 262);
  delay(125);
  noTone(13);
  tone(13, 277);
  delay(125);
  noTone(13);
   tone(13, 277);
  delay(125);
  noTone(13);
  tone(13, 277);
  delay(125);
  noTone(13);
   tone(13, 277);
  delay(125);
  noTone(13);
  tone(13, 277);
  delay(125);
  noTone(13);
   tone(13, 277);
  delay(125);
  noTone(13);
  
  tone(13, 247);
  delay(250);
  noTone(13);
tone(13, 262);
  delay(125);
  noTone(13);
  tone(13, 247);
  delay(125);
  noTone(13);
   tone(13, 247);
  delay(125);
  noTone(13);
  tone(13, 262);
  delay(125);
  noTone(13);
  tone(13, 247);
  delay(125);
  noTone(13);
   tone(13, 247);
  delay(125);
  noTone(13);
  tone(13, 262);
  delay(125);
  noTone(13);
  tone(13, 247);
  delay(125);
  noTone(13);
   tone(13, 247);
  delay(125);
  noTone(13);
  tone(13, 247);
  delay(125);
  noTone(13);
   tone(13,233);
  delay(125);
  noTone(13);
  tone(13, 247);
  delay(125);
  noTone(13);
   tone(13, 247);
  delay(125);
  noTone(13);
   tone(13, 247);
  delay(125);
  noTone(13);
  
  for (count=0;count<6;count++)
  {
pinMode(pinArray[count], OUTPUT);
}
  
}
void loop() 
{
buttonState = digitalRead(buttonPin);
  int sensorValue = analogRead(A0);
  //if it is not pressed
if (buttonState == LOW) 
{
if(toggle == LOW)
toggle = HIGH;
else
toggle = LOW;
delay(300);
}
//if it is pressed
if (toggle == HIGH)

 
{
  //lights go on
 for (count=0;count<6;count++) 
 {
   sensorValue = analogRead(A0); // changes speed.
digitalWrite(pinArray[count], HIGH);
delay(sensorValue);
digitalWrite(pinArray[count], LOW);
delay(sensorValue);
}
for (count=5;count>=0;count--) 
{
  sensorValue = analogRead(A0);
digitalWrite(pinArray[count], HIGH);
delay(sensorValue);
digitalWrite(pinArray[count], LOW);
delay(sensorValue);
}
}
else
//lights turn off
 for (count=0;count<6;count++) 
 {
digitalWrite(pinArray[count], LOW);
delay(sensorValue);
}

}



