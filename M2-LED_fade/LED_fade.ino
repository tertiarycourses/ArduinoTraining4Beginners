/*
 Fading

 This example shows how to fade an LED using the analogWrite() function.

 The circuit:
 * LED attached from digital pin 9 to ground.

 */


int redledPin = 9;    // RED LED connected to digital pin 9
int blueledPin = 10;    // Blue LED connected to digital pin 10
int greenledPin = 11;    // Green LED connected to digital pin 11


void setup() {
  // nothing happens in setup
}

void loop() {
  // fade in from min to max in increments of 5 points:
  for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 1) {
    // sets the value (range from 0 to 255):
    analogWrite(redledPin, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
    delay(30);
  }

  // fade out from max to min in increments of 5 points:
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 1) {
    // sets the value (range from 0 to 255):
    analogWrite(redledPin, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
    delay(30);
  }
}


