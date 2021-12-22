#include <LiquidCrystal_I2C.h>
#include <DHT.h>
#define DHTPIN 8
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);
LiquidCrystal_I2C lcd(0x27, 16, 2);
float h = 0;
float t = 0;
void setup() {
  lcd.begin(); //lcd.init() begind 이 작동을 안하면
  lcd.backlight();
  dht.begin();

}

void loop() {
  lcd.home();
  delay(2000);
  h = dht.readHumidity();
  t = dht.readTemperature();

  lcd.clear();
  lcd.print("Humidity: ");
  lcd.print(h);
  lcd.print("%");
  lcd.setCursor(0,1);
  lcd.print("Tempera: ");
  lcd.print(t);
  lcd.print("C");

}
