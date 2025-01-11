// Create a red, green, and blue circuit
// Red: blink 5 times fast
// Green: blink 10 times slow
// Blue: blink 15 times real slow

int red_LED = 2;
int red_blink = 100;

int green_LED = 4;
int green_blink = 500;

int blue_LED = 6;
int blue_blink = 700;

void setup() {
  // put your setup code here, to run once:
  pinMode(red_LED, OUTPUT);
  pinMode(green_LED, OUTPUT);
  pinMode(blue_LED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(red_LED, HIGH);
  delay(red_blink);
  digitalWrite(green_LED, HIGH);
  delay(green_blink);
  digitalWrite(blue_LED, HIGH);
  delay(blue_blink);
  digitalWrite(red_LED, LOW);
  delay(red_blink);
  digitalWrite(green_LED, LOW);
  delay(green_blink);
  digitalWrite(blue_LED, LOW);
  delay(blue_blink);

  /*
  digitalWrite(green_LED, HIGH);
  delay(green_blink);
  digitalWrite(green_LED, LOW);
  delay(green_blink);

  digitalWrite(blue_LED, HIGH);
  delay(blue_blink);
  digitalWrite(blue_LED, LOW);
  delay(blue_blink);
  */
}
