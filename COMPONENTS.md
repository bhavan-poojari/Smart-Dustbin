# Smart Dustbin - Components List

## Required Hardware Components

### Main Controller
- **Arduino UNO** (1x)
  - Microcontroller board based on ATmega328P
  - Operating Voltage: 5V

### Sensors
- **HC-SR04 Ultrasonic Sensor** (1x)
  - Operating Voltage: 5V DC
  - Operating Current: 15mA
  - Measuring Range: 2cm - 400cm
  - Measuring Angle: 15 degrees

### Actuators
- **SG90 Servo Motor** (1x)
  - Operating Voltage: 4.8V - 6V
  - Torque: 1.8 kg/cm (4.8V)
  - Operating Speed: 0.1s/60° (4.8V)
  - Rotation: 180 degrees

### Power Supply
- **9V Battery** or **USB Power Supply**
- Power adapter (optional)

### Additional Components
- **Jumper Wires** (Male-to-Male, Male-to-Female)
- **Breadboard** (optional for prototyping)
- **Dustbin Container**
- **Mounting brackets** for servo motor

## Circuit Connections

### Ultrasonic Sensor (HC-SR04)
- VCC → Arduino 5V
- GND → Arduino GND
- TRIG → Arduino Pin 9
- ECHO → Arduino Pin 10

### Servo Motor (SG90)
- VCC (Red) → Arduino 5V
- GND (Brown) → Arduino GND
- Signal (Orange) → Arduino Pin 11

## Optional Components
- LED indicators
- Buzzer for audio feedback
- LCD Display for distance readout

## Tools Required
- Soldering iron (optional)
- Wire strippers
- Screwdriver
- Hot glue gun (for mounting)

## Software Requirements
- Arduino IDE (version 1.8.0 or higher)
- Servo Library (pre-installed with Arduino IDE)

---

**Note:** You can add your own photos of the setup in the `images/` folder after building the project.
