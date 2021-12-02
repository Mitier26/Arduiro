int buttonPin = 8;
int ledPin = 13;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(buttonPin) == LOW)
  {
    digitalWrite(ledPin, HIGH);
    Serial.println("0");
  }
  else if(digitalRead(buttonPin) == HIGH)
  {
    digitalWrite(ledPin, LOW);
    Serial.println("1");
  }
}
