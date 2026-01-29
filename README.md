# Smart Dustbin

## Project Description

The Smart Dustbin is an IoT-based automated waste management system that uses ultrasonic sensors to detect the presence of a person or object near the dustbin. When someone approaches within a specified range (typically 20cm), the lid automatically opens using a servo motor, allowing hands-free operation. After a few seconds, the lid closes automatically, maintaining hygiene and convenience.

This project combines Arduino programming, sensor integration, and mechanical automation to create an intelligent waste disposal solution suitable for homes, offices, and public spaces.

## Features

- **Hands-Free Operation**: Automatic lid opening when motion is detected
- **Ultrasonic Sensor Detection**: Accurate distance measurement up to 400cm
- **Servo Motor Control**: Smooth 180-degree lid movement
- **Adjustable Range**: Customizable detection distance
- **Energy Efficient**: Low power consumption design
- **Real-Time Monitoring**: Serial monitor feedback for debugging

## How It Works

1. **Detection Phase**: The HC-SR04 ultrasonic sensor continuously measures the distance to nearby objects
2. **Trigger Condition**: When an object is detected within 20cm range
3. **Lid Opening**: The servo motor rotates 90 degrees to open the lid
4. **Hold Duration**: The lid remains open for 3 seconds
5. **Auto-Close**: The servo motor returns to 0 degrees, closing the lid
6. **Ready State**: The system returns to detection mode


## Code

The complete Arduino code is available in the [`code/smart_dustbin.ino`](code/smart_dustbin.ino) file.

### Key Code Features:
- Pin configuration for ultrasonic sensor (TRIG: Pin 9, ECHO: Pin 10)
- Servo motor control (Signal: Pin 11)
- Distance calculation using ultrasonic pulse timing
- Automatic lid control logic
- Serial communication for debugging

## Components Required

Detailed component list is available in [`COMPONENTS.md`](COMPONENTS.md)

### Main Components:
1. **Arduino UNO** - Main microcontroller
2. **HC-SR04 Ultrasonic Sensor** - Distance measurement
3. **SG90 Servo Motor** - Lid movement
4. **Jumper Wires** - Connections
5. **Power Supply** - 9V battery or USB
6. **Dustbin Container** - Physical enclosure

### Circuit Connections:

**Ultrasonic Sensor:**
- VCC → Arduino 5V
- GND → Arduino GND  
- TRIG → Arduino Pin 9
- ECHO → Arduino Pin 10

**Servo Motor:**
- VCC (Red) → Arduino 5V
- GND (Brown) → Arduino GND
- Signal (Orange) → Arduino Pin 11

## Installation & Setup

1. **Hardware Assembly**:
   - Connect components according to the circuit diagram
   - Mount the servo motor to the dustbin lid
   - Secure the ultrasonic sensor at the front
   - Place Arduino board in an accessible location

2. **Software Upload**:
   ```bash
   # Open Arduino IDE
   # Load code/smart_dustbin.ino
   # Select Board: Arduino UNO
   # Select correct COM Port
   # Click Upload
   ```

3. **Testing**:
   - Open Serial Monitor (9600 baud rate)
   - Move your hand near the sensor
   - Observe distance readings and lid movement
   - Adjust detection range if needed

## Applications

- **Residential Use**: Kitchen and bathroom dustbins
- **Healthcare**: Hospitals and clinics for hygienic waste disposal  
- **Commercial Spaces**: Offices, restaurants, and shopping malls
- **Public Areas**: Parks, bus stops, and railway stations
- **Smart Homes**: Integration with home automation systems

## Future Enhancements

- Add fill-level monitoring using additional sensors
- Implement mobile app connectivity via Bluetooth/Wi-Fi
- Include LED indicators for status display
- Add buzzer alerts when dustbin is full
- Solar panel integration for outdoor deployment
- Data logging for usage analytics

## Author

**Bhavan Poojari**  
GitHub: [@bhavan-poojari](https://github.com/bhavan-poojari)

## License

This project is open-source and available for educational purposes.

-
