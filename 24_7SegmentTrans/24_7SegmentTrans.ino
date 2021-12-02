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
int select = 0;
void setup() {
  for(int i = 2; i < 10; i++)
  {
    pinMode(i, OUTPUT);
  }
  // LED
  pinMode(10, OUTPUT);
  // SOUND
  pinMode(13, OUTPUT);
  
  Serial.begin(9600);
}

void loop() {
  int sensorValue = map(analogRead(A0), 0, 1023, 0, 10);

  if(sensorValue >= 9)
  {
    digitalWrite(10, HIGH);
    tone(13, 262, 250);
  }
  else
  {
    digitalWrite(10, LOW);
    noTone(13);
  }
  Serial.println(sensorValue);
  displayDigit(sensorValue);
}

void displayDigit(int num)
{
  int pin = 2;
  for(int i = 0; i < 8; i++)
  {
    digitalWrite(pin + i , digits2[num][i]);
  }
}
