int SW = 4;

void setup() {
  // put your setup code here, to run once:
  pinMode(4, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(SW) == LOW)
  {
    Serial.println("(0) 기본 상태, 그라운드로 이동 ");
    delay(500);
  }
  else if(digitalRead(SE) == HIGH)
  {
    // 저항이 그라운드 앞에 있기 때문에 4로 이동 한다.
    Serial.println("(1) 눌림 상태, 4로 이동");
    delay(500);
  }
}
