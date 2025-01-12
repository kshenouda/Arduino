#include <Stepper.h>
int stepsPerRevolution = 2048;
int motorSpeed = 10;
int delayTime = 500;
Stepper myStepper(stepsPerRevolution, 8, 10, 9, 11);

int buttonPin = 2;
int currentButtonState = 0;
int previousButtonState;
int direction = 1;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  myStepper.setSpeed(motorSpeed);
  pinMode(buttonPin, INPUT);
  digitalWrite(buttonPin, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  currentButtonState = digitalRead(buttonPin);

  /*
  if (previousButtonState == 0 && currentButtonState == 1) {
    if (direction == 0) {
      myStepper.step(-stepsPerRevolution);
      direction = 1;
    } else {
      myStepper.step(stepsPerRevolution);
      direction = 0;
    }
  }

  previousButtonState = currentButtonState;
  */
  
  if (previousButtonState == 1 && currentButtonState == 0) {
    direction = direction * (-1);
  }
  myStepper.step(direction * 1);
  previousButtonState = currentButtonState;
}

/*
IN1 - PIN 8
IN2 - PIN 9
IN3 - PIN 10
IN4 - PIN 11
*/

/* HOMEWORK
Incorporate button into project
Motor run forward continously
When you press the button, motor switches direction
*/