# DanieleAzz.github.io

---
layout: default
---

## Autonomous Drone System with Vision-Based Precision Landing

A robotics-focused autonomous drone project that combines embedded AI, computer vision, and flight-control communication to enable precision landing and real-time drone telemetry. The system integrates Jetson Nano hardware, PX4/MAVLink control, and object detection for autonomous mission execution in real-world field conditions.

### Project Overview
This project is an autonomous drone system designed for intelligent aerial navigation and vision-based precision landing. Built around a Jetson Nano and a PX4-compatible flight stack, it uses computer vision to detect a landing target, communicates with the drone through MAVLink, and streams telemetry over MQTT for monitoring and remote status updates. The repository shows a strong focus on embedded robotics, real-time perception, and hardware-in-the-loop integration.

### What the Project Demonstrates
* **Autonomous mission control:** State handling and execution of autonomous flight missions.
* **Computer vision object detection:** Real-time tracking of landing pads.
* **Precision landing logic:** Dynamic adjustments using camera feedback and flight-controller messaging.
* **Real-time telemetry:** Publishing live battery, GPS, and mission status updates.
* **System integration:** Seamless operation across software, embedded hardware, and simulation tools (PX4 SITL).

### Key Technical Components
* **`main.py`**: Core application flow and system initialization.
* **`precision_landing.py`**: Vision processing and landing algorithms.
* **`drone_controller.py`**: Drone control and mission execution management.
* **`pymavlink_lib.py`**: MAVLink communication layer.
* **`mqtt_client.py`**: MQTT telemetry layer for remote monitoring.

### Tech Stack
* **Language:** Python
* **Communication:** PyMAVLink, MQTT
* **AI & Vision:** Jetson Inference, Jetson Utils
* **Flight Stack:** PX4, SITL (Software In The Loop)
* **Hardware:** Jetson Nano