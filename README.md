# Maincrafts Embedded Systems & IoT Internship

This repository contains the projects and deliverables completed during my **Maincrafts Embedded Systems & IoT Internship**.

The projects progress from basic embedded-system concepts to an IoT cloud-connected security system using Arduino, ESP32, sensors, automation, and cloud monitoring.

---

## Internship Projects

| Task | Project | Status |
|------|---------|--------|
| Task 01 | Smart Lighting System using Arduino UNO and LDR | ✅ Completed |
| Task 02 | Smart Motion Security System using Arduino UNO and PIR | ✅ Completed |
| Task 03 | Smart Motion Security Automation System | ✅ Completed |
| Task 04 | IoT Cloud Integration & Real-Time Remote Monitoring | ✅ Completed |

---

## Task 01 – Smart Lighting System

### Description

A smart lighting system built using an Arduino UNO and an LDR sensor.

The system measures the surrounding light intensity and automatically controls an LED based on the detected light level.

### Components

- Arduino UNO
- LDR Sensor
- 10kΩ Resistor
- LED
- 220Ω Resistor

### Working

- The LDR measures the surrounding light intensity.
- The Arduino reads the LDR value through an analog input.
- When the environment becomes dark, the LED turns ON.
- When sufficient light is detected, the LED turns OFF.

### Tools & Technologies

- Arduino UNO
- Embedded C/C++
- LDR
- Tinkercad

[View Task 01 →](./Task-01/)

---

## Task 02 – Smart Motion Security System

### Description

A basic motion security system using an Arduino UNO, PIR motion sensor, LED, and buzzer.

The system detects movement and activates an LED and buzzer when motion is detected.

### Components

- Arduino UNO
- PIR Motion Sensor
- LED
- 220Ω Resistor
- Buzzer

### Working

- The PIR sensor monitors for movement.
- When motion is detected, the LED turns ON.
- The buzzer is activated as an alert.
- When no motion is detected, the LED and buzzer remain OFF.

### Tools & Technologies

- Arduino UNO
- Embedded C/C++
- PIR Sensor
- Tinkercad

[View Task 02 →](./Task-02/)

---

## Task 03 – Smart Motion Security Automation System

### Description

Task 03 upgraded the basic motion security system into an automated security system.

The system provides visual and audible alerts when motion is detected and displays the system status through the Serial Monitor.

### Components

- Arduino UNO
- PIR Motion Sensor
- LED
- 220Ω Resistor
- Buzzer

### Working

When motion is detected:

- LED turns ON.
- Buzzer is activated.
- Serial Monitor displays **"INTRUSION DETECTED!"**

When motion is cleared:

- LED turns OFF.
- Buzzer turns OFF.
- Serial Monitor displays **"SYSTEM STATUS: SECURE"**

### Tools & Technologies

- Arduino UNO
- Embedded C/C++
- PIR Sensor
- Tinkercad

[View Task 03 →](./Task-03/)

---

## Task 04 – IoT Cloud Integration & Real-Time Remote Monitoring

### Description

Task 04 upgrades the Smart Motion Security System into a **cloud-connected IoT system** using an ESP32 and ThingSpeak.

The ESP32 reads motion from a PIR sensor, controls an LED and buzzer, and sends the system status to the ThingSpeak cloud platform through Wi-Fi.

The received data is displayed on a cloud dashboard for remote monitoring.

### Components

- ESP32 DevKit
- PIR Motion Sensor
- LED
- 220Ω Resistor
- Buzzer
- ThingSpeak Cloud
- Wokwi ESP32 Simulator

### Working

The system follows this data flow:

**PIR Sensor → ESP32 → Wi-Fi → ThingSpeak API → Cloud Dashboard**

When motion is detected:

- LED turns ON.
- Buzzer is activated.
- Motion Status = 1
- Security Status = 1
- LED Status = 1
- Alarm Status = 1

When no motion is detected:

- LED turns OFF.
- Buzzer turns OFF.
- Motion Status = 0
- Security Status = 0
- LED Status = 0
- Alarm Status = 0

The ESP32 sends the system status to ThingSpeak approximately every 20 seconds.

### ThingSpeak Fields

| Field | Description |
|-------|-------------|
| Field 1 | Motion Status |
| Field 2 | Security Status |
| Field 3 | LED Status |
| Field 4 | Alarm Status |

### Tools & Technologies

- ESP32
- Embedded C/C++
- Wi-Fi
- ThingSpeak IoT Cloud
- HTTP API
- Wokwi Simulator

[View Task 04 →](./Task-04/)

---

## Technologies Used

- Arduino UNO
- ESP32
- Embedded C/C++
- LDR Sensor
- PIR Motion Sensor
- LED
- Buzzer
- Wi-Fi
- ThingSpeak IoT Cloud
- HTTP API
- Tinkercad
- Wokwi
- GitHub

---

## Repository Structure

```text
maincrafts-embedded-iot-internship/
│
├── Task-01/
│   ├── README.md
│   ├── smart_lighting_system.ino
│   ├── Embedded_Systems_Task_1_Report.pdf
│   ├── circuit_diagram.png
│   ├── simulation_dark_led_on.png
│   └── simulation_bright_led_off.png
│
├── Task-02/
│   ├── README.md
│   ├── motion_security_system.ino
│   ├── circuit_diagram.png
│   ├── motion_detected.png
│   └── no_motion.png
│
├── Task-03/
│   ├── README.md
│   ├── smart_motion_security.ino
│   ├── circuit_diagram.png
│   ├── intrusion_detected.png
│   └── system_secure.png
│
└── Task-04/
    ├── README.md
    ├── smart_motion_security_cloud.ino
    ├── circuit_diagram.png
    └── thingspeak_dashboard.png
