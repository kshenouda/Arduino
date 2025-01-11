int i = 0;
int delay_time = 750;
int x = 3;
int y = 7;
int z;
String my_string = "j = ";
String message_1 = "A Circle with Radius ";
String message_2 = " has an area of ";
float pi = 3.14;
float r = 2;
float area;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  /*
  Serial.println(my_string + i);
  i=i+1;
  delay(delay_time);
  */
  area = pi * r * r;
  Serial.print(message_1);
  Serial.print(r);
  Serial.print(message_2);
  Serial.println(area);
  delay(delay_time);
  r = r + 0.5;
}
