#include <AFMotor.h>
#include <SoftwareSerial.h>

// HC-05 Bluetooth connections
// Arduino D2 (RX) <- HC-05 TX
// Arduino D10 (TX) -> HC-05 RX
// Use a voltage divider between Arduino D10 and HC-05 RX.

SoftwareSerial BT(2, 10);

// Motor speed
#define SPEED 170

// Four DC motors connected to motor shield ports M1-M4
AF_DCMotor M1(1);
AF_DCMotor M2(2);
AF_DCMotor M3(3);
AF_DCMotor M4(4);

char command;

void setup() {
  BT.begin(9600);

  M1.setSpeed(SPEED);
  M2.setSpeed(SPEED);
  M3.setSpeed(SPEED);
  M4.setSpeed(SPEED);

  stopMotors();
}

void loop() {
  if (BT.available() > 0) {
    command = BT.read();

    switch (command) {
      case 'F':
        forward();
        break;

      case 'B':
        backward();
        break;

      case 'L':
        left();
        break;

      case 'R':
        right();
        break;

      case 'S':
        stopMotors();
        break;
    }
  }
}

void forward() {
  M1.run(FORWARD);
  M2.run(FORWARD);
  M3.run(FORWARD);
  M4.run(FORWARD);
}

void backward() {
  M1.run(BACKWARD);
  M2.run(BACKWARD);
  M3.run(BACKWARD);
  M4.run(BACKWARD);
}

void left() {
  M1.run(FORWARD);
  M2.run(FORWARD);
  M3.run(BACKWARD);
  M4.run(BACKWARD);
}

void right() {
  M1.run(BACKWARD);
  M2.run(BACKWARD);
  M3.run(FORWARD);
  M4.run(FORWARD);
}

void stopMotors() {
  M1.run(RELEASE);
  M2.run(RELEASE);
  M3.run(RELEASE);
  M4.run(RELEASE);
}
