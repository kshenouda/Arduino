int redPin = 2;
int greenPin = 6;
int bluePin = 10;

String LED;
String msg = "What color would you like to light? ";
// String msg2 = "Hello ";
// String msg3 = ", Welcome to Arduino";

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  Serial.println(msg);

  while(Serial.available() == 0) {

  }
  
  LED = Serial.readString();
  LED.trim(); // Remove any extra whitespace or newline characters
  
  if (LED == "red" || LED == "Red" || LED == "RED") {
    digitalWrite(redPin, HIGH);
    digitalWrite(greenPin, LOW);
    digitalWrite(bluePin, LOW);
  } else if (LED == "green" || LED == "Green" || LED == "GREEN") {
    digitalWrite(redPin, LOW);
    digitalWrite(greenPin, HIGH);
    digitalWrite(bluePin, LOW);  
  } else if (LED == "blue" || LED == "Blue" || LED == "BLUE") {
    digitalWrite(redPin, LOW);
    digitalWrite(greenPin, LOW);
    digitalWrite(bluePin, HIGH);  
  } else if (LED == "all" || LED == "All" || LED == "ALL") {
    digitalWrite(redPin, HIGH);
    digitalWrite(greenPin, HIGH);
    digitalWrite(bluePin, HIGH);  
  } else {
    digitalWrite(redPin, LOW);
    digitalWrite(greenPin, LOW);
    digitalWrite(bluePin, LOW);  
    Serial.println("Please enter a valid option (red/green/blue/all)");
  }

  /*
  // while(Serial.available() > 0) {
  //   name = Serial.readString();
  // }
  
  Serial.print(msg2);
  Serial.print(name);
  Serial.println(msg3);
  */
}

