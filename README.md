# Maincrafts Embedded Systems & IoT Internship

This repository contains the projects, source code, documentation, and
simulation results completed as part of my Maincrafts Embedded Systems & IoT internship.

## Internship Tasks

| Task | Project | Status |
|------|---------|--------|
| Task 01 | Smart Lighting System using Arduino UNO and LDR | Completed |
| Task 02 | Smart Motion Security System using Arduino UNO and PIR | Completed |
| Task 03 | Smart Motion Security Automation System | Completed |

## Task 01 – Smart Lighting System

A sensor-based lighting system using an Arduino UNO and LDR.

The system automatically turns the LED ON in low-light conditions
and OFF when sufficient light is available.

## Task 02 – Smart Motion Security System

A motion detection system using an Arduino UNO, PIR sensor, LED,
and buzzer.

When motion is detected, the LED and buzzer are activated and an
alert is displayed through the Serial Monitor.

## Task 03 – Smart Motion Security Automation System

An upgraded version of the Task 02 project with automation logic
and system monitoring.

The system detects motion, activates the LED and buzzer, and displays
the security status through the Serial Monitor.

## Technologies & Tools

- Arduino UNO
- Embedded C/C++
- PIR Motion Sensor
- LDR Sensor
- Tinkercad Circuits
- GitHub

## Repository Structure

Each internship task is organized into its own folder containing
the relevant source code, documentation, circuit diagrams, and
simulation evidence.

```text
maincrafts-embedded-iot-internship/
│
├── README.md
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
└── Task-03/
    ├── README.md
    ├── smart_motion_security.ino
    ├── circuit_diagram.png
    ├── intrusion_detected.png
    └── system_secure.png
