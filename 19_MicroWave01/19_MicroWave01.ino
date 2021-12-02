#include<pitches.h>

int led1 = 4;
int led2 = 5;
int led3 = 6;
int led4 = 7;
int spk = 8;
int btn = 3;

int echoPin = 13;
int trigPin = 12;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(spk, OUTPUT);
  pinMode(btn, INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:

  
  if(digitalRead(btn) == LOW)
  {
    digitalWrite(trigPin, LOW);
    digitalWrite(echoPin, LOW);
    delayMicroseconds(2);
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);
    unsigned long duration = pulseIn(echoPin, HIGH);
    float distance = ((float)(340 * duration)/ 10000)/2;
    Serial.print(distance);

    if(distance > 50)
    {
      digitalWrite(led1, HIGH);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);
    }
    else if(distance > 30 && distance < 50)
    {
      digitalWrite(led1, LOW);
      digitalWrite(led2, HIGH);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);
    }
    else if(distance > 10 && distance < 30)
    {
      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, HIGH);
      digitalWrite(led4, LOW);
    }
    else if(distance < 10)
    {
      digitalWrite(led1, HIGH);
      digitalWrite(led2, HIGH);
      digitalWrite(led3, HIGH);
      digitalWrite(led4, HIGH);
      tone(spk, NOTE_G4, 250);
      delay(10);
      noTone(spk);
    }
    else if(distance > 80)
    {
      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);
    }


  
  
    Serial.println("cm");
    delay(500);
  }// if btn
  else
  {
      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);
  }
  

}
