const int PIR_PIN = 2;
const int LED_PIN = 13;
const int BUZZER_PIN = 8;

int previousMotionState = LOW;

void setup() {
  pinMode(PIR_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);
  pinMode(BUZZER_PIN, OUTPUT);

  Serial.begin(9600);

  Serial.println("================================");
  Serial.println(" SMART MOTION SECURITY SYSTEM");
  Serial.println("================================");
  Serial.println("System Status: SECURE");
}

void loop() {
  int motionState = digitalRead(PIR_PIN);

  // Motion detected
  if (motionState == HIGH) {

    digitalWrite(LED_PIN, HIGH);
    tone(BUZZER_PIN, 1000);

    // Print alert only when motion starts
    if (previousMotionState == LOW) {
      Serial.println("INTRUSION DETECTED!");
      Serial.println("ALERT: LED + BUZZER ACTIVATED");
    }
  }

  // No motion
  else {

    digitalWrite(LED_PIN, LOW);
    noTone(BUZZER_PIN);

    // Print secure status only when motion stops
    if (previousMotionState == HIGH) {
      Serial.println("Motion cleared.");
      Serial.println("SYSTEM STATUS: SECURE");
    }
  }

  previousMotionState = motionState;

  delay(100);
}
