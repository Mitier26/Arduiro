#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);
int a = 0;
int b = 0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  lcd.begin();
  lcd.backlight();
  pinMode(7, OUTPUT);
  pinMode(6, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
    int light = analogRead(A0);

    digitalWrite(7, HIGH);
    delayMicroseconds(10);
    digitalWrite(7,LOW);
    long duration = pulseIn(6, HIGH);
    if(duration == 0)
    {
      return;
    }
    long distance = duration /58.2;

    if(a > 16) a = 0;
    if(b > 16) b = 0;
    
    lcd.home();
    delay(1000);
    lcd.clear();
    lcd.setCursor(a,0);
    lcd.print(light );
    lcd.setCursor(b,1);
    lcd.print(distance);
    a++;
    b++;

}
