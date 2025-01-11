// In order to read numbers from the Serial monitor, you must do three things:
// 1. Ask
// 2. Wait
// 3. Read

int num_of_blinks;
int i;
int red_pin = 7;
int blink_wait = 400;
String msg = "How many blinks do you want: ";

float pi = 3.14;
float radius;
float area;
// String msg = "What is the radius of your circle? ";
String msg2 = "The area of your circle is: ";

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(red_pin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(msg); // 1. Ask

  while (Serial.available() == 0) {
    // 2. Wait
  }

  num_of_blinks = Serial.parseInt(); // 3. Read
  // radius = Serial.parseFloat();

  while (Serial.available() > 0) {
    Serial.read();
  }

  for (i = 1; i <= num_of_blinks; i++) {
    digitalWrite(red_pin, HIGH);
    delay(blink_wait);
    digitalWrite(red_pin, LOW);
    delay(blink_wait);
  }

  /*
  area = pi * radius * radius;
  Serial.print(msg2);
  Serial.println(area);
  */
}
