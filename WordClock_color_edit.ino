// This #include statement was automatically added by the Particle IDE.
#include "neopixel/neopixel.h"

// IMPORTANT: Set pixel COUNT, PIN and TYPE
#define PIXEL_PIN D2
#define PIXEL_COUNT 121
#define PIXEL_TYPE WS2812B

int tzOffset;
int mytimemonth;
int mytimeday;
int mytimehr;
int mytimemin;
int mytimesec;

Adafruit_NeoPixel strip = Adafruit_NeoPixel(PIXEL_COUNT, PIXEL_PIN, PIXEL_TYPE);

void setup() {
  tzOffset=-6;
  Time.zone(tzOffset);
  strip.setBrightness(50);
  strip.begin();
  strip.show(); // Initialize all pixels to 'off'
do {
  strip.setPixelColor(9, 0, 0, 0);
  strip.setPixelColor(99, 0, 0, 0);
  strip.setPixelColor(111, 0, 0, 0);
  strip.setPixelColor(21, 0, 0, 0);
  strip.setPixelColor(0, random(255), random(255), random(255));
  strip.setPixelColor(10, random(255), random(255), random(255));
  strip.setPixelColor(120, random(255), random(255), random(255));
  strip.setPixelColor(110, random(255), random(255), random(255));
  strip.show();
  delay(100);

  strip.setPixelColor(0, 0, 0, 0);
  strip.setPixelColor(10, 0, 0, 0);
  strip.setPixelColor(120, 0, 0, 0);
  strip.setPixelColor(110, 0, 0, 0);
  strip.setPixelColor(1, random(255), random(255), random(255));
  strip.setPixelColor(11, random(255), random(255), random(255));
  strip.setPixelColor(119, random(255), random(255), random(255));
  strip.setPixelColor(109, random(255), random(255), random(255));
  strip.show();
  delay(100);

  strip.setPixelColor(1, 0, 0, 0);
  strip.setPixelColor(11, 0, 0, 0);
  strip.setPixelColor(119, 0, 0, 0);
  strip.setPixelColor(109, 0, 0, 0);
  strip.setPixelColor(2, random(255), random(255), random(255));
  strip.setPixelColor(32, random(255), random(255), random(255));
  strip.setPixelColor(118, random(255), random(255), random(255));
  strip.setPixelColor(88, random(255), random(255), random(255));
  strip.show();
  delay(100);

  strip.setPixelColor(2, 0, 0, 0);
  strip.setPixelColor(32, 0, 0, 0);
  strip.setPixelColor(118, 0, 0, 0);
  strip.setPixelColor(88, 0, 0, 0);
  strip.setPixelColor(3, random(255), random(255), random(255));
  strip.setPixelColor(33, random(255), random(255), random(255));
  strip.setPixelColor(117, random(255), random(255), random(255));
  strip.setPixelColor(87, random(255), random(255), random(255));
  strip.show();
  delay(100);

  strip.setPixelColor(3, 0, 0, 0);
  strip.setPixelColor(33, 0, 0, 0);
  strip.setPixelColor(117, 0, 0, 0);
  strip.setPixelColor(87, 0, 0, 0);
  strip.setPixelColor(4, random(255), random(255), random(255));
  strip.setPixelColor(54, random(255), random(255), random(255));
  strip.setPixelColor(116, random(255), random(255), random(255));
  strip.setPixelColor(66, random(255), random(255), random(255));
  strip.show();
  delay(100);

  strip.setPixelColor(4, 0, 0, 0);
  strip.setPixelColor(54, 0, 0, 0);
  strip.setPixelColor(116, 0, 0, 0);
  strip.setPixelColor(66, 0, 0, 0);
  strip.setPixelColor(5, random(255), random(255), random(255));
  strip.setPixelColor(55, random(255), random(255), random(255));
  strip.setPixelColor(115, random(255), random(255), random(255));
  strip.setPixelColor(65, random(255), random(255), random(255));
  strip.show();
  delay(100);

  strip.setPixelColor(5, 0, 0, 0);
  strip.setPixelColor(55, 0, 0, 0);
  strip.setPixelColor(115, 0, 0, 0);
  strip.setPixelColor(65, 0, 0, 0);
  strip.setPixelColor(6, random(255), random(255), random(255));
  strip.setPixelColor(76, random(255), random(255), random(255));
  strip.setPixelColor(114, random(255), random(255), random(255));
  strip.setPixelColor(44, random(255), random(255), random(255));
  strip.show();
  delay(100);

  strip.setPixelColor(6, 0, 0, 0);
  strip.setPixelColor(76, 0, 0, 0);
  strip.setPixelColor(114, 0, 0, 0);
  strip.setPixelColor(44, 0, 0, 0);
  strip.setPixelColor(7, random(255), random(255), random(255));
  strip.setPixelColor(77, random(255), random(255), random(255));
  strip.setPixelColor(113, random(255), random(255), random(255));
  strip.setPixelColor(43, random(255), random(255), random(255));
  strip.show();
  delay(100);

  strip.setPixelColor(7, 0, 0, 0);
  strip.setPixelColor(77, 0, 0, 0);
  strip.setPixelColor(113, 0, 0, 0);
  strip.setPixelColor(43, 0, 0, 0);
  strip.setPixelColor(8, random(255), random(255), random(255));
  strip.setPixelColor(98, random(255), random(255), random(255));
  strip.setPixelColor(112, random(255), random(255), random(255));
  strip.setPixelColor(22, random(255), random(255), random(255));
  strip.show();
  delay(100);

  strip.setPixelColor(8, 0, 0, 0);
  strip.setPixelColor(98, 0, 0, 0);
  strip.setPixelColor(112, 0, 0, 0);
  strip.setPixelColor(22, 0, 0, 0);
  strip.setPixelColor(9, random(255), random(255), random(255));
  strip.setPixelColor(99, random(255), random(255), random(255));
  strip.setPixelColor(111, random(255), random(255), random(255));
  strip.setPixelColor(21, random(255), random(255), random(255));
  strip.show();
  delay(100);
} while ( Particle.connected() != true );
}


void loop() {
    
if ( Time.hour() > 8  && Time.hour() < 21 ) {
    //Daytime
    strip.setBrightness(50);
}    

if ( Time.hour() > 6 && Time.hour() < 9 ) {
    //Early morning
    strip.setBrightness(35);
}    
if ( Time.hour() > 20 && Time.hour() < 23 ) {
    //Late evening
    strip.setBrightness(35);
}    
if ( Time.hour() < 7 ) {
    strip.setBrightness(15);
}
if ( Time.hour() > 22 ) {
    strip.setBrightness(15);
}

for (int x=0; x<100; x++)
 {
    if ( Time.month()==6 && Time.day()==20) {
        clean();
        phraseHappyBirthday();
        Particle.publish("happy birthday");
        strip.show();
        delay(15000);
    }
	clean();
	displayWords();
        strip.show();
	delay(15000);
 }
}
	  

void displayWords() {
    mytimemonth=Time.month();
    mytimeday=Time.day();
    mytimehr=Time.hour();
    mytimemin=Time.minute();
    mytimesec=Time.second();

  //Always on
   phraseITS();



  //calculate minutes on the hour
    if(mytimemin>57 && mytimemin<3){
    }
    // do nothing, no minutes it's on the hour
    
    if(mytimemin>2 && mytimemin<8){
      
      phraseFIVE();
      phrasePAST();
    }
    
    if(mytimemin>7 && mytimemin<13){
      
      phraseTEN();
      phrasePAST();
    }
    if(mytimemin>12 && mytimemin<18){
      
      phraseA();
      phraseQUARTER();
      phrasePAST();
    }
    if(mytimemin>17 && mytimemin<23){
      
      phraseTWENTY();
      phrasePAST();
    }
    if(mytimemin>22 && mytimemin<28){
      
      phraseTWENTY();
      phraseFIVE();
      phrasePAST();
    }
    if(mytimemin>27 && mytimemin<33){
      
      phraseHALF();
      phrasePAST();
    }
    if(mytimemin>32 && mytimemin<38){
      
      phraseTWENTY();
      phraseFIVE();
      phraseTIL();
    }
    if(mytimemin>37 && mytimemin<43){
      
      phraseTWENTY();
      phraseTIL();
    }
    if(mytimemin>42 && mytimemin<48){
      
      phraseA();
      phraseQUARTER();
      phraseTIL();
    }    
    if(mytimemin>47 && mytimemin<53){
      
      phraseTEN();
      phraseTIL();
    }
    if(mytimemin>52 && mytimemin<58){
      
      phraseFIVE();
      phraseTIL();
    }


  // Calculate hour & oclocks
  if(mytimehr==1){
    if(mytimemin>32){
      hourTWO();
      phraseOCLOCK();
    }
    else
    {
      hourONE();
      phraseOCLOCK();
    }
  }
  if(mytimehr==2){
    if(mytimemin>32){
      hourTHREE();
      phraseOCLOCK();
    }
    else
    {
      hourTWO();
      phraseOCLOCK();
    }
  }
    if(mytimehr==3){
    if(mytimemin>32){
      hourFOUR();
      phraseOCLOCK();
    }
    else
    {
      hourTHREE();
      phraseOCLOCK();
    }
  }
  if(mytimehr==4){
    if(mytimemin>32){
      hourFIVE();
      phraseOCLOCK();
    }
    else
    {
      hourFOUR();
      phraseOCLOCK();
    }
  }
  if(mytimehr==5){
    if(mytimemin>32){
      hourSIX();
      phraseOCLOCK();
    }
    else
    {
      hourFIVE();
      phraseOCLOCK();
    }
  }
  if(mytimehr==6){
    if(mytimemin>32){
      hourSEVEN();
      phraseOCLOCK();
    }
    else
    {
      hourSIX();
      phraseOCLOCK();
    }
  }
  if(mytimehr==7){
    if(mytimemin>32){
      hourEIGHT();
      phraseOCLOCK();
    }
    else
    {
      hourSEVEN();
      phraseOCLOCK();
    }
  }
  if(mytimehr==8){
    if(mytimemin>32){
      hourNINE();
      phraseOCLOCK();
    }
    else
    {
      hourEIGHT();
      phraseOCLOCK();
    }
  }
  if(mytimehr==9){
    if(mytimemin>32){
      hourTEN();
      phraseOCLOCK();
    }
    else
    {
      hourNINE();
      phraseOCLOCK();
    }
  }
  if(mytimehr==10){
    if(mytimemin>32){
      hourELEVEN();
      phraseOCLOCK();
    }
    else
    {
      hourTEN();
      phraseOCLOCK();
    }
  }
  if(mytimehr==11){
    if(mytimemin>32){
      hourNOON();
    }
    else
    {
      hourELEVEN();
      phraseOCLOCK();
    }
  }
  if(mytimehr==12){
    if(mytimemin>32){
      hourONE();
      phraseOCLOCK();
    }
    else
    {
      hourNOON();
    }
  }
      if(mytimehr==13){
    if(mytimemin>32){
      hourTWO();
      phraseOCLOCK();
    }
    else
    {
      hourONE();
      phraseOCLOCK();
    }
  }
  if(mytimehr==14){
    if(mytimemin>32){
      hourTHREE();
      phraseOCLOCK();
    }
    else
    {
      hourTWO();
      phraseOCLOCK();
    }
  }
    if(mytimehr==15){
    if(mytimemin>32){
      hourFOUR();
      phraseOCLOCK();
    }
    else
    {
      hourTHREE();
      phraseOCLOCK();
    }
  }
  if(mytimehr==16){
    if(mytimemin>32){
      hourFIVE();
      phraseOCLOCK();
    }
    else
    {
      hourFOUR();
      phraseOCLOCK();
    }
  }
  if(mytimehr==17){
    if(mytimemin>32){
      hourSIX();
      phraseOCLOCK();
    }
    else
    {
      hourFIVE();
      phraseOCLOCK();
    }
  }
  if(mytimehr==18){
    if(mytimemin>32){
      hourSEVEN();
      phraseOCLOCK();
    }
    else
    {
      hourSIX();
      phraseOCLOCK();
    }
  }
  if(mytimehr==19){
    if(mytimemin>32){
      hourEIGHT();
      phraseOCLOCK();
    }
    else
    {
      hourSEVEN();
      phraseOCLOCK();
    }
  }
  if(mytimehr==20){
    if(mytimemin>32){
      hourNINE();
      phraseOCLOCK();
    }
    else
    {
      hourEIGHT();
      phraseOCLOCK();
    }
  }
  if(mytimehr==21){
    if(mytimemin>32){
      hourTEN();
      phraseOCLOCK();
    }
    else
    {
      hourNINE();
      phraseOCLOCK();
    }
  }
  if(mytimehr==22){
    if(mytimemin>32){
      hourELEVEN();
      phraseOCLOCK();
    }
    else
    {
      hourTEN();
      phraseOCLOCK();
    }
  }
  if(mytimehr==23){
    if(mytimemin>32){
      hourMIDNIGHT();
    }
    else
    {
      hourELEVEN();
      phraseOCLOCK();
    }
  }
  if(mytimehr==0){
    if(mytimemin>32){
      hourONE();
      phraseOCLOCK();
    }
    else
    {
      hourMIDNIGHT();
    }
  }
}


void phraseITS() {
  strip.setPixelColor(110, random(255), random(255), random(255));
  strip.setPixelColor(111, random(255), random(255), random(255));
  strip.setPixelColor(112, random(255), random(255), random(255));
}
void phraseFIVE() {
	strip.setPixelColor(95, random(255), random(255), random(255));
	strip.setPixelColor(96, random(255), random(255), random(255));
	strip.setPixelColor(97, random(255), random(255), random(255));
	strip.setPixelColor(98, random(255), random(255), random(255));
}
void phraseA() {
	strip.setPixelColor(114, random(255), random(255), random(255));
}
void phraseTEN() {
	strip.setPixelColor(108, random(255), random(255), random(255));
	strip.setPixelColor(107, random(255), random(255), random(255));
	strip.setPixelColor(106, random(255), random(255), random(255));
}
void phraseQUARTER() {
	strip.setPixelColor(105, random(255), random(255), random(255));
	strip.setPixelColor(104, random(255), random(255), random(255));
	strip.setPixelColor(103, random(255), random(255), random(255));
	strip.setPixelColor(102, random(255), random(255), random(255));
	strip.setPixelColor(101, random(255), random(255), random(255));
	strip.setPixelColor(100, random(255), random(255), random(255));
	strip.setPixelColor(99, random(255), random(255), random(255));
}
void phraseTWENTY() {
	strip.setPixelColor(88, random(255), random(255), random(255));
	strip.setPixelColor(89, random(255), random(255), random(255));
	strip.setPixelColor(90, random(255), random(255), random(255));
	strip.setPixelColor(91, random(255), random(255), random(255));
	strip.setPixelColor(92, random(255), random(255), random(255));
	strip.setPixelColor(93, random(255), random(255), random(255));
}
void phraseHALF() {
	strip.setPixelColor(116, random(255), random(255), random(255));
	strip.setPixelColor(117, random(255), random(255), random(255));
	strip.setPixelColor(118, random(255), random(255), random(255));
	strip.setPixelColor(119, random(255), random(255), random(255));
}
void phrasePAST() {
	strip.setPixelColor(81, random(255), random(255), random(255));
	strip.setPixelColor(80, random(255), random(255), random(255));
	strip.setPixelColor(79, random(255), random(255), random(255));
	strip.setPixelColor(78, random(255), random(255), random(255));
}
void phraseTIL() {
	strip.setPixelColor(84, random(255), random(255), random(255));
	strip.setPixelColor(83, random(255), random(255), random(255));
	strip.setPixelColor(82, random(255), random(255), random(255));
}
void hourONE() {
	strip.setPixelColor(21, random(255), random(255), random(255));
	strip.setPixelColor(20, random(255), random(255), random(255));
	strip.setPixelColor(19, random(255), random(255), random(255));
}
void hourTWO() {
	strip.setPixelColor(35, random(255), random(255), random(255));
	strip.setPixelColor(34, random(255), random(255), random(255));
	strip.setPixelColor(33, random(255), random(255), random(255));
}
void hourTHREE() {
	strip.setPixelColor(15, random(255), random(255), random(255));
	strip.setPixelColor(14, random(255), random(255), random(255));
	strip.setPixelColor(13, random(255), random(255), random(255));
	strip.setPixelColor(12, random(255), random(255), random(255));
	strip.setPixelColor(11, random(255), random(255), random(255));
}
void hourFOUR() {
	strip.setPixelColor(0, random(255), random(255), random(255));
	strip.setPixelColor(1, random(255), random(255), random(255));
	strip.setPixelColor(2, random(255), random(255), random(255));
	strip.setPixelColor(3, random(255), random(255), random(255));
}
void hourFIVE() {
	strip.setPixelColor(43, random(255), random(255), random(255));
	strip.setPixelColor(42, random(255), random(255), random(255));
	strip.setPixelColor(41, random(255), random(255), random(255));
	strip.setPixelColor(40, random(255), random(255), random(255));
}
void hourSIX() {
	strip.setPixelColor(18, random(255), random(255), random(255));
	strip.setPixelColor(17, random(255), random(255), random(255));
	strip.setPixelColor(16, random(255), random(255), random(255));
}
void hourSEVEN() {
	strip.setPixelColor(67, random(255), random(255), random(255));
	strip.setPixelColor(68, random(255), random(255), random(255));
	strip.setPixelColor(69, random(255), random(255), random(255));
	strip.setPixelColor(70, random(255), random(255), random(255));
	strip.setPixelColor(71, random(255), random(255), random(255));
}
void hourEIGHT() {
	strip.setPixelColor(28, random(255), random(255), random(255));
	strip.setPixelColor(29, random(255), random(255), random(255));
	strip.setPixelColor(30, random(255), random(255), random(255));
	strip.setPixelColor(31, random(255), random(255), random(255));
	strip.setPixelColor(32, random(255), random(255), random(255));
}
void hourNINE() {
	strip.setPixelColor(39, random(255), random(255), random(255));
	strip.setPixelColor(38, random(255), random(255), random(255));
	strip.setPixelColor(37, random(255), random(255), random(255));
	strip.setPixelColor(36, random(255), random(255), random(255));
}
void hourTEN() {
	strip.setPixelColor(52, random(255), random(255), random(255));
	strip.setPixelColor(53, random(255), random(255), random(255));
	strip.setPixelColor(54, random(255), random(255), random(255));
}
void hourELEVEN() {
	strip.setPixelColor(22, random(255), random(255), random(255));
	strip.setPixelColor(23, random(255), random(255), random(255));
	strip.setPixelColor(24, random(255), random(255), random(255));
	strip.setPixelColor(25, random(255), random(255), random(255));
	strip.setPixelColor(26, random(255), random(255), random(255));
	strip.setPixelColor(27, random(255), random(255), random(255));
}
void hourNOON() {
	strip.setPixelColor(73, random(255), random(255), random(255));
	strip.setPixelColor(74, random(255), random(255), random(255));
	strip.setPixelColor(75, random(255), random(255), random(255));
	strip.setPixelColor(76, random(255), random(255), random(255));
}
void hourMIDNIGHT() {
	strip.setPixelColor(44, random(255), random(255), random(255));
	strip.setPixelColor(45, random(255), random(255), random(255));
	strip.setPixelColor(46, random(255), random(255), random(255));
	strip.setPixelColor(47, random(255), random(255), random(255));
	strip.setPixelColor(48, random(255), random(255), random(255));
	strip.setPixelColor(49, random(255), random(255), random(255));
	strip.setPixelColor(50, random(255), random(255), random(255));
	strip.setPixelColor(51, random(255), random(255), random(255));
}
void phraseOCLOCK() {
	strip.setPixelColor(5, random(255), random(255), random(255));
	strip.setPixelColor(6, random(255), random(255), random(255));
	strip.setPixelColor(7, random(255), random(255), random(255));
	strip.setPixelColor(8, random(255), random(255), random(255));
	strip.setPixelColor(9, random(255), random(255), random(255));
	strip.setPixelColor(10, random(255), random(255), random(255));
}
void phraseHappyBirthday() {
	strip.setPixelColor(116, 255, 255, 255);
	strip.setPixelColor(103, 255, 255, 255);
	strip.setPixelColor(94, 255, 255, 255);
	strip.setPixelColor(81, 255, 255, 255);
	strip.setPixelColor(72, 255, 255, 255);
	strip.setPixelColor(64, 255, 255, 255);
	strip.setPixelColor(63, 255, 255, 255);
	strip.setPixelColor(62, 255, 255, 255);
	strip.setPixelColor(61, 255, 255, 255);
	strip.setPixelColor(60, 255, 255, 255);
	strip.setPixelColor(58, 255, 255, 255);
	strip.setPixelColor(57, 255, 255, 255);
	strip.setPixelColor(56, 255, 255, 255);
}
void clean() {
	for (int x=0; x<=120; x++) {
		strip.setPixelColor(x, 0, 0, 0);
	}
}

