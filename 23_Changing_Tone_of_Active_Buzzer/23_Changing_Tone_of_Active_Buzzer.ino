int buzzPin = 8;
int delayTime1 = 1;
int delayTime2 = 2;
int i;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(buzzPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (i = 1; i <= 100; i++) {
    digitalWrite(buzzPin, HIGH);
    delay(delayTime1);
    digitalWrite(buzzPin, LOW);
    delay(delayTime1);
  }

  for (i = 1; 1 <= 100; i++) {
    digitalWrite(buzzPin, HIGH);
    delay(delayTime1);
    digitalWrite(buzzPin, LOW);
    delay(delayTime1);
  }
}
