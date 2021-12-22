#include <IRremote.h>

int irPin = 11;

int led1 = 2;
int led2 = 3;
int led3 = 4; 
int led4 = 5;

long on1 = 0xE0E020DF;
long off1 = 0xE0E0609F;
long on2 = 0xE0E010EF;
long off2 = 0xE0E050AF;
long on3 = 0xE0E030CF;
long off3 = 0xE0E0708F;
long on4 = 0xE0E0C43B;
long off4 = 0xE0E0C837;

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
