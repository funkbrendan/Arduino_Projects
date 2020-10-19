/*Circuit analysis based on Paul McWhorter Arduino series.
Played around with voltages and am off by .3 on second resistor.
Not sure if this is normal or if initial voltage is off due to my
lack of voltmeter.
*/

int readPin=A3;
int readVal;
float V2=0;
int wait=500;

void setup() {
  // put your setup code here, to run once:
  pinMode(readPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  readVal=analogRead(readPin);
  V2=(3.3/1023.)*readVal;
  Serial.println(V2);
  delay(wait);
}
