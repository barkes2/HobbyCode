// cannot just plug dc motors into the arduino, because motor might draw more current than 
//arduino can put out or motor can act as inductor that may cause a voltage spike 
//arduino->transistor->motor->diode reversed bias to solve induction problem
//motor controller chip can replace this method
//all three need to share common GROUND: motor, motor controller chip, and power supply
int motorPin = 3

void setup() {
  pinMode(motorPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(motorPIN, 255);
}
