int digit = 0;
byte digits2[10][8] =
{
  {0,0,0,0,0,0,1,0},
  {1,0,0,1,1,1,1,1},
  {0,0,1,0,0,1,0,0},
  {0,0,0,0,1,1,0,1},
  {1,0,0,1,1,0,0,0},
  {0,1,0,0,1,0,0,1},
  {1,1,0,0,0,0,0,0},
  {0,0,0,1,1,0,1,1},
  {0,0,0,0,0,0,0,0},
  {0,0,0,1,1,0,0,1}
};

void setup() {
  pinMode(11, INPUT_PULLUP);
  pinMode(12, INPUT_PULLUP);
  for(int i = 2; i < 10; i++)
  {
    pinMode(i, OUTPUT);
  }
  //digitalWrite(9, HIGH);
  Serial.begin(9600);
  Serial.println(" Setup " );

}

void loop() {
  if(digitalRead(11) == LOW)
  {
    digit++;
    if(digit > 9) digit = 0;
  }

  if(digitalRead(12) == LOW)
  {
    digit--;
    if(digit < 0) digit = 9;
  }
  
  displayDigit(digit);
  delay(200);
}

void displayDigit(int num)
{
  int pin = 2;
  for(int i = 0 ; i < 8; i++)
  {
    digitalWrite(pin + i, digits2[num][i]);
  }
}
