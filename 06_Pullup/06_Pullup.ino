int SW = 4;

void setup() {
  // put your setup code here, to run once:
  pinMode(SW, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(SW) == LOW)
  {
    // 4번 보다 그라운드가 더 낮은 위치에 있다.
    Serial.println("(0) 버튼이 눌림, 그라운드로 전류 흐름");
    delay(500);
  }
  else if(digitalRead(SW) == HIGH)
  {
    Serial.println("(1) 버튼이 안 눌림, 4번으로 전류 흐름");
    delay(500);
  }
}
