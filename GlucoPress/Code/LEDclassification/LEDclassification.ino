// Define LED pins
const int greenLED = 5;  // Pin for green LED
const int redLED = 3;    // Pin for red LED

unsigned long startTime = 0;  // To store the start time
bool timerActive = false;     // To track if the 10-second timer is active
bool isFlashing = false;      // To indicate if the red LED should flash

void setup() {
  // Set LED pins as output
  pinMode(greenLED, OUTPUT);
  pinMode(redLED, OUTPUT);

  // Start serial communication
  Serial.begin(115200);
  delay(100);  // Small delay for stability
  Serial.println("Enter your blood glucose result (mg/dL):");
}

void loop() {
  // Check if serial data is available
  if (Serial.available() > 0) {
    // Read the input as a string
    String input = Serial.readStringUntil('\n');
    input.trim();  // Remove any whitespace or newlines

    // Convert input to an integer
    int glucoseLevel = input.toInt();

    // Reset LEDs and start the timer
    digitalWrite(greenLED, LOW);
    digitalWrite(redLED, LOW);
    timerActive = true;    // Start the timer
    startTime = millis();  // Record the start time
    isFlashing = false;    // Reset flashing state

    // Check glucose level
    if (glucoseLevel >= 80 && glucoseLevel <= 130) {
      Serial.println("Glucose level is within the normal range. Green LED is ON.");
      digitalWrite(greenLED, HIGH);  // Turn on green LED
    } else if (glucoseLevel < 80) {
      Serial.println("Glucose level is too low. Red LED will FLASH.");
      isFlashing = true;  // Start flashing logic
    } else if (glucoseLevel > 130) {
      Serial.println("Glucose level is too high. Red LED is ON.");
      digitalWrite(redLED, HIGH);  // Turn on red LED
    }

    // Prompt for next input
    Serial.println("Enter your blood glucose result (mg/dL):");
  }

  // Handle flashing logic
  if (isFlashing) {
    unsigned long currentTime = millis();
    static unsigned long lastToggleTime = 0;       // To track the last toggle time
    if (currentTime - lastToggleTime >= 500) {     // Toggle every 500 ms
      digitalWrite(redLED, !digitalRead(redLED));  // Toggle red LED
      lastToggleTime = currentTime;
    }
  }

  // Handle the universal 10-second timeout
  if (timerActive) {
    unsigned long currentTime = millis();
    if (currentTime - startTime >= 10000) {  // After 10 seconds
      timerActive = false;                   // Disable the timer
      isFlashing = false;                    // Stop flashing
      digitalWrite(greenLED, LOW);           // Turn off green LED
      digitalWrite(redLED, LOW);             // Turn off red LED
      Serial.println("10 seconds elapsed. Both LEDs are OFF.");
    }
  }
}
