int buzzPin = 13;
int potPin = A0;
int potVal;
int toneVal;

void setup() {
  // put your setup code here, to run once:
  pinMode(buzzPin, OUTPUT);
  pinMode(potPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  potVal = analogRead(potPin);
  toneVal = ((9940.0/1023.0) * potVal) + 60;
  Serial.println(readVal);

  digitalWrite(buzzPin, HIGH);
  delayMicroseconds(toneVal);
  digitalWrite(buzzPin, LOW);
  delayMicroseconds(toneVal);
}