int pins[] = {2,3,4};
int notes[][20] = { {262, 294, 330}, 
                    {262, 262, 262, 262}, 
                    {330, 330, 330, 330, 330, 330}};
int sp = 8;

void setup() {
  for(int i = 0; i< 3; i++)
  {
    pinMode(pins[i], INPUT);
  }

}

void loop() {
  for(int i = 0 ; i < sizeof(notes) / sizeof(notes[i]); i++)
  {
    if(digitalRead(pins[i]) == HIGH)
    {
      for(int j = 0 ; j < sizeof(notes[i]) / sizeof(int); j++)
      {
        tone(sp, notes[i][j], 250);
        delay(400);
        noTone(sp);
      }
    }
  }

}
