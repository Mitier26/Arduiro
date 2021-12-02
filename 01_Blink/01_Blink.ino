void setup() {
  pinMode(6, OUTPUT);
}

void loop() {
  //digitalWrite(6, HIGH); // 1
  //delay(1000);
  //digitalWrite(6, LOW);  // 0
  //delay(1000);
  for ( int fade = 0; fade <= 100; fade += 2)
  {
    analogWrite(6, fade);
    delay(50);
  }

  for ( int fade = 100; fade >= 0; fade -= 2)
  {
    analogWrite(6, fade);
    delay(50);
  }
  
}
