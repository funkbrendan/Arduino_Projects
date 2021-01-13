int myPin=A2;
int readVal;
float V2;
int wait = 250;
int gPin=8;
int yPin=7;
int rPin=6;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(myPin, INPUT);
pinMode(gPin, OUTPUT);
pinMode(yPin, OUTPUT);
pinMode(rPin, OUTPUT);
}

void loop() {
  readVal=analogRead(myPin);
  V2=(5./1023.)*readVal;
  Serial.println("Potentiometer Voltage is ");
  Serial.println(V2);
  if (V2<3.0){
    digitalWrite(gPin, HIGH);
    digitalWrite(yPin,LOW);
    }
  if (V2>3.0){
    digitalWrite(gPin, LOW);
    digitalWrite(yPin,HIGH);
  }
  if (V2>4.0){
    digitalWrite(yPin,LOW);
    digitalWrite(rPin, HIGH);
  }
  if(V2<4.0){
    digitalWrite(rPin,LOW);
  }
  delay(wait);
}
