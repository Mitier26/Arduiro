void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(9, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  int sensorValue = map(analogRead(A0), 0, 1023, 0 , 255);
  
  Serial.println(sensorValue);
  analogWrite(9, sensorValue);
}
