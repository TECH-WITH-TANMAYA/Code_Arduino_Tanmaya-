// Define the pins for the LEDs and the LDR
const int ledPins[] = {2, 3, 4, 5, 6};
const int numLeds = 5; // Number of LEDs
const int ldrPin = A0; // Pin connected to the LDR

void setup() {
  // Initialize LED pins as outputs
  for (int i = 0; i < numLeds; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  // Read the light intensity from the LDR
  int lightIntensity = analogRead(ldrPin);

  int lowThreshold = 450;
  int highThreshold = 500;
  
  // Map the light intensity to the range of LED levels
  int level = map(lightIntensity, lowThreshold, highThreshold, 0, numLeds);

  // Display the corresponding LED levels
  for (int i = 0; i < numLeds; i++) {
    if (i > level) {
      digitalWrite(ledPins[i], HIGH); // Turn on LED
    } else {
      digitalWrite(ledPins[i], LOW); // Turn off LED
    }
  }
}
