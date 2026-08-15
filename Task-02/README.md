
# Task 02 – Smart Motion Security System

## Maincrafts Embedded Systems & IoT Internship

### Project Overview

This project is a simple motion-based security system developed using an Arduino UNO and a PIR motion sensor.

When motion is detected, the system activates an LED and buzzer and displays a motion alert through the Serial Monitor.

### Components Used

- Arduino UNO
- PIR Motion Sensor
- LED
- 220 Ω resistor
- Piezo buzzer

### Working Principle

The PIR sensor detects movement and sends a digital signal to the Arduino through digital pin 2.

When motion is detected, the Arduino activates the LED and buzzer and displays "MOTION DETECTED!" on the Serial Monitor.

When no motion is detected, the LED and buzzer remain OFF.

### Pin Connections

| Component | Arduino Pin |
|---|---|
| PIR VCC | 5V |
| PIR OUT | D2 |
| PIR GND | GND |
| LED | D13 |
| Buzzer | D8 |

### Source Code

See `motion_security_system.ino`.

### Simulation

The project was designed and tested using Tinkercad Circuits.

### Status

Completed
