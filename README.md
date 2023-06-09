# BE_Cpp_2k23

## Documentation : Voir [Refman](Alarme/latex/refman.pdf)
## Rapport : Voir [ici](Rapport/Alarme_connectee.pdf)

# Intrusion Detection System

This project implements an Intrusion Detection System using Arduino. It detects motion using a motion sensor and sends an alert via email when an intrusion is detected. The system also includes a display and a buzzer for visual and auditory feedback.

## Table of Contents

- [Introduction](#introduction)
- [Features](#features)
- [Hardware Requirements](#hardware-requirements)
- [Software Requirements](#software-requirements)
- [Installation](#installation)
- [Usage](#usage)

## Introduction

The Intrusion Detection System uses an Arduino board along with various components such as a motion sensor, display, buzzer, and Wi-Fi module to provide real-time detection and alerting capabilities. The system is designed to detect intrusions and notify the user via email.

## Features

- Motion detection using a motion sensor
- Real-time display messages on an OLED display
- Auditory alert using a buzzer
- Email notification when an intrusion is detected
- Error handling for Wi-Fi connectivity issues

## Hardware Requirements

To run this project, you will need the following hardware components:

- Arduino board (e.g., ESP8266)
- Motion sensor module
- OLED display module (e.g., SSD1306)
- Buzzer module
- Wi-Fi module (e.g., ESP8266)

Make sure to connect the hardware components correctly according to your Arduino board and module specifications.

## Software Requirements

The following software libraries are required to run the project:

- Wire.h
- Adafruit_GFX.h
- Adafruit_SSD1306.h

Ensure that you have installed these libraries in your Arduino development environment.

## Installation

1. Clone or download the project repository from GitHub.
2. Open the Arduino IDE.
3. Connect your Arduino board to your computer.
4. Open the `Main.ino` file in the Arduino IDE.
5. Install any missing libraries by navigating to **Sketch > Include Library > Manage Libraries** and searching for the required library names.
6. Connect your Arduino board to the appropriate ports and pins based on your hardware setup.
7. Compile and upload the code to your Arduino board.

## Usage

1. Connect your Arduino board to a power source.
2. The system will attempt to connect to the Wi-Fi network specified in the code. If successful, it will display "WiFi connected" on the OLED display. Otherwise, it will display "WiFi error."
3. Once the Wi-Fi connection is established, the system will continuously monitor the motion sensor.
4. If an intrusion is detected, it will display "Intrus détecté" on the OLED display, activate the buzzer, and send an email notification.
5. Press the button connected to the Arduino board to reset the system and clear the display.


