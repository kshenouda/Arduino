int tiltPin = 13;
int tiltVal;
int redLEDPin = 4;
int greenLEDPin = 2;

void setup() {
  // put your setup code here, to run once:
  pinMode(tiltPin, INPUT);
  digitalWrite(tiltPin, HIGH);
  pinMode(redLEDPin, INPUT);
  pinMode(greenLEDPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  tiltVal = digitalRead(tiltPin);
  Serial.println(tiltVal);
  if (tiltVal == 0) {
    digitalWrite(redLEDPin, LOW);
    digitalWrite(greenLEDPin, HIGH);
  }
  if (tiltVal == 1) {
    digitalWrite(redLEDPin, HIGH);
    digitalWrite(greenLEDPin, LOW);
  }
}

// HOMEWORK:
// build a visual indicator of the tilt
// if upright, light green LED
// otherwise, light red
