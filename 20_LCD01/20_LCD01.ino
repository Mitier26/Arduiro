#include <LiquidCrystal.h>

LiquidCrystal lcd(4,5,8,9,10,11);
int a = 0;
int b = 8;
String s1 = "Hello";
String s2 = "World";

void setup() {
  // put your setup code here, to run once:
  // 한 줄당 들어가는 글자개수, 줄의 개수 세팅
  lcd.begin(16, 2);
  pinMode(7, OUTPUT);
  pinMode(6,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(a > 16) a = 0;
  if(b > 16) b = 0;

  int  light = analogRead(A0);

  digitalWrite(7,HIGH);
  delayMicroseconds(10);
  digitalWrite(7,LOW);
  long duration = pulseIn(6,HIGH);
  if(duration == 0)
  {
    return;
  }
  long distance = duration / 58.2;
  
  lcd.clear();
  lcd.setCursor(a,0);
  lcd.print(s1 + distance);
  lcd.setCursor(b,1);
  lcd.print(s2 + light);
  delay(1000);
  a++;
  b++;
}
