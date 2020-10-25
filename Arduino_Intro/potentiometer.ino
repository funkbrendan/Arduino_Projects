int pin1 = A5;
int readVal;
float r2;
int wait = 500;
void setup() {
  // put your setup code here, to run once:
pinMode(pin1, INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
readVal = analogRead(pin1);
r2 = (5./1023.);
Serial.println(readVal*r2);
delay(wait);
}
