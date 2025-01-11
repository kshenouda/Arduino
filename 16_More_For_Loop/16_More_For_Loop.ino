int i;
int delay_time = 500;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  /*
  for (i = 10; i >= 1; i--) {
    Serial.println(i);
    delay(delay_time);
  }
  Serial.println();
  */

  for (i = 1; i <= 10; i++) {
    Serial.println(i);
    delay(delay_time);
  }
  Serial.println();
}
