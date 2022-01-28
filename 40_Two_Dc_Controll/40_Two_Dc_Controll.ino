int IN1Pin = 9;
int IN2Pin = 4;
int ENPin1 = 3;
int IN3Pin = 10;
int IN4Pin = 6;
int ENPin2 = 5;

void setup() 
{
  pinMode(IN1Pin, OUTPUT);
  pinMode(IN2Pin, OUTPUT);
  analogWrite(ENPin1, 255);
  pinMode(IN3Pin, OUTPUT);
  pinMode(IN4Pin, OUTPUT);
  analogWrite(ENPin2, 255);
  Serial.begin(9600);
}

void loop() 
{
  Serial.write("go\n");
  //analogWrite(ENPin1, 255);
  //analogWrite(ENPin2, 255);
  digitalWrite(IN1Pin, HIGH);
  digitalWrite(IN2Pin, LOW);
  digitalWrite(IN3Pin, HIGH);
  digitalWrite(IN4Pin, LOW);
  delay(2000);

  Serial.write("back\n");
  digitalWrite(IN1Pin, LOW);
  digitalWrite(IN2Pin, HIGH);
  digitalWrite(IN3Pin, LOW);
  digitalWrite(IN4Pin, HIGH);
  delay(2000);

  Serial.write("stop\n");
  //analogWrite(ENPin1, 0);
  //analogWrite(ENPin2, 0);
  digitalWrite(IN1Pin, LOW);
  digitalWrite(IN2Pin, LOW);
  digitalWrite(IN3Pin, LOW);
  digitalWrite(IN4Pin,/ LOW);
  delay(2000);
}
