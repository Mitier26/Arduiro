int leds[] = {3,5,6,9};

void setup() {
  
  for(int i = 0; i <= 4; i++)
  {
    pinMode(leds[i], OUTPUT);
    analogWrite(leds[i], LOW);
  }
}

void loop() {

  for(int i = 0; i <= 4; i++)
  {
    int r = rand() % 255;
    analogWrite(leds[i], r);
    delay(1000);

    for(r ; r >= 0 ; r-=5)
    {
      analogWrite(leds[i], r);
      delay(50);
    }
    analogWrite(leds[i], LOW);
  }
}
