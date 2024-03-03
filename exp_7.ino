int ledPin = 2; // Pin for the LED
int switchPinIncrease = 7; // Pin for increasing blinking rate
int switchPinDecrease = 8; // Pin for decreasing blinking rate

int blinkInterval = 500; // BLINK interval in milliseconds

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(switchPinIncrease, INPUT_PULLUP);
  pinMode(switchPinDecrease, INPUT_PULLUP);
}

void loop() {
  if (digitalRead(switchPinIncrease) == LOW) {
    blinkInterval += 100; // Increase blink interval by 100 ms
    delay(200); 
  }

  if (digitalRead(switchPinDecrease) == LOW) {
    blinkInterval -= 100; // Decrease blink interval by 100 ms
    if (blinkInterval < 100) {
      blinkInterval = 100; // Ensure minimum blink interval is 100 ms
    }
    delay(200); 
  }

  digitalWrite(ledPin, HIGH); // Turn on LED
  delay(blinkInterval); // Wait for blink interval
  digitalWrite(ledPin, LOW); // Turn off LED
  delay(blinkInterval); // Wait for blink interval
}
