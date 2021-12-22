#include <IRremote.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

int irPin = 11;

int led1 = 2;
int led2 = 3;
int led3 = 4; 
int led4 = 5;

long on1 = 0xFF42BD;
long off1 = 0xFF52AD;
long on2 = 0xFF10EF;
long off2 = 0xFF5AA5;
long on3 = 0xFF30CF;
long off3 = 0xFF7A85;
long on4 = 0xFF6897;
long off4 = 0xFFB04F;

IRrecv irrecv(irPin);
decode_results results;

void setup() {
  Serial.begin(9600);
  irrecv.enableIRIn();
  irrecv.blink13(true);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  lcd.begin();
  lcd.backlight();
}

void loop() {

  lcd.home();
  delay(2000);
  lcd.clear();
  
   if(irrecv.decode(&results))
  {
    if(results.value != 0xFFFFFFFF)
    {
      Serial.print("Received Code is ");
      Serial.println(results.value,HEX);
      lcd.print("hello");
    }
    irrecv.resume();
  }

}
