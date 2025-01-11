int pin = A3;
int read_value;
float V2 = 0;
int delay_time = 500;

void setup() {
  // put your setup code here, to run once:
  pinMode(pin, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  read_value = analogRead(pin); // reads a scaled value of the voltage which is a value between 0 (0 volts) and 1023 (5 volts) (1024 numbers = 10 bits)
  V2 = (5.0 * read_value) / 1023.0; // converts scaled value of voltage to actual voltage value
  Serial.println(V2); // After R1 (first resistor), analogRead prints 238, which is 1.16 volts ([238 * 5 volts] / 1023)
  delay(delay_time);
}

// ASSIGNMENT: find two different resistors (100, 200, 10K, 20K, etc)
// and repeat this exercise of using two different resistors
// go through circuit analysis, and calculate voltage,
// resistance, and current