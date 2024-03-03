int ledPin = 2; // Pin for the LED

void setup() {
  Serial.begin(9600); // Initialize serial communication
  pinMode(ledPin, OUTPUT); // Initialize LED pin as output
}

void loop() {
  if (Serial.available() > 0) {
    char command = Serial.read(); // Read the command from serial monitor
    if (command == '0') {
      digitalWrite(ledPin, LOW); // Turn off the LED
    } else if (command == '1') {
      digitalWrite(ledPin, HIGH); // Turn on the LED
    }
  }
}
