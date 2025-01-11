int red_pin = 6;
int yellow_pin = 9;
int short_wait = 250;
int long_wait = 500;

int i;
int yellow_blink = 3;
int red_blink = 5;

void setup() {
  // put your setup code here, to run once:
  pinMode(red_pin, OUTPUT);
  pinMode(yellow_pin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (i = 0; i < yellow_blink; i++) {
    digitalWrite(yellow_pin, HIGH);
    delay(short_wait);
    digitalWrite(yellow_pin, LOW);
    delay(short_wait);
  }

  for (i = 0; i < red_blink; i++) {
    digitalWrite(red_pin, HIGH);
    delay(short_wait);
    digitalWrite(red_pin, LOW);
    delay(short_wait);
  }
}
