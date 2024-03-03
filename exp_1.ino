int ledPins[] = {2, 3, 4, 5, 6}; 
int numLeds = 5; // Number of LEDs

void setup() {
  // Initialize LED pins as outputs
  for (int i = 0; i < numLeds; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  // Run LEDs from left to right
  for (int i = 0; i < numLeds; i++) {
    digitalWrite(ledPins[i], HIGH); // Turn on the current LED
    delay(200); // Adjust the delay as needed
    digitalWrite(ledPins[i], LOW); // Turn off the current LED
  }
  
  // Run LEDs from right to left
  for (int i = numLeds - 1; i >= 0; i--) {
    digitalWrite(ledPins[i], HIGH); // Turn on the current LED
    delay(200); // Adjust the delay as needed
    digitalWrite(ledPins[i], LOW); // Turn off the current LED
  }
}
