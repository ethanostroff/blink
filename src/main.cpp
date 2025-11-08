#include <Arduino.h>

// led pin definition
const int ledPin = 13;

void setup() {
  // set led pin to an output
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // blink led every second
  digitalWrite(ledPin, HIGH);
  delay(1000);
  digitalWrite(ledPin, LOW);
  delay(1000);
}