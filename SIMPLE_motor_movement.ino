     // left sensor
int m11=6;            // connect to pin 2 of L293d  right motor
int m12=7;            // connect to pin 7 of L293d
int m21=10;            // connect to pin 10 of L293d  left motor
int m22=9;            // connect to pin 14 of L293d
void setup() {
  // put your setup code here, to run once:
//pinMode(sensor1, INPUT);
//pinMode(sensor2, INPUT);

pinMode(m11, OUTPUT);
pinMode(m12, OUTPUT);
pinMode(m21, OUTPUT);
pinMode(m22, OUTPUT);
}

void loop() {
  // go straight

{
  digitalWrite(m11, HIGH);
  digitalWrite(m12, LOW);
    digitalWrite(m21, HIGH);
  digitalWrite(m22, LOW);
  delay(1000);
}
  // have left turn

{
  digitalWrite(m11, HIGH);
  digitalWrite(m12, LOW);
    digitalWrite(m21, HIGH);
  digitalWrite(m22, HIGH);
  delay(1000);
}


  // have right turn

{
  digitalWrite(m11, LOW);
  digitalWrite(m12, LOW);
    digitalWrite(m21, HIGH);
  digitalWrite(m22, LOW);
  delay(1000);
}


//  stop


{
  digitalWrite(m11, LOW);
  digitalWrite(m12, LOW);
    digitalWrite(m21, LOW);
  digitalWrite(m22, LOW);
  delay(1000);
}


}
