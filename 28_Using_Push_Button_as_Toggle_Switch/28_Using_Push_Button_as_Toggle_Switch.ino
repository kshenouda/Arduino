int buttonPin = 1;
int ledState = 0;
int lastButtonVal = LOW;
int currentButtonVal = LOW;
int redPin = 13;
int delayVal = 100;

void setup() {
  // put your setup code here, to run once:
  pinMode(buttonPin, INPUT);
  pinMode(redPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  currentButtonVal = digitalRead(buttonPin);
  
  /*
  if (lastButtonVal == LOW && currentButtonVal == HIGH) {
    ledState = !ledState;
    digitalWrite(redPin, ledState ? LOW: HIGH);
  }

  lastButtonVal = currentButtonVal;
  */

  if (lastButtonVal == 0 && currentButtonVal == 1) {
    if (ledState == 0) {
      digitalWrite(redPin, HIGH);
      ledState = 1;
    } else {
      digitalWrite(redPin, LOW);
      ledState = 0;
    }
  }

  lastButtonVal = currentButtonVal;
  delay(delayVal);
}