const int PIR_PIN = 2;
const int LED_PIN = 13;
const int BUZZER_PIN = 8;

void setup() {
  pinMode(PIR_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);
  pinMode(BUZZER_PIN, OUTPUT);

  Serial.begin(9600);

  Serial.println("Motion Security System Started");
}

void loop() {
  int motion = digitalRead(PIR_PIN);

  if (motion == HIGH) {
    digitalWrite(LED_PIN, HIGH);
    digitalWrite(BUZZER_PIN, HIGH);

    Serial.println("MOTION DETECTED!");
  }
  else {
    digitalWrite(LED_PIN, LOW);
    digitalWrite(BUZZER_PIN, LOW);

    Serial.println("No motion");
  }

  delay(500);
}
