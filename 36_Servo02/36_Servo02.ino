#include <Servo.h>

int servo_pin = 9;
Servo myservo;

void setup() 
{
  Serial.begin(9600);
  Serial.println("Servo Value ? " );

  myservo.attach(servo_pin);
  myservo.write(90);
}

void loop() 
{
  if(Serial.available() > 0)
  {
    int servo_value = Serial.parseInt();

    myservo.write(servo_value);
    Serial.println(servo_value);
  }

}
