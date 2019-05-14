#include <LiquidCrystal.h>

const int dly = 100;
const int dl = 1; 
const int inputXPin = A0;
const int inputYPin = A1;
const int inputKnapPin = A2;
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
int dx1,dx2,dx3,dx4;
int dy1,dy2,dy3,dy4;
byte RED = 0x4; // 0100
byte GREEN = 0x2; // 0010
byte BLUE = 0x1; // 0001
int RGB;
int Farve;
const int  dataPin = 38;
const int  clockPin = 13;
const int  latchPin = 11; 
const int  rowDataPin = 46;
const int  rowClockPin = 47;
const int  rowLatchPin = 45; 
const int rs = 53, en = 52, d4 = 48, d5 = 49, d6 = 50, d7 = 51;
// d0 = 41, d1 = 42, d2 = 43, d3 = 44,
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
void setup() {
  pinMode(dataPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
  pinMode(latchPin, OUTPUT);
  pinMode(rowDataPin, OUTPUT);
  pinMode(rowClockPin, OUTPUT);
  pinMode(rowLatchPin, OUTPUT);
  pinMode(APin, OUTPUT);
  pinMode(BPin, OUTPUT);
  pinMode(CPin, OUTPUT);
  pinMode(DPin, OUTPUT);
  pinMode(InhibitPin, OUTPUT);
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.print("hvor langsom du har vaeret:");
  Serial.begin (9600);
  // dataArrayROW[0] = 0x00; //00000000
  // dataArrayROW[1] = 0b10000001; //10000000
  // dataArrayROW[2] = 0b10000001; //01000000
  // dataArrayROW[3] = 0b10000010; //00100000
  // dataArrayROW[4] = 0b10000100; //00010000
  // dataArrayROW[5] = 0b10001000; //00001000
  // dataArrayROW[6] = 0b10010000; //00000100
  // dataArrayROW[7] = 0b10100000; //00000010
  // dataArrayROW[8] = 0b11000000; //00000001
  
  
  
  
  // dataArrayColor[0] = 0x00; //00000000 = 0
  // dataArrayColor[1] = 0x01; //00000001 = 1
  // dataArrayColor[2] = 0x02; //00000010 = 2
  // dataArrayColor[3] = 0x04; //00000100 = 4
  // dataArrayColor[4] = 0x08; //00001000 = 8
  // dataArrayColor[5] = 0x10; //00010000 = 10
  // dataArrayColor[6] = 0x20; //00100000 = 20
  // dataArrayColor[7] = 0x40; //01000000 = 40
  // dataArrayColor[8] = 0x80; //10000000 = 80
 

 
  

}

void loop() {
// set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  lcd.setCursor(0, 1);
  // print the number of seconds since reset:
  lcd.print(millis() / 1000);

int inputX=analogRead(inputXPin);
int inputY=analogRead(inputYPin);
int inputSW=analogRead(inputKnapPin); 

delay(dl);
dx1=0;
dx2=0;
dx3 = 0b0000000010100000;
dx4=0;
dy1 = 0xffff;
dy2 = 0xffff;
dy3 = 0b1000000000000000;
dy4 = 0xffff;
dx3 <<1;
Farve = 0x4;
dataXShiftOut(X1(dx1,dy1),X2(dx2,dy2),X3(dx3,dy3),X4(dx4,dy4));
dataYShiftOut(Y1(dx1,dy1),Y2(dx2,dy2),Y3(dx3,dy3),Y4(dx4,dy4),Farve);
 delay(100);

}
void dataXShiftOut(int x1, int x2, int x3, int x4){
  byte dataROW1 = x1;
  byte dataROW2 = x2;
  byte dataROW3 = x3;
  byte dataROW4 = x4;

  digitalWrite(rowLatchPin, LOW);
    delayMicroseconds(dly);
    shiftOut(rowDataPin,rowClockPin,MSBFIRST,dataROW4);
    shiftOut(rowDataPin,rowClockPin,MSBFIRST,dataROW3);
    shiftOut(rowDataPin,rowClockPin,MSBFIRST,dataROW2);
    shiftOut(rowDataPin,rowClockPin,MSBFIRST,dataROW1);
    delayMicroseconds(dly);
    digitalWrite(rowLatchPin,HIGH);
}
void dataYShiftOut(int y1, int y2, int y3, int y4, int RGB){
  
  if (RGB == 0x4 || RGB == 0x6 || RGB == 0x7)
  {
    byte dataRED1 = ~y1;
    byte dataRED2 = ~y2;
    byte dataRED3 = ~y3;
    byte dataRED4 = ~y4;
  }
  else
  {
    byte dataRED1 = 255;
    byte dataRED2 = 255;
    byte dataRED3 = 255;
    byte dataRED4 = 255;
  //   Serial.print("red");
  // Serial.println(dataRED3);
  }

  if (RGB == 0x2 || RGB == 0x3 || RGB == 0x6 || RGB == 0x7)
  {
    byte dataGREEN1 = ~y1;  
    byte dataGREEN2 = ~y2;
    byte dataGREEN3 = ~y3;
    byte dataGREEN4 = ~y4;
    //Serial.println("hej");
  }
  else 
  {
    byte dataGREEN1 = 255;
    byte dataGREEN2 = 255;
    byte dataGREEN3 = 255;
    byte dataGREEN4 = 255;
  //   Serial.print("RGB");
  // Serial.println(RGB);
  // Serial.print("green");
  // Serial.println(dataGREEN3);
  }
  if (RGB == 0x1|| RGB == 0x3 || RGB == 0x7)
  {
    byte dataBLUE1 = ~y1;
    byte dataBLUE2 = ~y2;
    byte dataBLUE3 = ~y3;
    byte dataBLUE4 = ~y4;
  }
  else 
  {
    byte dataBLUE1 = 255;
    byte dataBLUE2 = 255;
    byte dataBLUE3 = 255;
    byte dataBLUE4 = 255;

  }

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
    shiftOut(dataPin,clockPin,MSBFIRST,dataRED4);
    shiftOut(dataPin,clockPin,MSBFIRST,dataRED3);
    shiftOut(dataPin,clockPin,MSBFIRST,dataRED2);
    shiftOut(dataPin,clockPin,MSBFIRST,dataRED1);
    delayMicroseconds(dly);
    digitalWrite(latchPin,HIGH);
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
class Demultiplexer{
  public:
  static void swich1(){
    digitalWrite(APin, LOW);
    digitalWrite(BPin, LOW);
    digitalWrite(CPin, LOW);
    digitalWrite(DPin, LOW);
    digitalWrite(InhibitPin, LOW);   
  }
  static void swich2(){
    digitalWrite(APin, HIGH);
    digitalWrite(BPin, LOW);
    digitalWrite(CPin, LOW);
    digitalWrite(DPin, LOW);
    digitalWrite(InhibitPin, LOW);   
  }
  static void swich3(){
    digitalWrite(APin, LOW);
    digitalWrite(BPin, HIGH);
    digitalWrite(CPin, LOW);
    digitalWrite(DPin, LOW);
    digitalWrite(InhibitPin, LOW);   
  }
  static void swich4(){
    digitalWrite(APin, HIGH);
    digitalWrite(BPin, HIGH);
    digitalWrite(CPin, LOW);
    digitalWrite(DPin, LOW);
    digitalWrite(InhibitPin, LOW);   
  }
  static void swich5(){
    digitalWrite(APin, LOW);
    digitalWrite(BPin, LOW);
    digitalWrite(CPin, HIGH);
    digitalWrite(DPin, LOW);
    digitalWrite(InhibitPin, LOW);   
  }
  static void swich6(){
    digitalWrite(APin, HIGH);
    digitalWrite(BPin, LOW);
    digitalWrite(CPin, HIGH);
    digitalWrite(DPin, LOW);
    digitalWrite(InhibitPin, LOW);   
  }
  static void swich7(){
    digitalWrite(APin, LOW);
    digitalWrite(BPin, HIGH);
    digitalWrite(CPin, HIGH);
    digitalWrite(DPin, LOW);
    digitalWrite(InhibitPin, LOW);
  }
  static void swich8(){
    digitalWrite(APin, LOW);
    digitalWrite(BPin, HIGH);
    digitalWrite(CPin, HIGH);
    digitalWrite(DPin, LOW);
    digitalWrite(InhibitPin, LOW);
  }
  static void swich9(){
    digitalWrite(APin, LOW);
    digitalWrite(BPin, HIGH);
    digitalWrite(CPin, HIGH);
    digitalWrite(DPin, LOW);
    digitalWrite(InhibitPin, LOW);
  }
  static void swich10(){
    digitalWrite(APin, LOW);
    digitalWrite(BPin, HIGH);
    digitalWrite(CPin, HIGH);
    digitalWrite(DPin, LOW);
    digitalWrite(InhibitPin, LOW);
  }
  static void swich11(){
    digitalWrite(APin, LOW);
    digitalWrite(BPin, HIGH);
    digitalWrite(CPin, HIGH);
    digitalWrite(DPin, LOW);
    digitalWrite(InhibitPin, LOW);
  }
  static void swich12(){
    digitalWrite(APin, LOW);
    digitalWrite(BPin, HIGH);
    digitalWrite(CPin, HIGH);
    digitalWrite(DPin, LOW);
    digitalWrite(InhibitPin, LOW);
  }
  static void swich13(){
    digitalWrite(APin, LOW);
    digitalWrite(BPin, HIGH);
    digitalWrite(CPin, HIGH);
    digitalWrite(DPin, LOW);
    digitalWrite(InhibitPin, LOW);
  }
  static void swich14(){
    digitalWrite(APin, LOW);
    digitalWrite(BPin, HIGH);
    digitalWrite(CPin, HIGH);
    digitalWrite(DPin, LOW);
    digitalWrite(InhibitPin, LOW);
  }
  static void swich15(){
    digitalWrite(APin, LOW);
    digitalWrite(BPin, HIGH);
    digitalWrite(CPin, HIGH);
    digitalWrite(DPin, LOW);
    digitalWrite(InhibitPin, LOW);
  }
  static void swich16(){
    digitalWrite(APin, LOW);
    digitalWrite(BPin, HIGH);
    digitalWrite(CPin, HIGH);
    digitalWrite(DPin, LOW);
    digitalWrite(InhibitPin, LOW);
  }
  static void swichReset(){
    digitalWrite(APin, LOW);
    digitalWrite(BPin, LOW);
    digitalWrite(CPin, LOW);
    digitalWrite(DPin, LOW);
    digitalWrite(InhibitPin, HIGH);
  }
};
class player{
  public:  
    int playerPosX = 0b0000000010000000;
    int playerPosY = 0b1000000000000000;
    //playercolor = 
  byte playermove(int inputX,int inputY){
    if (inputY==1024)
    {
      byte dy3 = playerPosY;
      byte dx3 = dx3<<1;
      byte dy4 = dy3;
      byte dx4 = dx3;
      dataXShiftOut(X1(dx1,dy1),X2(dx2,dy2),X3(dx3,dy3),X4(dx4,dy4));
      dataYShiftOut(Y1(dx1,dy1),Y2(dx2,dy2),Y3(dx3,dy3),Y4(dx4,dy4),RED);
    }
    if (inputY==0)
    {
      byte dy3 = playerPosY;
      byte dx3 = dx3>>1;
      byte dy4 = dy3;
      byte dx4 = dx3;

      dataXShiftOut(X1(dx1,dy1),X2(dx2,dy2),X3(dx3,dy3),X4(dx4,dy4));
      dataYShiftOut(Y1(dx1,dy1),Y2(dx2,dy2),Y3(dx3,dy3),Y4(dx4,dy4),Farve);
    }
    }
};
