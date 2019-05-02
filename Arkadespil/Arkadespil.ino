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
int x;
int y;
byte RGB;
byte RED = 0x4; // 0100
byte GREEN = 0x2; // 0010
byte BLUE = 0x1; // 0001
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
  dataArrayROW[0] = 0x00; //00000000
  dataArrayROW[1] = 0b10000001; //10000000
  dataArrayROW[2] = 0b10000001; //01000000
  dataArrayROW[3] = 0b10000010; //00100000
  dataArrayROW[4] = 0b10000100; //00010000
  dataArrayROW[5] = 0b10001000; //00001000
  dataArrayROW[6] = 0b10010000; //00000100
  dataArrayROW[7] = 0b10100000; //00000010
  dataArrayROW[8] = 0b11000000; //00000001
  
  
  
  
  dataArrayColor[0] = 0x00; //00000000 = 0
  dataArrayColor[1] = 0x01; //00000001 = 1
  dataArrayColor[2] = 0x02; //00000010 = 2
  dataArrayColor[3] = 0x04; //00000100 = 4
  dataArrayColor[4] = 0x08; //00001000 = 8
  dataArrayColor[5] = 0x10; //00010000 = 10
  dataArrayColor[6] = 0x20; //00100000 = 20
  dataArrayColor[7] = 0x40; //01000000 = 40
  dataArrayColor[8] = 0x80; //10000000 = 80
 

 
  

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
x = 0b0000001111000000;
y = 88;
RGB = 0x4;


//boardKordinats(1,1);
for (int x=0;x<9;x++){
int XorDataY1 = dataArrayColor[x];
int XorDataY2 = dataArrayROW[x];
int XorDataY3 = dataArrayROW[x];
int XorDataY4 = dataArrayColor[x];

int XorDataX1 = dataArrayColor[x];
int XorDataX2 = dataArrayROW[x];
int XorDataX3 = dataArrayROW[x];
int XorDataX4 = dataArrayColor[x];

 int y1 = XorDataY1;
 int y2 = XorDataY2;
 int y3 = XorDataY3;
 int y4 = XorDataY4;
 int x1 = XorDataX1;
 int x2 = XorDataX2;
 int x3 = XorDataX3;
 int x4 = XorDataX4;
  dataROW1 = x1;
  dataROW2 = x2;
  dataROW3 = x3;
  dataROW4 = x4;
  if (RGB == 0x4 || RGB == 0x6 || RGB == 0x7)
  {
  dataRED1 = ~y1;
  dataRED2 = ~y2;
  dataRED3 = ~y3;
  dataRED4 = ~y4;
}
else
{
dataRED1 = 255;
dataRED2 = 255;
dataRED3 = 255;
dataRED4 = 255;
}

if (RGB == 0x2 || RGB == 0x3 || RGB == 0x6 || RGB == 0x7)
{
  dataGREEN1 = ~y1;  
  dataGREEN2 = ~y2;
  dataGREEN3 = ~y3;
  dataGREEN4 = ~y4;
}
else 
{
  dataGREEN1 = 255;
  dataGREEN2 = 255;
  dataGREEN3 = 255;
  dataGREEN4 = 255;
}
if (RGB == 0x1|| RGB == 0x3 || RGB == 0x7)
{
  dataBLUE1 = ~y1;
  dataBLUE2 = ~y2;
  dataBLUE3 = ~y3;
  dataBLUE4 = ~y4;
}
else 
{
  dataBLUE1 = 255;
  dataBLUE2 = 255;
  dataBLUE3 = 255;
  dataBLUE4 = 255;

}
// Serial.print("ROW1: ");
// Serial.println(x1,BIN);
// Serial.print("ROW2: ");
// Serial.println(x2,BIN);
// Serial.print("ROW3: ");
// Serial.println(x3,BIN);
// Serial.print("ROW4: ");
// Serial.println(x4,BIN);
// Serial.print("y4: ");
// Serial.println(y4,BIN);

  //delay(100);
  digitalWrite(rowLatchPin, LOW);
    //delayMicroseconds(dly);
    shiftOut(rowDataPin,rowClockPin,MSBFIRST,dataROW4);
    shiftOut(rowDataPin,rowClockPin,MSBFIRST,dataROW3);
    shiftOut(rowDataPin,rowClockPin,MSBFIRST,dataROW2);
    shiftOut(rowDataPin,rowClockPin,MSBFIRST,dataROW1);
   // delayMicroseconds(dly);
    digitalWrite(rowLatchPin,HIGH);
    //  Serial.print("ROW: ");
    // Serial.println(dataROW1,BIN);
 
    digitalWrite(latchPin,LOW);
    //delayMicroseconds(dly);
    shiftOut(dataPin,clockPin,MSBFIRST,dataBLUE4);
    shiftOut(dataPin,clockPin,MSBFIRST,dataBLUE3); 
    shiftOut(dataPin,clockPin,MSBFIRST,dataBLUE2);
    shiftOut(dataPin,clockPin,MSBFIRST,dataBLUE1);
    shiftOut(dataPin,clockPin,MSBFIRST,dataGREEN4);
    shiftOut(dataPin,clockPin,MSBFIRST,dataGREEN3);
    shiftOut(dataPin,clockPin,MSBFIRST,dataGREEN2);
    shiftOut(dataPin,clockPin,MSBFIRST,dataGREEN1);
    shiftOut(dataPin,clockPin,MSBFIRST,dataRED4);
    shiftOut(dataPin,clockPin,MSBFIRST,dataRED3);
    shiftOut(dataPin,clockPin,MSBFIRST,dataRED2);
    shiftOut(dataPin,clockPin,MSBFIRST,dataRED1);
    //delayMicroseconds(dly);
    digitalWrite(latchPin,HIGH);
    // Serial.print("red1: ");
    // Serial.println(dataRED1,BIN);

    // Serial.print("red1: ");
    // Serial.println(dataRED1);
}
}
byte X1(int x, int y)
{
  byte x1 = (lowByte(x) !=0 && lowByte(y)!=0) ? lowByte(x) : 0;
 return x1;
}
byte X2(int x, int y)
{
  byte x2 = (highByte(x) !=0 && lowByte(y)!=0)? highByte(x) : 0;
return x2;
}
byte X3(int x, int y)
{
  byte x3 = (lowByte(x) !=0 && highByte(y)!=0) ? lowByte(x) : 0; 
return x3;
}
byte X4(int x, int y)
{
  byte x4 = (highByte(x) !=0 && highByte(y)!=0) ? highByte(x) : 0;
return x4;
}
byte Y1(int x, int y)
{
  byte y1 = (lowByte(x) !=0 && lowByte(y)!=0)  ? lowByte(y) : 0;
return y1;
}
byte Y2(int x, int y)
{
  byte y2 = (highByte(x) !=0 && lowByte(y)!=0) ? lowByte(y) : 0;
return y2;
}
byte Y3(int x, int y)
{
  byte y3 = (lowByte(x)!=0 && highByte(y)!=0)  ? highByte(y) : 0;
return  y3;
}
byte Y4(int x, int y)
{
  byte y4 = (highByte(x)!=0 && highByte(y)!=0) ? highByte(y) : 0;
return y4;
}