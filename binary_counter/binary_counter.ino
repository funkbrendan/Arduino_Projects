int pin1 = 9;
int pin2 = 10;
int pin3 = 11;
int pin4 = 12;
int pin5 = 13;
int waiting = 500;



void setup(){
  pinMode(pin1, OUTPUT);
  pinMode(pin2, OUTPUT);
  pinMode(pin3, OUTPUT);
  pinMode(pin4, OUTPUT);
  pinMode(pin5, OUTPUT);
}

//How can I do this in a function? This is way too tedious.
void loop() {
  // put your main code here, to run repeatedly:
  //0
digitalWrite(pin1, LOW);
digitalWrite(pin2, LOW);
digitalWrite(pin3, LOW);
digitalWrite(pin4, LOW);
digitalWrite(pin5, LOW);
delay(waiting);
//1
digitalWrite(pin1, HIGH);
digitalWrite(pin2, LOW);
digitalWrite(pin3, LOW);
digitalWrite(pin4, LOW);
digitalWrite(pin5, LOW);
delay(waiting);

//2
digitalWrite(pin1, LOW);
digitalWrite(pin2, HIGH);
digitalWrite(pin3, LOW);
digitalWrite(pin4, LOW);
digitalWrite(pin5, LOW);
delay(waiting);
//3
digitalWrite(pin1, HIGH);
digitalWrite(pin2, HIGH);
digitalWrite(pin3, LOW);
digitalWrite(pin4, LOW);
digitalWrite(pin5, LOW);
delay(waiting);
//4
digitalWrite(pin1, LOW);
digitalWrite(pin2, LOW);
digitalWrite(pin3, HIGH);
digitalWrite(pin4, LOW);
digitalWrite(pin5, LOW);
delay(waiting);
//5
digitalWrite(pin1, HIGH);
digitalWrite(pin2, LOW);
digitalWrite(pin3, HIGH);
digitalWrite(pin4, LOW);
digitalWrite(pin5, LOW);
delay(waiting);
//6
digitalWrite(pin1, LOW);
digitalWrite(pin2, HIGH);
digitalWrite(pin3, HIGH);
digitalWrite(pin4, LOW);
digitalWrite(pin5, LOW);
delay(waiting);
//7
digitalWrite(pin1, HIGH);
digitalWrite(pin2, HIGH);
digitalWrite(pin3, HIGH);
digitalWrite(pin4, LOW);
digitalWrite(pin5, LOW);
delay(waiting);
//8
digitalWrite(pin1, LOW);
digitalWrite(pin2, LOW);
digitalWrite(pin3, LOW);
digitalWrite(pin4, HIGH);
digitalWrite(pin5, LOW);
delay(waiting);
//9
digitalWrite(pin1, HIGH);
digitalWrite(pin2, LOW);
digitalWrite(pin3, LOW);
digitalWrite(pin4, HIGH);
digitalWrite(pin5, LOW);
delay(waiting);
//10
digitalWrite(pin1, LOW);
digitalWrite(pin2, HIGH);
digitalWrite(pin3, LOW);
digitalWrite(pin4, HIGH);
digitalWrite(pin5, LOW);
delay(waiting);
//11
digitalWrite(pin1, HIGH);
digitalWrite(pin2, HIGH);
digitalWrite(pin3, LOW);
digitalWrite(pin4, HIGH);
digitalWrite(pin5, LOW);
delay(waiting);
//12
digitalWrite(pin1, LOW);
digitalWrite(pin2, LOW);
digitalWrite(pin3, HIGH);
digitalWrite(pin4, HIGH);
digitalWrite(pin5, LOW);
delay(waiting);
//13
digitalWrite(pin1, HIGH);
digitalWrite(pin2, LOW);
digitalWrite(pin3, HIGH);
digitalWrite(pin4, HIGH);
digitalWrite(pin5, LOW);
delay(waiting);
//14
digitalWrite(pin1, LOW);
digitalWrite(pin2, HIGH);
digitalWrite(pin3, HIGH);
digitalWrite(pin4, HIGH);
digitalWrite(pin5, LOW);
delay(waiting);
//15
digitalWrite(pin1, HIGH);
digitalWrite(pin2, HIGH);
digitalWrite(pin3, HIGH);
digitalWrite(pin4, HIGH);
digitalWrite(pin5, LOW);
delay(waiting);
//16
digitalWrite(pin1, LOW);
digitalWrite(pin2, LOW);
digitalWrite(pin3, LOW);
digitalWrite(pin4, LOW);
digitalWrite(pin5, HIGH);
delay(waiting);
//17
digitalWrite(pin1, HIGH);
digitalWrite(pin2, LOW);
digitalWrite(pin3, LOW);
digitalWrite(pin4, LOW);
digitalWrite(pin5, HIGH);
delay(waiting);
//18
digitalWrite(pin1, LOW);
digitalWrite(pin2, HIGH);
digitalWrite(pin3, LOW);
digitalWrite(pin4, LOW);
digitalWrite(pin5, HIGH);
delay(waiting);
//19
digitalWrite(pin1, HIGH);
digitalWrite(pin2, HIGH);
digitalWrite(pin3, LOW);
digitalWrite(pin4, LOW);
digitalWrite(pin5, HIGH);
delay(waiting);
//20
digitalWrite(pin1, LOW);
digitalWrite(pin2, LOW);
digitalWrite(pin3, HIGH);
digitalWrite(pin4, LOW);
digitalWrite(pin5, HIGH);
delay(waiting);
//21
digitalWrite(pin1, HIGH);
digitalWrite(pin2, LOW);
digitalWrite(pin3, HIGH);
digitalWrite(pin4, LOW);
digitalWrite(pin5, HIGH);
delay(waiting);
//22
digitalWrite(pin1, LOW);
digitalWrite(pin2, HIGH);
digitalWrite(pin3, HIGH);
digitalWrite(pin4, LOW);
digitalWrite(pin5, HIGH);
delay(waiting);
//23
digitalWrite(pin1, HIGH);
digitalWrite(pin2, HIGH);
digitalWrite(pin3, HIGH);
digitalWrite(pin4, LOW);
digitalWrite(pin5, HIGH);
delay(waiting);
//24
digitalWrite(pin1, LOW);
digitalWrite(pin2, LOW);
digitalWrite(pin3, LOW);
digitalWrite(pin4, HIGH);
digitalWrite(pin5, HIGH);
delay(waiting);
//25
digitalWrite(pin1, HIGH);
digitalWrite(pin2, LOW);
digitalWrite(pin3, LOW);
digitalWrite(pin4, HIGH);
digitalWrite(pin5, HIGH);
delay(waiting);
//26
digitalWrite(pin1, LOW);
digitalWrite(pin2, HIGH);
digitalWrite(pin3, LOW);
digitalWrite(pin4, HIGH);
digitalWrite(pin5, HIGH);
delay(waiting);
//27
digitalWrite(pin1, HIGH);
digitalWrite(pin2, HIGH);
digitalWrite(pin3, LOW);
digitalWrite(pin4, HIGH);
digitalWrite(pin5, HIGH);
delay(waiting);
//28
digitalWrite(pin1, LOW);
digitalWrite(pin2, LOW);
digitalWrite(pin3, HIGH);
digitalWrite(pin4, HIGH);
digitalWrite(pin5, HIGH);
delay(waiting);
//29
digitalWrite(pin1, HIGH);
digitalWrite(pin2, LOW);
digitalWrite(pin3, HIGH);
digitalWrite(pin4, HIGH);
digitalWrite(pin5, HIGH);
delay(waiting);
//30
digitalWrite(pin1, LOW);
digitalWrite(pin2, HIGH);
digitalWrite(pin3, HIGH);
digitalWrite(pin4, HIGH);
digitalWrite(pin5, HIGH);
delay(waiting);
//31
digitalWrite(pin1, HIGH);
digitalWrite(pin2, HIGH);
digitalWrite(pin3, HIGH);
digitalWrite(pin4, HIGH);
digitalWrite(pin5, HIGH);
delay(waiting);
}
