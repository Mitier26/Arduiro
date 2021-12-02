#include "pinnumber.h"

int row[] = {D13, D8, D17, D10, D5 ,D16, D4, D14};
int col[] = {D9, D3, D2, D12, D15, D11, D7, D6};

int pattern1[] = {D9, D2, D15, D11, D7};
int pattern2[] = {D9, D2, D15};
int pattern3[] = {D9, D3, D2, D15, D11, D7};
int pattern4[] = {D9, D2, D15};
int pattern5[] = {D15, D11, D7};
int pattern6[] = {D9,D2, D11, D7, D6};
int pattern7[] = {D9,D2, D11, D6};
int pattern8[] = {D9, D3,D2,D12,D11, D7, D6};

void setup() 
{
   for(int i = 0 ; i < 8; i++)
  {
    pinMode(row[i], OUTPUT);
    pinMode(col[i], OUTPUT);
  }
}

void clear()
{
  for(int i = 0 ; i < 8 ; i++)
  {
    digitalWrite(row[i], LOW);
    digitalWrite(col[i], HIGH);
  }
}

void loop() 
{
  clear();
  digitalWrite(row[0], HIGH);
  for(int i = 0; i< sizeof(pattern1) / sizeof(int); i++)
  {
    digitalWrite(pattern1[i],LOW);
  }
  delay(2);

  clear();
  digitalWrite(row[1], HIGH);
  for(int i = 0; i< sizeof(pattern2) / sizeof(int); i++)
  {
    digitalWrite(pattern2[i],LOW);
  }
  delay(2);

  clear();
  digitalWrite(row[2], HIGH);
  for(int i = 0; i< sizeof(pattern3) / sizeof(int); i++)
  {
    digitalWrite(pattern3[i],LOW);
  }
  delay(2);

  clear();
  digitalWrite(row[3], HIGH);
  for(int i = 0; i< sizeof(pattern4) / sizeof(int); i++)
  {
    digitalWrite(pattern4[i],LOW);
  }
  delay(2);

  clear();
  digitalWrite(row[4], HIGH);
  for(int i = 0; i< sizeof(pattern5) / sizeof(int); i++)
  {
    digitalWrite(pattern5[i],LOW);
  }
  delay(2);

  clear();
  digitalWrite(row[5], HIGH);
  for(int i = 0; i< sizeof(pattern6) / sizeof(int); i++)
  {
    digitalWrite(pattern6[i],LOW);
  }
  delay(2);

  clear();
  digitalWrite(row[6], HIGH);
  for(int i = 0; i< sizeof(pattern7) / sizeof(int); i++)
  {
    digitalWrite(pattern7[i],LOW);
  }
  delay(2);

  clear();
  digitalWrite(row[7], HIGH);
  for(int i = 0; i< sizeof(pattern8) / sizeof(int); i++)
  {
    digitalWrite(pattern8[i],LOW);
  }
  delay(2);

}
