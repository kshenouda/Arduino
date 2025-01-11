int num;
int buzzPin = 8;
int delayTime = 500;

int readPin = A0;
int potVal;

String msg = "Please Input Your Number: ";

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(buzzPin, OUTPUT);
  pinMode(readPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  /*
  Serial.println(msg);

  while(Serial.available() == 0) {

  }
  
  num = Serial.parseInt();
  
  if (num > 10) {
    digitalWrite(buzzPin, HIGH);
    delay(delayTime);
    digitalWrite(buzzPin, LOW);
  }
  */

  potVal = analogRead(readPin);
  Serial.println(potVal);
  while (potVal > 1000) {
    digitalWrite(buzzPin, HIGH);
    potVal = analogRead(readPin);
    Serial.println(potVal);
  }
  digitalWrite(buzzPin, LOW);
}
