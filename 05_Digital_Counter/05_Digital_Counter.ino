// DIGITAL BINARY COUNTER
// COUNT FROM 0 to 15
// 4 LEDS --> 4 PINS & 4 RESISTORS
// COUNT FROM 0 TO 15 IN BINARY

int LED_1 = 2;
int LED_2 = 4; 
int LED_3 = 6;
int LED_4 = 8;
int long_delay = 1000;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_1, OUTPUT);
  pinMode(LED_2, OUTPUT);
  pinMode(LED_3, OUTPUT);
  pinMode(LED_4, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED_1, LOW);
  digitalWrite(LED_2, LOW);
  digitalWrite(LED_3, LOW);
  digitalWrite(LED_4, LOW);
  delay(long_delay);

  digitalWrite(LED_1, LOW);
  digitalWrite(LED_2, LOW);
  digitalWrite(LED_3, LOW);
  digitalWrite(LED_4, HIGH);
  delay(long_delay);

  digitalWrite(LED_1, LOW);
  digitalWrite(LED_2, LOW);
  digitalWrite(LED_3, HIGH);
  digitalWrite(LED_4, LOW);
  delay(long_delay);

  digitalWrite(LED_1, LOW);
  digitalWrite(LED_2, LOW);
  digitalWrite(LED_3, HIGH);
  digitalWrite(LED_4, HIGH);
  delay(long_delay);

  digitalWrite(LED_1, LOW);
  digitalWrite(LED_2, HIGH);
  digitalWrite(LED_3, LOW);
  digitalWrite(LED_4, LOW);
  delay(long_delay);

  digitalWrite(LED_1, LOW);
  digitalWrite(LED_2, HIGH);
  digitalWrite(LED_3, LOW);
  digitalWrite(LED_4, HIGH);
  delay(long_delay);

  digitalWrite(LED_1, LOW);
  digitalWrite(LED_2, HIGH);
  digitalWrite(LED_3, HIGH);
  digitalWrite(LED_4, LOW);
  delay(long_delay);

  digitalWrite(LED_1, LOW);
  digitalWrite(LED_2, HIGH);
  digitalWrite(LED_3, HIGH);
  digitalWrite(LED_4, HIGH);
  delay(long_delay);

  digitalWrite(LED_1, HIGH);
  digitalWrite(LED_2, LOW);
  digitalWrite(LED_3, LOW);
  digitalWrite(LED_4, LOW);
  delay(long_delay);

  digitalWrite(LED_1, HIGH);
  digitalWrite(LED_2, LOW);
  digitalWrite(LED_3, LOW);
  digitalWrite(LED_4, HIGH);
  delay(long_delay);

  digitalWrite(LED_1, HIGH);
  digitalWrite(LED_2, LOW);
  digitalWrite(LED_3, HIGH);
  digitalWrite(LED_4, LOW);
  delay(long_delay);

  digitalWrite(LED_1, HIGH);
  digitalWrite(LED_2, LOW);
  digitalWrite(LED_3, HIGH);
  digitalWrite(LED_4, HIGH);
  delay(long_delay);

  digitalWrite(LED_1, HIGH);
  digitalWrite(LED_2, HIGH);
  digitalWrite(LED_3, LOW);
  digitalWrite(LED_4, LOW);
  delay(long_delay);

  digitalWrite(LED_1, HIGH);
  digitalWrite(LED_2, HIGH);
  digitalWrite(LED_3, LOW);
  digitalWrite(LED_4, HIGH);
  delay(long_delay);

  digitalWrite(LED_1, HIGH);
  digitalWrite(LED_2, HIGH);
  digitalWrite(LED_3, HIGH);
  digitalWrite(LED_4, LOW);
  delay(long_delay);

  digitalWrite(LED_1, HIGH);
  digitalWrite(LED_2, HIGH);
  digitalWrite(LED_3, HIGH);
  digitalWrite(LED_4, HIGH);
  delay(long_delay);
}


