int ledPins[] = {3,5,6,10,11}; // Pins for the LEDs
int numLeds = 5; // Number of LEDs

void setup() {
  // Initialize LED pins as outputs
  for (int i = 0; i < numLeds; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  // Fade and brighten LEDs 
  for (int brightness = 0; brightness <= 255;brightness++) {
    for (int i = 0; i < numLeds; i++) {
      analogWrite(ledPins[i], brightness);
      delay(200); // Adjust the delay as needed for smooth fading
    }
  }
  
  for (int brightness = 255; brightness >= 0;brightness--) {
    for (int i = 0; i < numLeds; i++) {
      analogWrite(ledPins[i], brightness);
      delay(200); // Adjust the delay as needed for smooth fading
    }
  }
}
