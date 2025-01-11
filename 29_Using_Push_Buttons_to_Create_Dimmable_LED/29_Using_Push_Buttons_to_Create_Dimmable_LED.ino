int buzzPin = 9;
int buttonPin1 = 11;
int buttonPin2 = 12;
int buttonVal1;
int buttonVal2;
int redPin = 10;
int ledBrightness;
int delayTime = 250;
int buzzDelay = 500;

void setup() {
  // put your setup code here, to run once:
  pinMode(buzzPin, OUTPUT);
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);
  pinMode(redPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonVal1 = digitalRead(buttonPin1);
  buttonVal2 = digitalRead(buttonPin2);
  Serial.print("Button 1 = ");
  Serial.print(buttonVal1);
  Serial.print(", ");
  Serial.print("Button 2 = ");
  Serial.print(buttonVal2);
  Serial.println(", ");
  delay(delayTime);

  // Make LED a bit brighter after button 1 is pressed
  if (buttonVal1 == 0) {
    ledBrightness = ledBrightness + 10;
  }

  // Make LED a bit dimmer after button 2 is pressed
  if (buttonVal2 == 0) {
    ledBrightness = ledBrightness - 10;
  }

  // Cap maximum LED brightness at 255
  // Beep the buzzer if brightness exceeds 255
  if (ledBrightness > 255) {
    ledBrightness = 255;
    digitalWrite(buzzPin, HIGH);
    delay(buzzDelay);
    digitalWrite(buzzPin, LOW);
  }

  // Cap minimum LED brightness at 0
  // Beep the buzzer if brightness drops below 0
  if (ledBrightness < 0) {
    ledBrightness = 0;
    digitalWrite(buzzPin, HIGH);
    delay(buzzDelay);
    digitalWrite(buzzPin, LOW);
  }

  analogWrite(redPin, ledBrightness);
}

