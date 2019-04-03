#include <LiquidCrystal.h>

const int dly = 100;
const int dl = 1; 
const int inputXPin = 4;
const int inputYPin = 3;
const int inputKnapPin = 2;
const int toggelPin = 10;
const int APin = 9;
const int BPin = 8;
const int CPin = 7;
const int DPin = 6;
const int InhibitPin = 5;

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
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
void setup() {
  pinMode(dataPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
  pinMode(latchPin, OUTPUT);
  pinMode(inputXPin, INPUT);
  pinMode(inputYPin, INPUT);
  pinMode(inputKnapPin, INPUT);
  pinMode(APin, OUTPUT);
  pinMode(BPin, OUTPUT);
  pinMode(CPin, OUTPUT);
  pinMode(DPin, OUTPUT);
  pinMode(InhibitPin, OUTPUT);
  Serial.begin (9600);
  red1 = B01111111;
  red2 = B01111111;
  red3 = B01111111;
  red4 = B01111111;
  green1 = B01111111;
  green2 = B01111111;
  green3 = B01111111;
  green4 = B01111111;
  blue1 = B01111111;
  blue2 = B01111111;
  blue3 = B01111111;
  blue4 = B01111111;
  row1 = B10000000;
  row2 = B10000000;
  row3 = B10000000;
  row4 = B10000000;
}
void swich1(){
  digitalWrite(APin, LOW);
  digitalWrite(BPin, LOW);
  digitalWrite(CPin, LOW);
  digitalWrite(DPin, LOW);
  digitalWrite(InhibitPin, LOW);   
}
void swich2(){
  digitalWrite(APin, HIGH);
  digitalWrite(BPin, LOW);
  digitalWrite(CPin, LOW);
  digitalWrite(DPin, LOW);
  digitalWrite(InhibitPin, LOW);   
}
void swich3(){
  digitalWrite(APin, LOW);
  digitalWrite(BPin, HIGH);
  digitalWrite(CPin, LOW);
  digitalWrite(DPin, LOW);
  digitalWrite(InhibitPin, LOW);   
}
void swich4(){
  digitalWrite(APin, HIGH);
  digitalWrite(BPin, HIGH);
  digitalWrite(CPin, LOW);
  digitalWrite(DPin, LOW);
  digitalWrite(InhibitPin, LOW);   
}
void swich5(){
  digitalWrite(APin, LOW);
  digitalWrite(BPin, LOW);
  digitalWrite(CPin, HIGH);
  digitalWrite(DPin, LOW);
  digitalWrite(InhibitPin, LOW);   
}
void swich6(){
  digitalWrite(APin, HIGH);
  digitalWrite(BPin, LOW);
  digitalWrite(CPin, HIGH);
  digitalWrite(DPin, LOW);
  digitalWrite(InhibitPin, LOW);   
}
void swich7(){
  digitalWrite(APin, LOW);
  digitalWrite(BPin, HIGH);
  digitalWrite(CPin, HIGH);
  digitalWrite(DPin, LOW);
  digitalWrite(InhibitPin, LOW);
}
void swich8(){
  digitalWrite(APin, LOW);
  digitalWrite(BPin, HIGH);
  digitalWrite(CPin, HIGH);
  digitalWrite(DPin, LOW);
  digitalWrite(InhibitPin, LOW);
}
void swich9(){
  digitalWrite(APin, LOW);
  digitalWrite(BPin, HIGH);
  digitalWrite(CPin, HIGH);
  digitalWrite(DPin, LOW);
  digitalWrite(InhibitPin, LOW);
}
void swich10(){
  digitalWrite(APin, LOW);
  digitalWrite(BPin, HIGH);
  digitalWrite(CPin, HIGH);
  digitalWrite(DPin, LOW);
  digitalWrite(InhibitPin, LOW);
}
void swich11(){
  digitalWrite(APin, LOW);
  digitalWrite(BPin, HIGH);
  digitalWrite(CPin, HIGH);
  digitalWrite(DPin, LOW);
  digitalWrite(InhibitPin, LOW);
}
void swich12(){
  digitalWrite(APin, LOW);
  digitalWrite(BPin, HIGH);
  digitalWrite(CPin, HIGH);
  digitalWrite(DPin, LOW);
  digitalWrite(InhibitPin, LOW);
}
void swich13(){
  digitalWrite(APin, LOW);
  digitalWrite(BPin, HIGH);
  digitalWrite(CPin, HIGH);
  digitalWrite(DPin, LOW);
  digitalWrite(InhibitPin, LOW);
}
void swich14(){
  digitalWrite(APin, LOW);
  digitalWrite(BPin, HIGH);
  digitalWrite(CPin, HIGH);
  digitalWrite(DPin, LOW);
  digitalWrite(InhibitPin, LOW);
}
void swich15(){
  digitalWrite(APin, LOW);
  digitalWrite(BPin, HIGH);
  digitalWrite(CPin, HIGH);
  digitalWrite(DPin, LOW);
  digitalWrite(InhibitPin, LOW);
}
void swich16(){
  digitalWrite(APin, LOW);
  digitalWrite(BPin, HIGH);
  digitalWrite(CPin, HIGH);
  digitalWrite(DPin, LOW);
  digitalWrite(InhibitPin, LOW);
}
void swichReset(){
  digitalWrite(APin, LOW);
  digitalWrite(BPin, LOW);
  digitalWrite(CPin, LOW);
  digitalWrite(DPin, LOW);
  digitalWrite(InhibitPin, HIGH);
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
blue1 = blue1<<1;
blue2 = blue2<<1;
blue3 = blue3<<1;
blue4 = blue4<<1;
row1 = row1<<1;
row2 = row2<<1;
row3 = row3<<1;
row4 = row4<<1;


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
