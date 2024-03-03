int ledPins[] = {2, 3, 4, 5, 6}; // Pins for the LEDs
int numLeds = 5; // Number of LEDs

int switchPin1 = 8; // Pin for the first switch
int switchPin2 = 9; // Pin for the second switch

bool switchState1 = false; // State of the first switch
bool switchState2 = false; // State of the second switch
bool prevSwitchState1 = false; // Previous state of the first switch
bool prevSwitchState2 = false; // Previous state of the second switch

int direction = 1; // Direction of LED running pattern

void setup() {
  // Initialize LED pins as outputs
  for (int i = 0; i < numLeds; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
  
  // Initialize switch pins as inputs
  pinMode(switchPin1, INPUT_PULLUP);
  pinMode(switchPin2, INPUT_PULLUP);
}

void loop() {
  // Read the state of the first switch
  switchState1 = digitalRead(switchPin1);
  // Read the state of the second switch
  switchState2 = digitalRead(switchPin2);

  // Check if the first switch is pressed and released
  if (switchState1 != prevSwitchState1 && switchState1 == LOW) {
    direction = 1; // Set direction to forward
  }
  // Check if the second switch is pressed and released
  if (switchState2 != prevSwitchState2 && switchState2 == LOW) {
    direction = -1; // Set direction to reverse
  }

  // Store the current state of the switches for the next iteration
  prevSwitchState1 = switchState1;
  prevSwitchState2 = switchState2;

  // Run LEDs in the chosen direction
  if (direction == 1) {
    runForward();
    delay(5);
  } else {
    runBackward();
    delay(5);
  }
}

// Function to run LEDs from left to right
void runForward() {
  for (int i = 0; i < numLeds; i++) {
    digitalWrite(ledPins[i], HIGH);
    delay(400); 
    digitalWrite(ledPins[i], LOW);
  }
}

// Function to run LEDs from right to left
void runBackward() {
  for (int i = numLeds - 1; i >= 0; i--) {
    digitalWrite(ledPins[i], HIGH);
    delay(400); 
    digitalWrite(ledPins[i], LOW);
  }
}
