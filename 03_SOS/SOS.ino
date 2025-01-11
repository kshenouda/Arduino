int red_LED = 7;
int s_high = 100;
int s_low = 100;
int o_high = 500;
int o_low = 100;
int delay_ms = 300;
int long_delay = 1000;

void setup() {
  // put your setup code here, to run once:
  pinMode(red_LED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  // S
  digitalWrite(red_LED, HIGH);
  delay(s_high);
  digitalWrite(red_LED, LOW);
  delay(s_low);
  digitalWrite(red_LED, HIGH);
  delay(s_high);
  digitalWrite(red_LED, LOW);
  delay(s_low);
  digitalWrite(red_LED, HIGH);
  delay(s_high);
  digitalWrite(red_LED, LOW);
  delay(delay_ms);

  // O
  digitalWrite(red_LED, HIGH);
  delay(o_high);
  digitalWrite(red_LED, LOW);
  delay(o_low);
  digitalWrite(red_LED, HIGH);
  delay(o_high);
  digitalWrite(red_LED, LOW);
  delay(o_low);
  digitalWrite(red_LED, HIGH);
  delay(o_high);
  digitalWrite(red_LED, LOW);
  delay(delay_ms);

  // S
  digitalWrite(red_LED, HIGH);
  delay(s_high);
  digitalWrite(red_LED, LOW);
  delay(s_low);
  digitalWrite(red_LED, HIGH);
  delay(s_high);
  digitalWrite(red_LED, LOW);
  delay(s_low);
  digitalWrite(red_LED, HIGH);
  delay(s_high);
  digitalWrite(red_LED, LOW);
  delay(delay_ms);

  // Long delay
  delay(long_delay);
}
