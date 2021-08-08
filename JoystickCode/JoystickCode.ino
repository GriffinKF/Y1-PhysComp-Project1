#include <Servo.h>

byte servoPin = 9;
Servo myServo;
int servoPos =90;
int servoMax = 180;
int servoMin = 0;
int servoMove = 6;

byte potPin = A0;
int servoValue = 0;
int servoCentre = 512;
int servoDeadRange = 50;

unsigned long curMillis;
unsigned long readIntervalMillis = 100;
unsigned long lastReadMillis;

void setup() {
  Serial.begin(9600);
  
  myServo.attach(servoPin);
  myServo.write(servoPos);
}

void loop() {
  curMillis = millis();
  readJoystick();
  moveServo();
}

void readJoystick() {
      // check the time
  if (curMillis - lastReadMillis >= readIntervalMillis) {
    lastReadMillis += readIntervalMillis;
      // read the joystick
    servoValue = analogRead(potPin);
      // figure if a move is required
    if (servoValue > servoCentre + servoDeadRange) {
      servoPos += servoMove;
    }
    if (servoValue < servoCentre - servoDeadRange) {
      servoPos -= servoMove;
    }
      // check that the values are within limits
    if (servoPos > servoMax) {
      servoPos = servoMax;
    }
    if (servoPos < servoMin) {
      servoPos = servoMin;
    }
  }
}

void moveServo() {
  myServo.write(servoPos);
}
