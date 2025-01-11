#include <Servo.h>

int servoPin = 3;
int servoPosition;
int readPin = A0;
int readVal;
int delayTime = 100;
// float angle;
Servo myServo;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  myServo.attach(servoPin);
  pinMode(servoPin, OUTPUT);
  pinMode(readPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  /*
  Serial.println("What angle should the servo go to? ");

  while (Serial.available() == 0) {

  }
  servoPosition = Serial.parseInt();
  myServo.write(servoPosition);
  */
  readVal = analogRead(readPin);
  Serial.println(readVal);
  delay(delayTime);
  // angle = (slope) * readVal + ... (derive from point-slope form)

  if (readVal < 150) {
    myServo.write(0);
  } else if (readVal >= 150 && readVal < 750) {
    myServo.write(90);
  } else if (readVal >= 750 && readVal  < 785) {
    myServo.write(180);
  } else if (readVal >= 785 && readVal < 840) {
    myServo.write(270);
  }

}

// take 5k/(10k?)resistor and photodetector
// build a circuit that describes weather conditions
// 9am (270 degrees), 12pm (0 degrees), 3pm 
// HINT: use math (slope formula and point slope form)

// dark - 50
// weak - 727
// medium - 784
// strong - 838