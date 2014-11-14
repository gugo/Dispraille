/* Blink without Delay

 Turns on and off a light emitting diode(LED) connected to a digital
 pin, without using the delay() function.  This means that other code
 can run at the same time without being interrupted by the LED code.

 The circuit:
 * LED attached from pin 13 to ground.
 * Note: on most Arduinos, there is already an LED on the board
 that's attached to pin 13, so no hardware is needed for this example.
 
 created 2005
 by David A. Mellis
 modified 8 Feb 2010
 by Paul Stoffregen
 modified 11 Nov 2013
 by Scott Fitzgerald
 
 
 This example code is in the public domain.
 
 http://www.arduino.cc/en/Tutorial/BlinkWithoutDelay
 */

// constants won't change. Used here to set a pin number :
const int   slnd1 =  8,   slnd4 =  11,
            slnd2 =  9,   slnd5 =  12,
            slnd3 =  10,  slnd6 =  13;

// Variables will change :
int slndState = LOW;             // slndState used to set the LED

// Generally, you shuould use "unsigned long" for variables that hold time
// The value will quickly become too large for an int to store
unsigned long previousMillis = 0;        // will store last time LED was updated

// constants won't change :
const long interval = 250;           // interval at which to blink (milliseconds)

void setup() {
  // set the digital pin as output:
  pinMode(slnd1, OUTPUT);   pinMode(slnd4, OUTPUT);
  pinMode(slnd2, OUTPUT);   pinMode(slnd5, OUTPUT);
  pinMode(slnd3, OUTPUT);   pinMode(slnd6, OUTPUT);
}

void loop()
{
  // here is where you'd put code that needs to be running all the time.

  // check to see if it's time to blink the LED; that is, if the
  // difference between the current time and last time you blinked
  // the LED is bigger than the interval at which you want to
  // blink the LED.
  unsigned long currentMillis = millis();
 
  if(currentMillis - previousMillis >= interval) {
    // save the last time you blinked the LED 
    previousMillis = currentMillis;   

    // if the LED is off turn it on and vice-versa:
    if (slndState == LOW)
      slndState = HIGH;
    else
      slndState = LOW;

    // set the LED with the slndState of the variable:
    pChar(slndState);
  }
}

void pChar(int chrState) {
  digitalWrite(slnd1, chrState); digitalWrite(slnd4, chrState);
  digitalWrite(slnd2, chrState); //digitalWrite(slnd5, chrState);
  digitalWrite(slnd3, chrState); //digitalWrite(slnd6, chrState);

}

