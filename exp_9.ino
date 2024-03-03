int ledPin = A0; // Pin for the LED

void setup() {
  Serial.begin(9600); 
  pinMode(ledPin, OUTPUT); // Initialize LED pin as output
}

void loop() {
  if (Serial.available() > 0) {
    char brightnessLevel = Serial.read(); 
    switch (brightnessLevel) {
      case '0':
        analogWrite(ledPin, 0); // 0% brightness
        break;
      case '1':
        analogWrite(ledPin, 64); // 25% brightness 
        break;
      case '2':
        analogWrite(ledPin, 128); // 50% brightness
        break;
      case '3':
        analogWrite(ledPin, 192); // 75% brightness 
        break;
      case '4':
        analogWrite(ledPin, 255); // 100% brightness 
        break;
    }
  }
}
