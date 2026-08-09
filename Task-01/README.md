# Task 01 – Smart Lighting System

## Maincrafts Embedded Systems & IoT Internship

### Project Overview

This project is a Smart Lighting System developed using an Arduino UNO and an LDR (Light Dependent Resistor).

The system automatically controls an LED based on the surrounding light intensity. When the environment becomes dark, the LED turns ON. When sufficient light is available, the LED turns OFF.

## Components Used

- Arduino UNO
- LDR / Photoresistor
- 10 kΩ resistor
- LED
- 220 Ω resistor

## Working Principle

The LDR senses the surrounding light intensity and provides an analog signal to the Arduino through analog pin A0.

The Arduino compares the sensor reading with a threshold value of 500.

- Reading below 500 → LED ON
- Reading 500 or above → LED OFF

## Circuit

The circuit was designed and simulated using Tinkercad.

![Circuit Diagram](circuit_diagram.png)

## Simulation Results

### Dark Condition – LED ON

In low-light conditions, the LDR produced a reading of approximately 54 and the LED turned ON.

![Dark Condition](simulation_dark_led_on.png)

### Bright Condition – LED OFF

When the light intensity was increased, the LDR reading went above 800 and the LED turned OFF.

![Bright Condition](simulation_bright_led_off.png)

## Source Code

The Arduino source code is available in:

`smart_lighting_system.ino`

## Project Report

[View the complete Task 1 Report](Embedded_Systems_Task_1_Report.pdf)

## Tools Used

- Arduino UNO
- Tinkercad Circuits
- Arduino C/C++

## Project Status

Completed
