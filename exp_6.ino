int switchPins[] = {2, 3, 4, 5}; 
int count = 0; // Initial count value

void setup() {
  for (int i = 0; i < 4; i++) {
    pinMode(switchPins[i], INPUT_PULLUP); // Initialize switch pins as inputs with pullup resistors
  }
  Serial.begin(9600); 
}

void loop() {
  for (int i = 0; i < 4; i++) {
    if (digitalRead(switchPins[i]) == LOW) {
      delay(50); //delay
      if (digitalRead(switchPins[i]) == LOW) {
        count = (count + 1) % 16; // Increment count (0-15)
        Serial.println(count); // Output count to serial monitor
        delay(200); // Delay for switch press response
      }
    }
  }
}
