int pot_pin = A0;
int red_pin = 6;
int pot_value;
int LED_value;
float V2;
int slow_delay = 500;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(pot_pin, INPUT);
  pinMode(red_pin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  pot_value = analogRead(pot_pin);
  LED_value = (255.0 / 1023.0) * pot_value;
  analogWrite(red_pin, LED_value);
  V2 = (pot_value * 5.0)/1023;
  Serial.print("Potentiometer Voltage: ");
  Serial.println(V2);
  delay(slow_delay);

}
