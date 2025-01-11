int pot_value;
int pot_pin = A0;
int red_pin = 13;
int delay_time = 100;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(pot_pin, INPUT);
  pinMode(red_pin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  /* 
  i = 1;
  while (i <= 10) {
    Serial.println(i);
    i += 1;
    delay(delay_time);
  }
  Serial.println();
  */

  pot_value = analogRead(pot_pin);
  Serial.println(pot_value);
  delay(delay_time);

  while (pot_value > 1000) {
    digitalWrite(red_pin, HIGH);
    pot_value = analogRead(pot_pin);
    Serial.println(pot_value);
    delay(delay_time);
  }

  digitalWrite(red_pin, LOW);
}
