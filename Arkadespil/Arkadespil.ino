
const int dly = 100;
const int dl = 1; 
const int inputXPin = 10;
const int inputYPin = 9;
const int inputKnapPin = 8;



byte red1;
byte red2;
byte red3;
byte red4;
byte green1;
byte green2;
byte green3;
byte green4;
byte blue1;
byte blue2;
byte blue3;
byte blue4;
byte row1;
byte row2;
byte row3;
byte row4;

const int  dataPin = 12;
const int  clockPin = 13;
const int  latchPin = 11; 
void setup() {
  pinMode(dataPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
  pinMode(latchPin, OUTPUT);
  pinMode(inputXPin, INPUT);
  pinMode(inputYPin, INPUT);
  pinMode(inputKnapPin, INPUT);
  Serial.begin (9600);
  red1 = B11111110;
  green1 = B11111110;
  blue4 = B11111110;
  row1 = B00000001;
}

void loop() {

red1 = red1<<1;
red2 = red2<<1;
red3 = red3<<1;
red4 = red4<<1;
green1 = green1<<1;
green2 = green2<<1;
green3 = green3<<1;
green4 = green4<<1;
blue1 = blue4<<1;
blue2 = blue4<<2;
blue3 = blue4<<3;
blue4 = blue4<<4;
row1 = row1<<1;
row2 = row2<<2;
row3 = row3<<3;
row4 = row4<<4;


    digitalWrite(latchPin,LOW);
    delayMicroseconds(dly);
    shiftOut(dataPin,clockPin,MSBFIRST,red1);
    shiftOut(dataPin,clockPin,MSBFIRST,red2); 
    shiftOut(dataPin,clockPin,MSBFIRST,red3);
    shiftOut(dataPin,clockPin,MSBFIRST,red4);
    shiftOut(dataPin,clockPin,MSBFIRST,green1);
    shiftOut(dataPin,clockPin,MSBFIRST,green2);
    shiftOut(dataPin,clockPin,MSBFIRST,green3);
    shiftOut(dataPin,clockPin,MSBFIRST,green4);
    shiftOut(dataPin,clockPin,MSBFIRST,blue1);
    shiftOut(dataPin,clockPin,MSBFIRST,blue2);
    shiftOut(dataPin,clockPin,MSBFIRST,blue3);
    shiftOut(dataPin,clockPin,MSBFIRST,blue4);
    shiftOut(dataPin,clockPin,MSBFIRST,row1);
    shiftOut(dataPin,clockPin,MSBFIRST,row2);
    shiftOut(dataPin,clockPin,MSBFIRST,row3);
    shiftOut(dataPin,clockPin,MSBFIRST,row4);
    delayMicroseconds(dly);
    digitalWrite(latchPin,HIGH);
    Serial.print("red1: ");
    Serial.println(red1);
}
