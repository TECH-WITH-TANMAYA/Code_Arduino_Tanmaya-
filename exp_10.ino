int ledPin = 9; // Pin for the LED
int ldrPin = A0; // Pin for the LDR

void setup() {
  Serial.begin(9600); 
  pinMode(ledPin, OUTPUT); 
}

void loop() {
  // Read the brightness level from the LDR
  int brightness = analogRead(ldrPin);
  // Map the brightness level 
  
  int lowThreshold = 450;
  int highThreshold = 500;

  int delayTime = map(brightness, lowThreshold, highThreshold, 1000, 100); // Adjust 1000 and 100 according to your requirement
  // Blink the LED with the calculated delay
  digitalWrite(ledPin, HIGH); // Turn on the LED
  delay(delayTime); // Delay based on brightness level
  digitalWrite(ledPin, LOW); // Turn off the LED
  delay(delayTime); 

  Serial.println(ldr_val);

}
