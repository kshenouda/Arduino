// DIGITAL BINARY COUNTER PART 2
// COUNT FROM 0 to 31
// 5 LEDS --> 5 PINS & 5 RESISTORS
// COUNT FROM 0 TO 31 IN BINARY

int LED_1 = 4;
int LED_2 = 6; 
int LED_3 = 8;
int LED_4 = 10;
int LED_5 = 2;
int long_delay = 100;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_1, OUTPUT);
  pinMode(LED_2, OUTPUT);
  pinMode(LED_3, OUTPUT);
  pinMode(LED_4, OUTPUT);
  pinMode(LED_5, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  // 0 to 15 in binary
  digitalWrite(LED_5, LOW); // 16
  digitalWrite(LED_1, LOW); // 8
  digitalWrite(LED_2, LOW); // 4
  digitalWrite(LED_3, LOW); // 2
  digitalWrite(LED_4, LOW); // 1
  delay(long_delay);

  digitalWrite(LED_5, LOW);
  digitalWrite(LED_1, LOW);
  digitalWrite(LED_2, LOW);
  digitalWrite(LED_3, LOW);
  digitalWrite(LED_4, HIGH);
  delay(long_delay);

  digitalWrite(LED_5, LOW);
  digitalWrite(LED_1, LOW);
  digitalWrite(LED_2, LOW);
  digitalWrite(LED_3, HIGH);
  digitalWrite(LED_4, LOW);
  delay(long_delay);

  digitalWrite(LED_5, LOW);
  digitalWrite(LED_1, LOW);
  digitalWrite(LED_2, LOW);
  digitalWrite(LED_3, HIGH);
  digitalWrite(LED_4, HIGH);
  delay(long_delay);

  digitalWrite(LED_5, LOW);
  digitalWrite(LED_1, LOW);
  digitalWrite(LED_2, HIGH);
  digitalWrite(LED_3, LOW);
  digitalWrite(LED_4, LOW);
  delay(long_delay);

  digitalWrite(LED_5, LOW);
  digitalWrite(LED_1, LOW);
  digitalWrite(LED_2, HIGH);
  digitalWrite(LED_3, LOW);
  digitalWrite(LED_4, HIGH);
  delay(long_delay);

  digitalWrite(LED_5, LOW);
  digitalWrite(LED_1, LOW);
  digitalWrite(LED_2, HIGH);
  digitalWrite(LED_3, HIGH);
  digitalWrite(LED_4, LOW);
  delay(long_delay);

  digitalWrite(LED_5, LOW);
  digitalWrite(LED_5, LOW);
  digitalWrite(LED_1, LOW);
  digitalWrite(LED_2, HIGH);
  digitalWrite(LED_3, HIGH);
  digitalWrite(LED_4, HIGH);
  delay(long_delay);

  digitalWrite(LED_5, LOW);
  digitalWrite(LED_1, HIGH);
  digitalWrite(LED_2, LOW);
  digitalWrite(LED_3, LOW);
  digitalWrite(LED_4, LOW);
  delay(long_delay);

  digitalWrite(LED_5, LOW);
  digitalWrite(LED_1, HIGH);
  digitalWrite(LED_2, LOW);
  digitalWrite(LED_3, LOW);
  digitalWrite(LED_4, HIGH);
  delay(long_delay);

  digitalWrite(LED_5, LOW);
  digitalWrite(LED_1, HIGH);
  digitalWrite(LED_2, LOW);
  digitalWrite(LED_3, HIGH);
  digitalWrite(LED_4, LOW);
  delay(long_delay);

  digitalWrite(LED_5, LOW);
  digitalWrite(LED_1, HIGH);
  digitalWrite(LED_2, LOW);
  digitalWrite(LED_3, HIGH);
  digitalWrite(LED_4, HIGH);
  delay(long_delay);

  digitalWrite(LED_5, LOW);
  digitalWrite(LED_1, HIGH);
  digitalWrite(LED_2, HIGH);
  digitalWrite(LED_3, LOW);
  digitalWrite(LED_4, LOW);
  delay(long_delay);

  digitalWrite(LED_5, LOW);
  digitalWrite(LED_1, HIGH);
  digitalWrite(LED_2, HIGH);
  digitalWrite(LED_3, LOW);
  digitalWrite(LED_4, HIGH);
  delay(long_delay);

  digitalWrite(LED_5, LOW);
  digitalWrite(LED_1, HIGH);
  digitalWrite(LED_2, HIGH);
  digitalWrite(LED_3, HIGH);
  digitalWrite(LED_4, LOW);
  delay(long_delay);

  digitalWrite(LED_5, LOW);
  digitalWrite(LED_1, HIGH);
  digitalWrite(LED_2, HIGH);
  digitalWrite(LED_3, HIGH);
  digitalWrite(LED_4, HIGH);
  delay(long_delay);


  // 16 to 31 in binary
  digitalWrite(LED_5, HIGH);
  digitalWrite(LED_1, LOW);
  digitalWrite(LED_2, LOW);
  digitalWrite(LED_3, LOW);
  digitalWrite(LED_4, LOW);
  delay(long_delay);

  digitalWrite(LED_5, HIGH);
  digitalWrite(LED_1, LOW);
  digitalWrite(LED_2, LOW);
  digitalWrite(LED_3, LOW);
  digitalWrite(LED_4, HIGH);
  delay(long_delay);

  digitalWrite(LED_5, HIGH);
  digitalWrite(LED_1, LOW);
  digitalWrite(LED_2, LOW);
  digitalWrite(LED_3, HIGH);
  digitalWrite(LED_4, LOW);
  delay(long_delay);

  digitalWrite(LED_5, HIGH);
  digitalWrite(LED_1, LOW);
  digitalWrite(LED_2, LOW);
  digitalWrite(LED_3, HIGH);
  digitalWrite(LED_4, HIGH);
  delay(long_delay);

  digitalWrite(LED_5, HIGH);
  digitalWrite(LED_1, LOW);
  digitalWrite(LED_2, HIGH);
  digitalWrite(LED_3, LOW);
  digitalWrite(LED_4, LOW);
  delay(long_delay);

  digitalWrite(LED_5, HIGH);
  digitalWrite(LED_1, LOW);
  digitalWrite(LED_2, HIGH);
  digitalWrite(LED_3, LOW);
  digitalWrite(LED_4, HIGH);
  delay(long_delay);

  digitalWrite(LED_5, HIGH);
  digitalWrite(LED_1, LOW);
  digitalWrite(LED_2, HIGH);
  digitalWrite(LED_3, HIGH);
  digitalWrite(LED_4, LOW);
  delay(long_delay);

  digitalWrite(LED_5, HIGH);
  digitalWrite(LED_1, LOW);
  digitalWrite(LED_2, HIGH);
  digitalWrite(LED_3, HIGH);
  digitalWrite(LED_4, HIGH);
  delay(long_delay);

  digitalWrite(LED_5, HIGH);
  digitalWrite(LED_1, HIGH);
  digitalWrite(LED_2, LOW);
  digitalWrite(LED_3, LOW);
  digitalWrite(LED_4, LOW);
  delay(long_delay);

  digitalWrite(LED_5, HIGH);
  digitalWrite(LED_1, HIGH);
  digitalWrite(LED_2, LOW);
  digitalWrite(LED_3, LOW);
  digitalWrite(LED_4, HIGH);
  delay(long_delay);

  digitalWrite(LED_5, HIGH);
  digitalWrite(LED_1, HIGH);
  digitalWrite(LED_2, LOW);
  digitalWrite(LED_3, HIGH);
  digitalWrite(LED_4, LOW);
  delay(long_delay);

  digitalWrite(LED_5, HIGH);
  digitalWrite(LED_1, HIGH);
  digitalWrite(LED_2, LOW);
  digitalWrite(LED_3, HIGH);
  digitalWrite(LED_4, HIGH);
  delay(long_delay);

  digitalWrite(LED_5, HIGH);
  digitalWrite(LED_1, HIGH);
  digitalWrite(LED_2, HIGH);
  digitalWrite(LED_3, LOW);
  digitalWrite(LED_4, LOW);
  delay(long_delay);

  digitalWrite(LED_5, HIGH);
  digitalWrite(LED_1, HIGH);
  digitalWrite(LED_2, HIGH);
  digitalWrite(LED_3, LOW);
  digitalWrite(LED_4, HIGH);
  delay(long_delay);

  digitalWrite(LED_5, HIGH);
  digitalWrite(LED_1, HIGH);
  digitalWrite(LED_2, HIGH);
  digitalWrite(LED_3, HIGH);
  digitalWrite(LED_4, LOW);
  delay(long_delay);

  digitalWrite(LED_5, HIGH);
  digitalWrite(LED_1, HIGH);
  digitalWrite(LED_2, HIGH);
  digitalWrite(LED_3, HIGH);
  digitalWrite(LED_4, HIGH);
  delay(long_delay);
}




