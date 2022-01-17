#include <Servo.h>

int echo_pin = 13;
int trig_pin = 12;
int servo_pin = 9;

Servo servo;
int angle = 0;

int count =0;

void setup() 
{
  b =true;
  Serial.begin(9600);
  pinMode(trig_pin, OUTPUT);
  pinMode(echo_pin, INPUT);
  servo.attach(servo_pin);
}

void loop() 
{
  digitalWrite(trig_pin, LOW);
  digitalWrite(echo_pin, LOW);
  delayMicroseconds(2);
  digitalWrite(trig_pin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig_pin, LOW);
  unsigned long duration = pulseIn(echo_pin, HIGH);
  float distance = ((float)(340 * duration)/ 10000)/2;

  Serial.print(distance);
  Serial.println("cm");

  Serial.println(angle);
  if(angle >= 0 && angle < 120)
  {
    if(distance < 10)
    {
      Serial.println("Enter");
      angle+=20; 
    }
    else if( distance > 20)
    {
      angle = 0; 
    }
  }
  else if(angle >= 120)
  {
    angle = 0;
    Serial.println("갈곳이 없음");
  }
  servo.write(angle);
  
  delay(2000);
}

void ResetAngle()
{
  angle = 0;
}
