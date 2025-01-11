int xPin = A0;
int yPin = A1;
int switchPin = 2;
int xVal;
int yVal;
int switchVal;
int delayTime = 100;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(xPin, INPUT);
  pinMode(yPin, INPUT);
  pinMode(switchPin, INPUT);
  digitalWrite(switchPin, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  xVal = analogRead(xPin);
  yVal = analogRead(yPin);
  switchVal = digitalRead(switchPin);
  delay(delayTime);

  Serial.print("X Value: ");
  Serial.print(xVal);
  Serial.print(", Y Value: ");
  Serial.print(yVal);
  Serial.print(", Switch Value: ");
  Serial.print(switchVal);
  Serial.println();
}
