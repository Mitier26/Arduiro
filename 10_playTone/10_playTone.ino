int melody[] = {262,294,330,349,392,440,494,523};
int melody_School[] = {392,392,440,440,392,392,330,392,392,330,330,294};
int duration[] = {250,250,250,250,250,250,750,250,250,250,250,750};
int spk = 8;

void setup() {
  pinMode(spk , OUTPUT);
  for(int i= 0; i < 12; i++)
  {
    tone(spk, melody_School[i],duration[i]);
    delay(400);
    if(i == 6)
    {
      delay(400);
    }
    noTone(spk);
  }
}

void loop() {
  // put your main code here, to run repeatedly:

}
