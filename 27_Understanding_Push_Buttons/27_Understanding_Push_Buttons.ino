int buttonPin = A0;
int buttonVal;
int redPin = 13;
int delayVal = 200;

void setup() {
  // put your setup code here, to run once:
  pinMode(buttonPin, INPUT);
  pinMode(redPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonVal = digitalRead(buttonPin);
  Serial.println(buttonVal);
  delay(delayVal);

  if (buttonVal == 0) {
    digitalWrite(redPin, HIGH);
  } else {
    digitalWrite(redPin, LOW);
  }
}
