int ENPin1 = 3;
int IN1Pin = 9;
int IN2Pin = 4;

int Enable = 5;
int PWM2 = 10;
int DIR = 6;

void setup() 
{
  pinMode(ENPin1, OUTPUT);
  digitalWrite(ENPin1, LOW);
  pinMode(IN1Pin, OUTPUT);
  pinMode(ENPin1, OUTPUT);
  pinMode(Enable, LOW);
  pinMode(PWM2, OUTPUT);
  pinMode(DIR, OUTPUT);

}

void loop() 
{
  digitalWrite(ENPin1, HIGH);
  digitalWrite(IN2Pin, HIGH);
  digitalWrite(IN1Pin, LOW);
  delay(4000);
  digitalWrite(IN1Pin, HIGH);
  delay(200);
  digitalWrite(ENPin1, LOW);
  digitalWrite(IN1Pin, HIGH);
  delay(4000);
  digitalWrite(IN1Pin, LOW);
  delay(200);
  digitalWrite(ENPin1, LOW);

}
