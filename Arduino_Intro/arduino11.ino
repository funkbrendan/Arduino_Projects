int j=1;
int wait = 500;
int x = 3;
int y = 4;
int z;
String myString="z = ";
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.print(myString);
Serial.println(z);
z+=x+y+z;
delay(wait);
}
