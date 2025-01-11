int red_pin = 4;
int yellow_pin = 7;
int green_pin = 10;
int pot_pin = A0;
int read_value;
float V2;
int slow_delay = 500;
int fast_delay = 5;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(pot_pin, INPUT);
  pinMode(red_pin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  read_value = analogRead(pot_pin);
  V2 = (read_value * 5.0)/1023;
  Serial.print("Potentiometer Voltage: ");
  Serial.println(V2);
  delay(slow_delay);
  
  /*
  if (V2 > 4.0) {
    digitalWrite(red_pin, HIGH);
  } else {
    digitalWrite(red_pin, LOW);
  }
  */
  
  /*
  if (V2 >= 2.0 && V2 <= 3.0) {
    digitalWrite(red_pin, HIGH);
  } else {
    digitalWrite(red_pin, LOW);
  }
  */

  if (V2 < 3.0) {
    digitalWrite(red_pin, LOW);
    digitalWrite(yellow_pin, LOW);
    digitalWrite(green_pin, HIGH);
  } 
  if (V2 >= 3.0 && V2 <= 4.0) {
    digitalWrite(red_pin, LOW);
    digitalWrite(yellow_pin, HIGH);
    digitalWrite(green_pin, LOW);
  } 
  if (V2 > 4.0) {
    digitalWrite(red_pin, HIGH);
    digitalWrite(yellow_pin, LOW);
    digitalWrite(green_pin, LOW);
  }
  
}


// Three LEDs (three pin modes and three resistors)
// Hook up green LED, yellow LED, and red LED
// If voltage < 3V, turn green LED on
// If voltage between 3 and 4V, turn yellow LED on
// If voltage > 4V, turn red LED on
