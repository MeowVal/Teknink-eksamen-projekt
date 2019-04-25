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

byte dataRED1;
byte dataROW1;
byte dataGREEN1;
byte dataBLUE1;
byte dataRED2;
byte dataROW2;
byte dataGREEN2;
byte dataBLUE2;
byte dataRED3;
byte dataROW3;
byte dataGREEN3;
byte dataBLUE3;
byte dataRED4;
byte dataROW4;
byte dataGREEN4;
byte dataBLUE4;
byte dataArrayColor[9];
byte dataArrayROW[9];
boolean X1 = false;
boolean X2 = false;
boolean X3 = false;
boolean X4 = false;
boolean X5 = false;
boolean X6 = false;
boolean X7 = false;
boolean X8 = false;
boolean X9 = false;
boolean X10 = false;
boolean X11 = false;
boolean X12 = false;
boolean X13 = false;
boolean X14 = false;
boolean X15 = false;
boolean X16 = false;
boolean red = false;
boolean green = false;
boolean blue = false;
boolean y1 = false;
boolean y2 = false;
boolean y3 = false;
boolean y4 = false;
boolean y5 = false;
boolean y6 = false;
boolean y7 = false;
boolean y8 = false;
boolean y9 = false;
boolean y10 = false;
boolean y11 = false;
boolean y12 = false;
boolean y13 = false;
boolean y14 = false;
boolean y15 = false;
boolean y16 = false;
const int  dataPin = 12;
const int  clockPin = 13;
const int  latchPin = 11; 
const int  rowDataPin = 46;
const int  rowClockPin = 47;
const int  rowLatchPin = 45; 
const int rs = 53, en = 52, d4 = 48, d5 = 49, d6 = 50, d7 = 51;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
void setup() {
  pinMode(dataPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
  pinMode(latchPin, OUTPUT);
  pinMode(rowDataPin, OUTPUT);
  pinMode(rowClockPin, OUTPUT);
  pinMode(rowLatchPin, OUTPUT);
  pinMode(inputXPin, INPUT);
  pinMode(inputYPin, INPUT);
  pinMode(inputKnapPin, INPUT);
  pinMode(APin, OUTPUT);
  pinMode(BPin, OUTPUT);
  pinMode(CPin, OUTPUT);
  pinMode(DPin, OUTPUT);
  pinMode(InhibitPin, OUTPUT);
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.print("hvor langsom du har været:");
  Serial.begin (9600);
  dataArrayROW[0] = 0xFF; //11111111
  dataArrayROW[1] = 0xFE; //11111110
  dataArrayROW[2] = 0xFC; //11111100
  dataArrayROW[3] = 0xF8; //11111000
  dataArrayROW[4] = 0xF0; //11110000
  dataArrayROW[5] = 0xE0; //11100000
  dataArrayROW[6] = 0xC0; //11000000
  dataArrayROW[7] = 0x80; //10000000
  dataArrayROW[8] = 0x00; //00000000
  
  
  dataArrayColor[0] = 0x00; //00000000 = 0
  dataArrayColor[1] = 0x01; //00000001 = 1
  dataArrayColor[2] = 0x03; //00000011 = 3
  dataArrayColor[3] = 0x07; //00000111 = 7
  dataArrayColor[4] = 0x0F; //00001111 = 15
  dataArrayColor[5] = 0x1F; //00011111 = 31
  dataArrayColor[6] = 0x3F; //00111111 = 63
  dataArrayColor[7] = 0x7F; //01111111 = 127
  dataArrayColor[8] = 0xFF; //11111111 = 255
  dataArrayColor[9] = 0xFE; //11111110 = 254
  dataArrayColor[10] = 0xFC; //11111100 = 252
  dataArrayColor[11] = 0xF8; //11111000 = 248
  dataArrayColor[12] = 0xF0; //11110000
  dataArrayColor[13] = 0xE0; //11100000
  dataArrayColor[14] = 0xC0; //11000000
  dataArrayColor[15] = 0x80; //10000000
  dataArrayColor[16] = 0xFD; //11111101
  dataArrayColor[16] = 0xFD; //11111101
  dataArrayColor[17] = 0xFB; //11111011
  dataArrayColor[18] = 0xF7; //11110111
  dataArrayColor[19] = 0xEF; //11101111
  dataArrayColor[20] = 0xDF; //11011111
  dataArrayColor[21] = 0xBF; //10111111
  dataArrayColor[22] = 0xFA; //11111010

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
// set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  lcd.setCursor(0, 1);
  // print the number of seconds since reset:
  lcd.print(millis() / 1000);
  
if (red && X1)
{
//dataRED1 = x1();
}
if (y1)
{
  //dataROW1 = 0x01;
}
if (green && X1)
{
  //dataGREEN1 = 0xFE;
}
if (blue)
{
  //dataBLUE1 = 0xFE;
}
  dataROW1 = dataArrayROW[6];
  dataRED1 = dataArrayColor[0];
  dataGREEN1 = dataArrayColor[1];
  dataBLUE1 = dataArrayColor[1];
  dataROW2 = dataArrayROW[7];
  dataRED2 = dataArrayColor[1];
  dataGREEN2 = dataArrayColor[1];
  dataBLUE2 = dataArrayColor[1];
  dataROW3 = dataArrayROW[7];
  dataRED3 = dataArrayColor[1];
  dataGREEN3 = dataArrayColor[1];
  dataBLUE3 = dataArrayColor[1];
  dataROW4 = dataArrayColor[1];
  dataRED4 = dataArrayROW[7];
  dataGREEN4 = dataArrayColor[1];
  dataBLUE4 = dataArrayColor[1];
  delay(100);
  digitalWrite(rowLatchPin, LOW);
    delayMicroseconds(dly);
    shiftOut(rowDataPin,rowClockPin,MSBFIRST,B10000000);
    shiftOut(rowDataPin,rowClockPin,MSBFIRST,B10000000);
    shiftOut(rowDataPin,rowClockPin,MSBFIRST,B10000000);
    shiftOut(rowDataPin,rowClockPin,MSBFIRST,B10000000);
    delayMicroseconds(dly);
    digitalWrite(rowLatchPin,HIGH);
     Serial.print("ROW: ");
    Serial.println(dataROW1,BIN);
 
    digitalWrite(latchPin,LOW);
    delayMicroseconds(dly);
    shiftOut(dataPin,clockPin,MSBFIRST,dataBLUE4);
    shiftOut(dataPin,clockPin,MSBFIRST,dataBLUE3); 
    shiftOut(dataPin,clockPin,MSBFIRST,dataBLUE2);
    shiftOut(dataPin,clockPin,MSBFIRST,dataBLUE1);
    shiftOut(dataPin,clockPin,MSBFIRST,dataGREEN4);
    shiftOut(dataPin,clockPin,MSBFIRST,dataGREEN3);
    shiftOut(dataPin,clockPin,MSBFIRST,dataGREEN2);
    shiftOut(dataPin,clockPin,MSBFIRST,dataGREEN1);
    shiftOut(dataPin,clockPin,MSBFIRST,B11111110);
    shiftOut(dataPin,clockPin,MSBFIRST,B11111110);
    shiftOut(dataPin,clockPin,MSBFIRST,B11111110);
    shiftOut(dataPin,clockPin,MSBFIRST,B11111110);
    delayMicroseconds(dly);
    digitalWrite(latchPin,HIGH);
    Serial.print("red1: ");
    Serial.println(dataRED1,BIN);

    Serial.print("red1: ");
    Serial.println(dataRED1);
}
void x1()
{
  return 0xFE;
}
void x2()
{
  return 0xFD;
}
void x3()
{
  return 0xFB;
}
void x4()
{
  return 0xF7;
}

