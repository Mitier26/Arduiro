#include <pitches.h>
int led1 = 9;
int led2 = 10;
int button = 7;
int spk = 4;

int melody[] = {31, 33, 35, 37, 39, 41,44, 46, 49, 52, 55, 58, 62, 65, 69, 73, 78, 82, 87, 93, 98,
                104, 110, 117, 123, 131, 139, 147, 156, 165, 175, 185, 196, 208, 220, 233, 247, 262, 
                277, 294, 311, 330, 349, 370, 392};
                
void setup() {
  // put your setup code here, to run once:
 
  Serial.begin(9600);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(button, INPUT_PULLUP);
  pinMode(spk, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  //int v = map(analogRead(A0), 0, 1023, 0, 1000);
  
  int v = analogRead(A0);
  //Serial.println(v);

  /*
  if(v > 200)
  {
    int mel = map(analogRead(A0), 200, 1000, 0, sizeof(melody)/sizeof(int));
    Serial.println(mel);
    tone(spk, melody[mel], 100);
  }
  
  /*
  if( v < 200)
  {
    analogWrite(led1, LOW);
    analogWrite(led2, LOW);
    noTone(spk);
  }
  else if( v <= 500)
  {
    analogWrite(led1, map(v, 200 , 500 , 0 , 255));
    analogWrite(led2, LOW);
  }
  else if( v > 500 && v < 1000)
  {
    analogWrite(led1, map(v, 500, 1000, 0, 255));
    analogWrite(led2, map(v, 500, 1000, 0, 255));
  }
  else
  {
    analogWrite(led1, LOW);
    analogWrite(led2, LOW);
  }

  if(digitalRead(button) == LOW)
  {
    analogWrite(led1, LOW);
    analogWrite(led2, LOW);
  }
  */
}
