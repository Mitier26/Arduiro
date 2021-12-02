byte petterns[] = {0xFC,0x60, 0xDA, 0xF2, 0x66, 0xB6, 0xBE,0xE4, 0xFE, 0xE6};

int digit_select_pin[] = {10, 11, 12,13};
int segment_pin[] = {2,3,4,5,6,7,8,9};
int SEGMENT_DELAY = 5;

void setup() {
  for(int i = 0; i < 4; i++)
  {
    pinMode(digit_select_pin[i], OUTPUT);
  }

  for(int i = 0 ; i < 8; i++)
  {
    pinMode(segment_pin[i], OUTPUT);
  }

}

void show_digit(int pos, int number)
{
  for(int i = 0; i < 4; i++)
  {
    if(i + 1 == pos) digitalWrite(digit_select_pin[i], LOW);
    else digitalWrite(digit_select_pin[i], HIGH);
  }
  for(int i =0 ; i < 8 ; i++)
  {
    boolean on_off = bitRead(petterns[number], 7 - i);
    digitalWrite(segment_pin[i], on_off);
  }
}

 void show_4_digit(int inputNumber)
  {
    int number = inputNumber;
    number = number % 10000;
    int thousands = number / 1000;
    number = number % 1000;
    int hundreads = number / 100;
    number = number % 100;
    int tens = number / 10;
    int ones = number % 10;

    if(inputNumber > 999) show_digit(1, thousands);
    delay(SEGMENT_DELAY);
    if(inputNumber > 99) show_digit(2, hundreads);
    delay(SEGMENT_DELAY);
    if(inputNumber > 9) show_digit(3, tens);
    delay(SEGMENT_DELAY);
    show_digit(4, ones);
    delay(SEGMENT_DELAY);
  }

void loop() {

  int reading = analogRead(A0);
  show_4_digit(map(reading, 0, 1024, 0 , 9999));

}
