int lightPen = A0;
int lightVal;
int delayVal = 250;
int redPin = 7;
int greenPin = 8;

void setup() {
  // put your setup code here, to run once:
  pinMode(lightPen, INPUT);
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  lightVal = analogRead(lightPen);
  Serial.println(lightVal);
  delay(delayVal);

  if (lightVal < 300) {
    digitalWrite(redPin, HIGH);
    digitalWrite(greenPin, LOW);
  } else {
    digitalWrite(redPin, LOW);
    digitalWrite(greenPin, HIGH);
  }
}