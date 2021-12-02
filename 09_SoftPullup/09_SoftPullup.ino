int buttonPinB = 8;
int buttonPinG = 9;
int buttonPinR = 10;
int buttonPinOFF = 11;
int ledPinR = 5;
int ledPinG = 4;
int ledPinB = 3;

bool rOn = false;
bool gOn = false;
bool bOn = false;

void setup() {
  // put your setup code here, to run once:
  
  // 풀업 저항이 있는 것 처럼 세팅해 준다.
  pinMode(buttonPinR, INPUT_PULLUP);
  pinMode(buttonPinG, INPUT_PULLUP);
  pinMode(buttonPinB, INPUT_PULLUP);
  pinMode(buttonPinOFF, INPUT_PULLUP);
  
  pinMode(ledPinR, OUTPUT);
  pinMode(ledPinG, OUTPUT);
  pinMode(ledPinB, OUTPUT);
  
  digitalWrite(ledPinR, HIGH);
  digitalWrite(ledPinG, HIGH);
  digitalWrite(ledPinB, HIGH);

  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  if(digitalRead(buttonPinR) == LOW)
  {
    if(!rOn)
    {
      rOn = true;
       digitalWrite(ledPinR,LOW);
       delay(300);
    }
    else
    {
      rOn = false;
      digitalWrite(ledPinR,HIGH);
      delay(300);
    }
    Serial.println(rOn);
  }
  else if(digitalRead(buttonPinG) == LOW)
  {
    digitalWrite(ledPinG,LOW);
  }
  else if(digitalRead(buttonPinB) == LOW)
  {
    digitalWrite(ledPinB,LOW);
  }
  else if(digitalRead(buttonPinOFF) == LOW)
  {
    digitalWrite(ledPinR,HIGH);
    digitalWrite(ledPinG,HIGH);
    digitalWrite(ledPinB,HIGH);
  }

}
