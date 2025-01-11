int red_pin = 9;
int off = 0;
int low = 25;
int medium = 75;
int high = 150;
int wait = 1000;

void setup() {
  // put your setup code here, to run once:
  pinMode(red_pin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  // digitalWrite(red_pin, HIGH);
  analogWrite(red_pin, off); // 0 (0 volts) to 255 (5 volts)
  delay(wait);

  analogWrite(red_pin, low);
  delay(wait);

  analogWrite(red_pin, medium);
  delay(wait);

  analogWrite(red_pin, high);
  delay(wait);
}
