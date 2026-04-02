# Smart-IR-control

This project allows you to control IR-based devices (like a fan) via a web interface using an ESP32 or through the Serial Monitor with an Arduino UNO.

## Overview

The project consists of three main files:

### 1. IR Signal Properties Detector
Used to detect the IR protocol and hexadecimal codes from your existing remote.

### 2. Smart IR Web UI Using The ESPUI Library
A web-based interface using the ESPUI library that lets you control your device using buttons.
You can modify the IR hex codes in this file to match your device.

### 3. Controlling IR Device using Arduino UNO
Demonstrates controlling a fan using an Arduino UNO via the Serial Monitor.
This is included because standard Arduino UNO boards do not have built-in WiFi or Bluetooth like the ESP32.

### Components
- ESP32
- Arduino UNO
- HW-489 IR Transmitter
- IR Receiver Module (you can also use an IR sensor if you correctly adjust the sensitivity.)

### Libraries 
- IRremoteESP8266
- IRsend
- WiFi
- ESPUI
- IRremote
- IRrecv
- IRutils

### Notes
- You can customize the IR hex codes in the Smart IR UI file to work with any IR-based device.
- This project was built to make a web UI for a Luker IR fan, but it can be adapted for TVs, ACs, and other IR devices.

This is the block diagram of the IR transmitter/receiver (since G4 pin has both input and output capabilities)
<img width="1280" height="720" alt="Block_diagram" src="https://github.com/user-attachments/assets/0f697f5d-f5f4-4ee6-bb70-aee0c1e1c471" />
