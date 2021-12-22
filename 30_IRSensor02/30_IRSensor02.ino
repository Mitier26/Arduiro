#include <IRremote.h>

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

}

void loop() {
  if(irrecv.decode(&results))
  {
    if(results.value == on1)
    {
      digitalWrite(led1,HIGH);
      Serial.println("LED1 is ON");
    }
    if(results.value == off1)
    {
      digitalWrite(led1,LOW);
      Serial.println("LED1 is OFF");
    }
    
    if(results.value == on2)
    {
      digitalWrite(led2,HIGH);
      Serial.println("LED2 is ON");
    }
    if(results.value == off2)
    {
      digitalWrite(led2,LOW);
      Serial.println("LED2 is OFF");
    }
    
    if(results.value == on3)
    {
      digitalWrite(led3,HIGH);
      Serial.println("LED3 is ON");
    }
    if(results.value == off3)
    {
      digitalWrite(led3,LOW);
      Serial.println("LED3 is OFF");
    }
    
    if(results.value == on4)
    {
      digitalWrite(led4,HIGH);
      Serial.println("LED4 is ON");
    }
    if(results.value == off4)
    {
      digitalWrite(led4,LOW);
      Serial.println("LED4 is OFF");
    }
    irrecv.resume();
  }

}
