int redPin = 10;
int greenPin = 9;
int bluePin = 8;

String LED;
String msg = "What color do you want? ";

void setup() {
  // put your setup code here, to run once:
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  Serial.println(msg);
  while (Serial.available() == 0) {

  }
  LED = Serial.readString();
  LED.trim();

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
  } else if (LED == "yellow" || LED == "Yellow" || LED == "YELLOW") {
    analogWrite(redPin, 255);
    analogWrite(greenPin, 100);
    analogWrite(bluePin, 0);
  } else if (LED == "magenta" || LED == "Magenta" || LED == "MAGENTA") {
    analogWrite(redPin, 255);
    analogWrite(greenPin, 0);
    analogWrite(bluePin, 200);
  } else if (LED == "cyan" || LED == "Cyan" || LED == "CYAN") {
    digitalWrite(redPin, LOW);
    digitalWrite(greenPin, HIGH);
    digitalWrite(bluePin, HIGH);
  } else if (LED == "orange" || LED == "Orange" || LED == "ORANGE") {
    digitalWrite(redPin, HIGH);
    analogWrite(greenPin, 112.5);
    digitalWrite(bluePin, LOW);
  } else if (LED == "white" || LED == "White" || LED == "WHITE") {
    digitalWrite(redPin, HIGH);
    digitalWrite(greenPin, HIGH);
    digitalWrite(bluePin, HIGH);    
  } else if (LED == "custom") {
    analogWrite(redPin, 80);
    analogWrite(greenPin, 69);
    analogWrite(bluePin, 138);
  } 

}
