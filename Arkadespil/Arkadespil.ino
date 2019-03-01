
const int dly = 10;
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
}

void loop() {



  
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
}
