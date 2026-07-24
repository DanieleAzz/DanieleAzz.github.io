---
layout: default
title: "Personal Projects"
---

<style>
  /* GLOBAL DARK OVERRIDES (SpaceX / Aerospace Theme) */
  body, html {
    background-color: #050608 !important; /* Deep space black */
    color: #a0aab2 !important; /* Muted gray for readability */
    font-family: -apple-system, BlinkMacSystemFont, "Segoe UI", Roboto, Helvetica, Arial, sans-serif !important;
  }
  
  #main_content_wrap {
    background: transparent !important;
    border: none !important;
  }
  
  #main_content {
    background: transparent !important;
  }

  h1, h2, h3, h4, h5, h6 {
    color: #ffffff !important;
    text-transform: uppercase;
    letter-spacing: 1.5px;
  }

  p, li {
    color: #b0bac3;
    line-height: 1.6;
  }

  /* BIO SECTION */
  .bio-container {
    margin-bottom: 40px;
    font-size: 1.0em;
    color: #ffffff !important;
  }
  
  .bio-container p {
    color: #ffffff !important;
  }
  
  .profile-pic {
    float: right; 
    width: 180px; 
    border-radius: 50%; 
    margin-left: 30px; 
    margin-bottom: 20px; 
    box-shadow: 0 0 20px rgba(255,255,255,0.05);
    border: 2px solid rgba(255,255,255,0.1);
  }

  /* PROJECT CARDS */
  .project-card {
    border: 1px solid rgba(255, 255, 255, 0.08);
    border-radius: 12px;
    padding: 32px;
    margin-bottom: 24px;
    background: linear-gradient(145deg, #0e1116, #151921);
    transition: all 0.3s ease;
    box-shadow: 0 8px 24px rgba(0,0,0,0.6);
  }
  
  .project-card:hover {
    transform: translateY(-5px);
    box-shadow: 0 12px 32px rgba(102, 252, 241, 0.06); /* Subtle cyan thruster glow */
    border-color: rgba(102, 252, 241, 0.3);
  }

  .project-card h3 {
    margin-top: 0;
    margin-bottom: 16px;
    color: #ffffff;
    font-size: 1.25em;
    border-bottom: 1px solid rgba(255,255,255,0.1);
    padding-bottom: 12px;
  }

  .project-card strong {
    color: #ffffff;
    letter-spacing: 0.5px;
  }

  /* CORE TECH STACK CARD */
  .corestack-card {
    border-radius: 12px;
    padding: 32px;
    margin: 40px 0;
    background: linear-gradient(145deg, #0a0c10, #161b22);
    border: 1px solid rgba(255, 255, 255, 0.1);
    box-shadow: 0 10px 30px rgba(0,0,0,0.8);
  }
  
  .corestack-card h3 {
    margin-top: 0;
    margin-bottom: 24px;
    border-bottom: 1px solid rgba(255,255,255,0.1);
    padding-bottom: 12px;
  }
  
  .stack-category {
    display: flex;
    align-items: flex-start;
    flex-wrap: wrap;
    margin-bottom: 16px;
    gap: 12px;
  }
  
  .stack-label {
    color: #66fcf1; /* Aerospace interface cyan */
    font-weight: 600;
    text-transform: uppercase;
    letter-spacing: 1px;
    font-size: 0.80em;
    width: 180px;
    flex-shrink: 0;
    padding-top: 8px; 
  }
  
  .stack-badges-container {
    display: flex;
    flex-wrap: wrap;
    gap: 8px;
    flex: 1;
  }
  
  .stack-badge {
    display: inline-block;
    padding: 6px 14px;
    border-radius: 20px;
    background: rgba(255, 255, 255, 0.03);
    border: 1px solid rgba(255, 255, 255, 0.15);
    font-size: 0.85em;
    font-weight: 500;
    letter-spacing: 0.5px;
    color: #ffffff;
    backdrop-filter: blur(4px);
    transition: all 0.2s ease;
  }
  
  .stack-badge:hover {
    background: rgba(102, 252, 241, 0.1);
    border-color: #66fcf1;
    color: #66fcf1;
    transform: translateY(-2px);
    box-shadow: 0 4px 10px rgba(0,0,0,0.3);
  }

  /* MOBILE RESPONSIVENESS */
  @media (max-width: 600px) {
    .stack-category {
      flex-direction: column;
      gap: 6px;
      margin-bottom: 24px;
    }
    .stack-label {
      width: 100%;
      padding-top: 0;
    }
    .profile-pic {
      float: none;
      display: block;
      margin: 0 auto 20px auto;
    }
  }
</style>

<div class="bio-container">
  <img src="assets/images/DSC07320.jpg" alt="Daniele Azzaro" class="profile-pic">

  <p>Hi! I am Daniele, an Italian engineer based in the US.</p>

  <p>My experience combines two worlds: my agricultural business and my engineering background. I love solving challenging problems and building solutions for them. My entrepreneurial background gives me a clear vision of some of what a real-world application needs, allowing me to bring forward-thinking solutions to the table, especially in agriculture applications.</p>

  <p>I am very passionate about designing and building robotics, especially drones, and IoT systems, combining hands-on hardware and software development to deploy end-to-end autonomous systems.</p>
</div>

<div style="clear: both;"></div>

<div class="corestack-card">
  <h3>My Core Technical Stack</h3>

  <div class="stack-category">
    <div class="stack-label">Robotics & Autonomy</div>
    <div class="stack-badges-container">
      <span class="stack-badge">ROS2</span>
      <span class="stack-badge">PX4</span>
      <span class="stack-badge">MAVLink</span>
      <span class="stack-badge">QGroundControl</span>
      <span class="stack-badge">Gazebo</span>
    </div>
  </div>

  <div class="stack-category">
    <div class="stack-label">Software & Edge ML</div>
    <div class="stack-badges-container">
      <span class="stack-badge">Python</span>
      <span class="stack-badge">C</span>
      <span class="stack-badge">OpenCV</span>
      <span class="stack-badge">PyTorch</span>
      <span class="stack-badge">TensorFlow</span>
      <span class="stack-badge">Docker</span>
    </div>
  </div>

  <div class="stack-category">
    <div class="stack-label">IoT & Hardware</div>
    <div class="stack-badges-container">
      <span class="stack-badge">NVIDIA Jetson</span>
      <span class="stack-badge">Raspberry Pi</span>
      <span class="stack-badge">Arduino</span>
      <span class="stack-badge">ESP32</span>
      <span class="stack-badge">nRF</span>
      <span class="stack-badge">AWS</span>
      <span class="stack-badge">MQTT</span>
    </div>
  </div>

  <div class="stack-category">
    <div class="stack-label">Fullstack</div>
    <div class="stack-badges-container">
      <span class="stack-badge">Flask</span>
      <span class="stack-badge">React v19</span>
    </div>
  </div>

  <div class="stack-category">
    <div class="stack-label">Mechanical & Design</div>
    <div class="stack-badges-container">
      <span class="stack-badge">Fusion360</span>
      <span class="stack-badge">3D Printing</span>
    </div>
  </div>
</div>

<div class="project-title" markdown="1">

## My Projects

Below is a collection of some of the projects I've worked on.

</div>

<div class="project-card" markdown="1">

### Crover - Differential PX4 Rover (professional project)

**Overview**
An autonomous rover platform designed for intelligent field navigation, perception, and real-world robotics deployment. Built around ROS 2 and PX4, this project integrates custom vehicle control, lidar sensing, and camera-based perception to enable autonomous operation in agricultural and outdoor environments.

**Key Features**
* Developed a modular autonomous rover stack for sensing, navigation, and control
* Integrated PX4 autopilot with custom control modes for direct speed and steering command execution
* Implemented lidar-assisted row detection and navigation for autonomous traversal through crop rows
* Used camera input for visual perception, object/row detection, and future inspection-based decision making
* Supported both simulation and hardware testing workflows, including SITL/Gazebo and field deployment preparation

**Tech Stack:** 
<div class="stack-badges-container" style="margin-top: 8px;">
  <span class="stack-badge">C++</span>
  <span class="stack-badge">ROS 2</span>
  <span class="stack-badge">PX4</span>
  <span class="stack-badge">SITL</span>
  <span class="stack-badge">Gazebo</span>
  <span class="stack-badge">OpenCV</span>
  <span class="stack-badge">Python</span>
  <span class="stack-badge">MAVLink</span>
</div>

</div>

<div class="project-card" markdown="1">

### Autonomous Drone for a remote drone docking station (professional project)

**Overview:** 
An autonomous drone system designed for intelligent aerial navigation and vision-based precision landing. It integrates Jetson Nano hardware, PX4/MAVLink control, and object detection for autonomous mission execution in real-world field conditions.

**Key Features:**
* Engineered and built custom quadcopter and hexacopter hardware platforms
* Autonomous drone mission control and state handling
* Computer vision-based object detection for landing-pad tracking
* Precision landing logic using camera feedback and flight-controller messaging
* Real-time telemetry publishing for battery, GPS, and mission status

**Tech Stack:** 
<div class="stack-badges-container" style="margin-top: 8px;">
  <span class="stack-badge">Python</span>
  <span class="stack-badge">PyMAVLink</span>
  <span class="stack-badge">Jetson Inference</span>
  <span class="stack-badge">MQTT</span>
  <span class="stack-badge">PX4</span>
  <span class="stack-badge">SITL</span>
  <span class="stack-badge">Gazebo</span>
</div>

</div>

<div class="project-card" markdown="1">

### Kernel-IoT (personal project)

**Overview:**
An autonomous IoT environmental monitoring system designed for remote weather data collection and cloud-based telemetry. It integrates ESP32 hardware, embedded firmware, and wireless communication to measure environmental conditions and transmit data in real-world outdoor deployments.

**Key Features:**
* Designed and deployed a battery-powered ESP32-based monitoring unit
* Implemented autonomous data acquisition from wind, rain, and temperature sensors
* Built wireless telemetry transmission using Wi-Fi with HTTPS and MQTT
* Structured sensor data into JSON payloads with timestamped reporting
* Developed firmware for real-world deployment scenarios with a focus on reliability and low-power operation

**Tech Stack:** 
<div class="stack-badges-container" style="margin-top: 8px;">
  <span class="stack-badge">C</span>
  <span class="stack-badge">ESP-IDF</span>
  <span class="stack-badge">FreeRTOS</span>
  <span class="stack-badge">Wi-Fi</span>
  <span class="stack-badge">HTTPS</span>
  <span class="stack-badge">MQTT</span>
</div>

</div>

<div class="project-card" markdown="1">

### SoftFarm (professional project)

**Overview**
A full-stack farm intelligence platform designed to collect, process, and visualize agricultural data from multiple field sources. The system integrates a Python-based backend, modular data handlers, and a modern frontend interface to support real-time monitoring, analytics, and operational control for precision agriculture applications.

**Key Features**
* Built a scalable backend for ingesting data from heterogeneous agricultural sources such as PheNode, LoRa testbeds, and FieldDock systems
* Implemented modular data processing pipelines for normalization, storage, and retrieval of sensor and field telemetry
* Developed health monitoring and device-management capabilities for controlling and tracking data handler processes
* Created a cross-platform dashboard experience for viewing maps, charts, and downloadable reports
* Designed the architecture to be extensible for adding new sensors and data providers with minimal rework

**Tech Stack:** 
<div class="stack-badges-container" style="margin-top: 8px;">
  <span class="stack-badge">Python</span>
  <span class="stack-badge">Flask</span>
  <span class="stack-badge">PyMongo</span>
  <span class="stack-badge">MongoDB</span>
  <span class="stack-badge">MQTT</span>
  <span class="stack-badge">React Native</span>
  <span class="stack-badge">Leaflet</span>
</div>

</div>

<div class="project-card" markdown="1">

### Horus (professional project)

**Overview:** 
Horus is an embedded edge-computing platform designed for autonomous field monitoring and intelligent visual data acquisition. Built around Raspberry Pi hardware, it integrates camera-based image capture, environmental sensing, and automated data logging to support remote monitoring in real-world outdoor environments.

**Key Features:**
* Designed and deployed an embedded system for agricultural and environmental data collection
* Implemented a camera capture pipeline for high-quality image acquisition and storage
* Integrated BME280 sensor readings for temperature, humidity, and pressure monitoring
* Built automated logging and file organization workflows for daily data capture
* Developed a Linux-based deployment setup with remote monitoring and synchronization support

**Tech Stack:** 
<div class="stack-badges-container" style="margin-top: 8px;">
  <span class="stack-badge">C++</span>
  <span class="stack-badge">Raspberry Pi CM4</span>
  <span class="stack-badge">I2C</span>
  <span class="stack-badge">Linux</span>
  <span class="stack-badge">MQTT</span>
  <span class="stack-badge">AWS</span>
</div>

</div>