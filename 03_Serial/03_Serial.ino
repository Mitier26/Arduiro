void setup() {

  Serial.begin(9600);
  
  byte data = 65;
  Serial.println();
  Serial.print("With print : ");
  Serial.print(data);

  Serial.println();
  Serial.print("With write : ");
  Serial.write(data);

  

}

void loop() {
  // put your main code here, to run repeatedly:

}
