int EnablePin1 = 3;
int IN1Pin = 9;
int IN2Pin = 4;

void setup() 
{
  pinMode(EnablePin1, OUTPUT);
  digitalWrite(EnablePin1,LOW);
  pinMode(IN1Pin, OUTPUT);
  pinMode(IN2Pin, OUTPUT);  

}

void loop() 
{
  digitalWrite(EnablePin1, HIGH);
  digitalWrite(IN2Pin, HIGH);
  digitalWrite(IN1Pin, LOW);
  delay(1000);
  digitalWrite(IN1Pin, HIGH);
  delay(200);
  digitalWrite(EnablePin1, LOW);

}
