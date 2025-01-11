void setup() {
  // put your setup code here, to run once:
  pinMode(2, OUTPUT); // RED
  pinMode(4, OUTPUT); // GREEN
  pinMode(6, OUTPUT); // BLUE
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(2, HIGH);  
  digitalWrite(4, HIGH);
  digitalWrite(6, HIGH);
  delay(300);
  digitalWrite(2, LOW);
  delay(300);
  digitalWrite(4, LOW);
  delay(200);
  digitalWrite(6, LOW);
  delay(100);
}

// Red LED (Blink 5 times)
// Green LED (Blink 10 times)
// Blue LED (Blink 15 times)