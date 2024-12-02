int LEDpin1 = 13; // First LED pin
int LEDpin2 = 12; // Second LED pin
int LEDpin3 = 11; // Third LED pin
int delayT = 1000; // Delay time in milliseconds

void setup() {
  // Configure the pins as OUTPUT
  pinMode(LEDpin1, OUTPUT);
  pinMode(LEDpin2, OUTPUT);
  pinMode(LEDpin3, OUTPUT);
}

void loop() {
  // Turn all LEDs ON
  digitalWrite(LEDpin1, HIGH);
  digitalWrite(LEDpin2, HIGH);
  digitalWrite(LEDpin3, HIGH);
  delay(delayT); // Wait for delayT milliseconds

  // Turn all LEDs OFF
  digitalWrite(LEDpin1, LOW);
  digitalWrite(LEDpin2, LOW);
  digitalWrite(LEDpin3, LOW);
  delay(delayT); // Wait for delayT milliseconds
}
