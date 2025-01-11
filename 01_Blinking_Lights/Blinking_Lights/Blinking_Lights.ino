void setup() {
  // put your setup code here, to run once:
  // pinMode (what pin are we working with, is it INPUT or OUTPUT)
  pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  // digitalWrite: turns LED on/off 
  // digitalWrite (what pin are we working with, LOW turns LED off and HIGH turns LED on)
  digitalWrite(13, HIGH);
  delay(1000); // delays by milliseconds 
  digitalWrite(13, LOW);
  delay(1000);
}