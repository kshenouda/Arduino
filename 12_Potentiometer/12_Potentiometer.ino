int volt_pin = A0;
int read_value;
float V2;
int wait = 500;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  read_value = analogRead(volt_pin);
  V2 = (read_value * 5.0)/1023.0;
  Serial.print("Potentiometer voltage: ");
  Serial.println(V2);
  delay(wait);
}
