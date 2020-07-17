/*==================================================================*\
 * Water Power Cell
 * Stage 1 - CURRENT - creating the square wave
 * 
 * Author:  Richard Heidrick
 * Last Updated: 7/16/2020
 * Description: Attempt to create a simple 50% duty cycle with high
 * frequency using one digital pin (NOT PWM).
\*==================================================================*/

 
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:

int driver = 12;
int potPin = A0;
// the setup routine runs once when you press reset:
void setup()
{
// initialize the digital pin as an output.
pinMode(driver, OUTPUT);
// initialize the analog pin for potentiometer

}
 
// the loop routine runs over and over again forever:
void loop()
{
  double value = analogRead(potPin);
  for(int i=0; i< (value/30); i++)
  {
    digitalWrite(driver, HIGH);
    delay(1);               // wait for a second
    digitalWrite(driver, LOW);
    delay(1);               // wait for a second
  }
  digitalWrite(driver, LOW);
  delay(value / 20);
 }
