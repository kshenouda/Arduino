#include <Servo.h>
Servo xServo;
Servo yServo;
int servoXPin = 13;
int servoXPosition;
int servoYPin = 12;
int servoYPosition;

int xPin = A1;
int yPin = A0;
int sPin = 2;
int xVal;
int yVal;
int sVal;
int delayTime = 100;

int buzzPin = 7;
// float angle;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(xPin, INPUT);
  pinMode(yPin, INPUT);
  pinMode(sPin, INPUT);
  pinMode(buzzPin, OUTPUT);
  pinMode(servoXPin, OUTPUT);
  pinMode(servoYPin, OUTPUT);
  xServo.attach(servoXPin);
  yServo.attach(servoYPin);
  digitalWrite(sPin, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  xVal = analogRead(xPin);
  yVal = analogRead(yPin);
  sVal = digitalRead(sPin);
  servoXPosition = 180.0 / 1023.0 * xVal;
  servoYPosition = 180.0 / 1023.0 * yVal;
  xServo.write(servoXPosition);
  yServo.write(servoYPosition);
  Serial.print("X Value: ");
  Serial.print(xVal);
  Serial.print(", Y Value: ");
  Serial.print(yVal);
  Serial.print(", Switch Value: ");
  Serial.print(sVal);
  Serial.print(", X Position: ");
  Serial.print(servoXPosition);
  Serial.println();
  
  if (sVal == 0) {
    digitalWrite(buzzPin, HIGH);
  } else {
    digitalWrite(buzzPin, LOW);
  }
}