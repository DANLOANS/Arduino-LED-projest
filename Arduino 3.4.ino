// include the Arduino library
#include <Arduino.h>

// define the LED pin
#define LED_PIN 1

void setup() {
  // set the LED pin as an output
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  // turn the LED on
  digitalWrite(LED_PIN, HIGH);
  // wait for 500 milliseconds
  delay(500);
  // turn the LED off
  digitalWrite(LED_PIN, LOW);
  // wait for 500 milliseconds
  delay(500);
}