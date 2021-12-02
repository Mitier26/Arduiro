void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(9, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  int  sensorValue = analogRead(A0)/4;
  analogWrite(9, sensorValue);
  Serial.println(sensorValue);
}
