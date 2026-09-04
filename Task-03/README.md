# Task 03 – Smart Motion Security Automation System

## Maincrafts Embedded Systems & IoT Internship

### Project Overview

This project upgrades the previous motion security prototype into a Smart Automation System using an Arduino UNO and PIR motion sensor.

The system automatically detects motion and activates an LED and buzzer when an intrusion is detected. The system status is also displayed through the Serial Monitor.

### Components Used

- Arduino UNO
- PIR Motion Sensor
- LED
- 220 Ω resistor
- Piezo Buzzer

### Working Principle

The PIR sensor detects movement and sends a digital signal to the Arduino through digital pin 2.

When motion is detected, the Arduino turns ON the LED and buzzer and displays an intrusion alert on the Serial Monitor.

When motion stops, the LED and buzzer are turned OFF and the system returns to the secure state.

### Automation Logic

- Motion detected → LED ON + Buzzer ON + Intrusion Alert
- No motion → LED OFF + Buzzer OFF + System Secure

### Monitoring

The Serial Monitor displays the current security status and alerts the user when motion is detected.

### Pin Connections

| Component | Arduino Pin |
|---|---|
| PIR VCC | 5V |
| PIR OUT | D2 |
| PIR GND | GND |
| LED | D13 |
| Buzzer | D8 |

### Source Code

See `smart_motion_security.ino`.

### Simulation

The project was designed and tested using Tinkercad Circuits.

### Status

Completed
