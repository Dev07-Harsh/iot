int ledPin = 13;          // Pin connected to the LED
int sensorPin = 10;       // Pin connected to the obstacle detection sensor
int obstacleDetected = 0; // Variable to store the sensor state (0 = No Obstacle, 1 = Obstacle)

void setup() {
  pinMode(ledPin, OUTPUT);       // Set LED pin as output
  pinMode(sensorPin, INPUT);     // Set sensor pin as input
  Serial.begin(9600);            // Initialize Serial Monitor at 9600 baud rate
}

void loop() {
  obstacleDetected = digitalRead(sensorPin);  // Read the sensor state

  if (obstacleDetected == HIGH) {             // If an obstacle is detected
    Serial.println("Obstacle detected! Stop!"); // Print warning to Serial Monitor
    digitalWrite(ledPin, HIGH);               // Turn ON the LED
  } else {                                    // If no obstacle is detected
    Serial.println("Path is clear.");         // Print status to Serial Monitor
    digitalWrite(ledPin, LOW);                // Turn OFF the LED
  }
  delay(200);                                 // Wait for 200ms
}
