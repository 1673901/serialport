int intanalog = A0;
int Sensorvalue = 0;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
Sensorvalue = analogRead(intanalog);
Serial.print(Sensorvalue, DEC);
delay(500);

}
