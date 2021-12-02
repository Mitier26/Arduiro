#include <pitches.h>
int spk = 8;
bool one = true;
int melody[] = {NOTE_G4, NOTE_G4, NOTE_A4, NOTE_A4, NOTE_G4, NOTE_G4, NOTE_E4, 0,
                NOTE_G4, NOTE_G4, NOTE_E4, NOTE_E4, NOTE_D4, 0,
                NOTE_G4, NOTE_G4, NOTE_A4, NOTE_A4, NOTE_G4, NOTE_G4, NOTE_E4, 0,
                NOTE_G4, NOTE_E4, NOTE_D4, NOTE_E4, NOTE_C4, 0};

int melody1[] = {
NOTE_A3, NOTE_B3, NOTE_C4, NOTE_C4,NOTE_B3,NOTE_A3, NOTE_B3, NOTE_G3, NOTE_G3, NOTE_B3, NOTE_A3, NOTE_D3, NOTE_FS3, NOTE_A3, NOTE_G3,
NOTE_G3, NOTE_G3, NOTE_G3, NOTE_D3, NOTE_B3, NOTE_B3, NOTE_B3, NOTE_G3, NOTE_G3, NOTE_B3, NOTE_D4, NOTE_D4, NOTE_C4, NOTE_B3, NOTE_A3,
NOTE_A3, NOTE_B3, NOTE_C4, NOTE_C4,NOTE_B3,NOTE_A3, NOTE_B3, NOTE_G3, NOTE_G3, NOTE_B3, NOTE_A3, NOTE_D3, NOTE_FS3, NOTE_A3, NOTE_G3,
NOTE_G3, NOTE_G3, NOTE_G3, NOTE_D3, NOTE_B3, NOTE_B3, NOTE_B3, NOTE_G3, NOTE_G3, NOTE_B3, NOTE_D4, NOTE_D4, NOTE_C4, NOTE_B3, NOTE_A3
};

int duration[] = {
3, 4, 2, 2, 3, 4, 2, 2, 4, 4, 1, 4, 4, 4, 1,
3, 4, 2, 2, 3, 4, 2, 2, 4, 4, 1, 4, 3, 4, 1,
3, 4, 2, 2, 3, 4, 2, 2, 4, 4, 1, 4, 4, 4, 1,
3, 4, 2, 2, 3, 4, 2, 2, 4, 4, 1, 4, 3, 4, 1
};
void setup() {
  pinMode(spk, OUTPUT);
}

void loop() {
  if(one)
  {
    for( int i = 0; i < sizeof(melody) / sizeof(int); i++)
    {
      int nodeDuration = 1000 / duration[i];
      tone(spk, melody[i], 250);
      int pauseNode = nodeDuration * 1.30;
      delay(pauseNode);
      noTone(spk);
      one = false;
    }
  }
}
