// This code will blink output 13 every 250 ms
// and will blink output 9 every 125 ms


#include <Metro.h>  // Include Metro library
#define LED0 13  // Define a LED pin
#define LED1 9  // Define another LED pin

// Create variables to hold the LED states
int state0 = HIGH;
int state1 = HIGH;

// Instantiate a metro object and set the interval to 250 milliseconds (0.25 seconds).
Metro metro0 = Metro(250); 

// Instantiate another metro object and set the interval to 125 milliseconds (0.125 seconds).
Metro metro1 = Metro(125); 


void setup() {
  pinMode(LED0, OUTPUT);
  digitalWrite(LED0, state0);
  
  pinMode(LED1, OUTPUT);
  digitalWrite(LED1, state1);
}


void loop() {
  // check if the metro0 has passed its interval.
  if (metro0.check() == 1) {
    state0 = !state0;
    digitalWrite(LED0, state0);
  }
  // check if the metro1 has passed its interval.
  if (metro1.check() == 1) {
    state1 = !state1;
    digitalWrite(LED1,state1);
  }

}
