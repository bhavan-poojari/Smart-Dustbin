/*
  Smart Dustbin Project
  Arduino UNO - IoT based Smart Dustbin
  Components: Ultrasonic Sensor, Servo Motor
  Author: bhavan-poojari
  Date: 2026
*/

// Define pins
const int TRIG_PIN = 9;
const int ECHO_PIN = 10;
const int SERVO_PIN = 11;

// Include Servo library
#include <Servo.h>
Servo servo;

void setup() {
  Serial.begin(9600);
  
  // Initialize pins
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
  
  // Attach servo
  servo.attach(SERVO_PIN);
  servo.write(0); // Close dustbin by default
  
  Serial.println("Smart Dustbin Initialized");
}

void loop() {
  // Get distance from ultrasonic sensor
  long distance = getDistance();
  
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");
  
  // If object detected within 20cm, open lid
  if (distance < 20) {
    Serial.println("Object detected! Opening lid...");
    servo.write(90); // Open dustbin
    delay(3000);     // Keep open for 3 seconds
    servo.write(0);  // Close dustbin
  }
  
  delay(500);
}

long getDistance() {
  // Send ultrasonic pulse
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);
  
  // Measure echo time
  long duration = pulseIn(ECHO_PIN, HIGH);
  
  // Calculate distance (speed of sound = 343 m/s)
  long distance = (duration * 0.0343) / 2;
  
  return distance;
}
