# Bluetooth-Controlled Four-Wheel Car

## Project Overview
This project involves the development of a four-wheel robotic car controlled wirelessly through a mobile application using an HC-05 Bluetooth module and an Arduino Uno.

## Hardware Components
- Arduino Uno
- HC-05 Bluetooth module
- Four DC geared motors
- Motor driver shield compatible with the AFMotor library
- Four-wheel robotic car chassis
- Battery supply
- Ultrasonic sensor (installed; obstacle detection was not successfully implemented)

## Working
The Arduino Uno receives movement commands from a mobile application through the HC-05 Bluetooth module. Based on the received commands, the motor driver controls the four DC motors to move the car.

| Command | Function |
|---|---|
| F | Forward |
| B | Backward |
| L | Left |
| R | Right |
| S | Stop |

## Software and Libraries
- Arduino IDE
- C/C++
- AFMotor library
- SoftwareSerial library

## Implemented Features
- Bluetooth-based wireless control
- Forward and backward movement
- Left and right movement
- Motor control and stopping

## Additional Experiment
An ultrasonic sensor was installed for obstacle detection, but the feature was not successfully implemented in the final working prototype.

## Project Files
- `code/` – Arduino source code
- `images/` – Project photographs
- `video/` – Demonstration video link
- `report/` – Project documentation

## Future Improvements
- Implement reliable ultrasonic obstacle detection
- Add autonomous navigation
- Improve power management and control

