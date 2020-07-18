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
int potPin1 = A0;
int potPin2 = A1;
int potPin3 = A2;
// the setup routine runs once when you press reset:
void setup()
{
// initialize the digital pin as an output.
pinMode(driver, OUTPUT);
Serial.begin(9600);
// initialize the analog pin for potentiometer

}
 
// the loop routine runs over and over again forever:
void loop()
{
  double pot_driver_freq = analogRead(potPin1);
  double pot_gate_width = analogRead(potPin2);
  double pot_gate_freq = analogRead(potPin3);
  int driver_pulse_count = 10;
  
  // 5V divide by potentiometer
  Serial.print(5.0 / pot_driver_freq);
  Serial.println(5.0 / pot_driver_freq);  

  for(int i=0; i< (5000000000); i++)
  {
    //50 microseconds == 10khz
    digitalWrite(driver, HIGH);
    delayMicroseconds(50);               // wait for a mili second
    digitalWrite(driver, LOW);
    delayMicroseconds(50);               // wait for a mili second
  }

 }
