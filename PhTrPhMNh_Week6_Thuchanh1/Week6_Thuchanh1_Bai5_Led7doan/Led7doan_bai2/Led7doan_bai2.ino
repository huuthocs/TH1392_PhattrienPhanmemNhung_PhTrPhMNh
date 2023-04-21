int mang[10][7] = {
  {1, 1, 1, 1, 1, 1, 0}, //0
  {0, 1, 1, 0, 0, 0, 0}, //1
  {1, 1, 0, 1, 1, 0, 1}, //2
  {1, 1, 1, 1, 0, 0, 1}, //3
  {0, 1, 1, 0, 0, 1, 1}, //4
  {1, 0, 1, 1, 0, 1, 1}, //5
  {1, 0, 1, 1, 1, 1, 1}, //6
  {1, 1, 1, 0, 0, 0, 0}, //7
  {1, 1, 1, 1, 1, 1, 1}, //8
  {1, 1, 1, 1, 0, 1, 1}, //9
};

void hienThiSo(int so) {
  for (int i = 13; i >= 7; i--)
    digitalWrite(i, mang[so][13 - i]);
}

void setup() {
  for (int i = 1; i <= 13; i++)
    pinMode(i, OUTPUT);
}

void loop() {
  for(int i=0; i<=9; i++){
    hienThiSo(i);
    delay(500);
  }
}