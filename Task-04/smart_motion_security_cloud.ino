#include <WiFi.h>
#include <HTTPClient.h>
#include <WiFiClientSecure.h>

// ---------- PIN CONFIGURATION ----------
const int PIR_PIN = 27;
const int LED_PIN = 2;
const int BUZZER_PIN = 4;

// ---------- WI-FI ----------
const char* WIFI_SSID = "Wokwi-GUEST";
const char* WIFI_PASSWORD = "";

// ---------- THINGSPEAK ----------
const char* THINGSPEAK_API_KEY = "IYZX7D2E4ED4UM9F";

// Send data every 20 seconds
unsigned long lastCloudUpdate = 0;
const unsigned long CLOUD_INTERVAL = 20000;


// ---------- SETUP ----------
void setup() {

  pinMode(PIR_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);
  pinMode(BUZZER_PIN, OUTPUT);

  Serial.begin(115200);

  Serial.println();
  Serial.println("================================");
  Serial.println(" SMART MOTION SECURITY SYSTEM");
  Serial.println("================================");

  // Connect to Wi-Fi
  Serial.print("Connecting to Wi-Fi");

  WiFi.mode(WIFI_STA);
  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println();
  Serial.println("Wi-Fi connected!");

  Serial.print("IP Address: ");
  Serial.println(WiFi.localIP());

  Serial.println("System Status: SECURE");
}


// ---------- MAIN LOOP ----------
void loop() {

  int motion = digitalRead(PIR_PIN);

  int motionStatus;
  int securityStatus;
  int ledStatus;
  int alarmStatus;


  // ---------- MOTION DETECTED ----------
  if (motion == HIGH) {

    digitalWrite(LED_PIN, HIGH);
    tone(BUZZER_PIN, 1000);

    motionStatus = 1;
    securityStatus = 1;
    ledStatus = 1;
    alarmStatus = 1;

    Serial.println("INTRUSION DETECTED!");
    Serial.println("ALERT: LED + BUZZER ACTIVATED");
  }


  // ---------- NO MOTION ----------
  else {

    digitalWrite(LED_PIN, LOW);
    noTone(BUZZER_PIN);

    motionStatus = 0;
    securityStatus = 0;
    ledStatus = 0;
    alarmStatus = 0;

    Serial.println("SYSTEM STATUS: SECURE");
  }


  // ---------- SEND DATA TO THINGSPEAK ----------
  if (WiFi.status() == WL_CONNECTED &&
      (lastCloudUpdate == 0 ||
       millis() - lastCloudUpdate >= CLOUD_INTERVAL)) {

    sendToThingSpeak(
      motionStatus,
      securityStatus,
      ledStatus,
      alarmStatus
    );

    lastCloudUpdate = millis();
  }

  delay(1000);
}


// ---------- THINGSPEAK FUNCTION ----------
void sendToThingSpeak(
  int motion,
  int security,
  int led,
  int alarm
) {

  WiFiClientSecure client;
  client.setInsecure();

  HTTPClient http;

  String url = "https://api.thingspeak.com/update?api_key=";

  url += THINGSPEAK_API_KEY;

  url += "&field1=";
  url += motion;

  url += "&field2=";
  url += security;

  url += "&field3=";
  url += led;

  url += "&field4=";
  url += alarm;

  Serial.println("Sending data to ThingSpeak...");

  http.begin(client, url);

  int httpCode = http.GET();

  Serial.print("HTTP Response Code: ");
  Serial.println(httpCode);

  String response = http.getString();

  Serial.print("ThingSpeak Response: ");
  Serial.println(response);

  if (httpCode == 200) {
    Serial.println("Cloud update successful!");
  }
  else {
    Serial.println("Cloud update failed!");
  }

  http.end();
}
