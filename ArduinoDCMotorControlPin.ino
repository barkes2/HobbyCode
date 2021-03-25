int speedPin=5;
int dir1=4;
int dir2=3;
int mSpeed=255;

void setup() {
  // put your setup code here, to run once:
pinMode(speedPin,OUTPUT);
pinMode(dir1,OUTPUT);
pinMode(dir2,OUTPUT);
Serial.begin(96000);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(dir1,HIGH);
digitalWrite(dir2,LOW);
analogWrite(speedPin,mSpeed);
}
