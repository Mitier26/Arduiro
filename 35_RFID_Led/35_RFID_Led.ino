#include <SPI.h>
#include <MFRC522.h>
#define RET_PIN 9
#define SS_PIN 10

#define LED1 7
#define LED2 6
#define SPK 4

int nuidPICC1[4] = {103, 189, 132, 200};
int nuidPICC2[4] = {69, 245, 13, 42};

int melody[] = {262, 294, 330};

bool play = false;

MFRC522 mfrc(SS_PIN, RET_PIN);

void setup() {
  Serial.begin(9600);
  SPI.begin();

  mfrc.PCD_Init();
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(SPK, OUTPUT);
}

void loop() {
  if(!mfrc.PICC_IsNewCardPresent() || !mfrc.PICC_ReadCardSerial())
  {
    delay(500);
    return;
  }

  Serial.print("Card UID : ");
  for (byte i = 0; i < 4 ; i++)
  {
    Serial.print(mfrc.uid.uidByte[i]);
    if(nuidPICC1[i] == mfrc.uid.uidByte[i])
    {
      digitalWrite(LED1, HIGH);
      play = true;
    }
    else if(nuidPICC2[i] == mfrc.uid.uidByte[i])
    {
      digitalWrite(LED2, HIGH);
    }
    else
    {
      delay(500);
      return;
    }
  }
  Serial.print("OK");
  Serial.println();

  if(play)
  {
      Serial.print("테스트");
     for(int i= 0; i< 3; i++)
      {
        tone(SPK, melody[i], 250);
        delay(300);
      }
      noTone(SPK);
      play =false;
  }
  delay(500);
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  Serial.print("ok......");
}
