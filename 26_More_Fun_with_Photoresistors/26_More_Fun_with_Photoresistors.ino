int lightPin = A0;
int buzzPin = 7;
int lightVal;
int toneVal;
int delayVal;

void setup() {
  // put your setup code here, to run once:
  pinMode(lightPin, INPUT);
  pinMode(buzzPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  lightVal = analogRead(lightPin);
  delayVal = ((9.0/300.0) * lightVal) + 8;
  Serial.println(lightVal);

  digitalWrite(buzzPin, HIGH);
  delay(delayVal);
  digitalWrite(buzzPin, LOW);
  delay(delayVal);
}

// Hook up photoresistor in series with passive buzzer
// Generate a pleasant, continously varying audible tone that gives
// an audible indication of how brights the lights are in the room
// Dark on one end, light on the other, change tone in between dark/light
// Need to do some math

/*
(1,300) --> (10,600)
x1,y1  -->  x2,y2
y2-y1/x2-x1
10-1/600-300
9/300 = m

y-y1 = m(x-x1)
y-1 = 9/300(x-300)
y = 9/300x - 9 + 1
y = 9/300x - 8
*/
