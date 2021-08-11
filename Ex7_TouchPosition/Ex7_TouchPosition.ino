// Workshop 7 : TFT LCD Display
// Example 7 : Touch Position
#include <stdint.h>
#include <stdlib.h>
#include <TFTv2.h>
#include <SPI.h>
#include <SeeedTouchScreen.h> 
/// mega 2560 define pin////
#define YP A2   // must be an analog pin, use "An" notation!
#define XM A1   // must be an analog pin, use "An" notation!
#define YM 54   // can be a digital pin, this is A0
#define XP 57   // can be a digital pin, this is A3 

#define TS_MINX 116*2
#define TS_MAXX 890*2
#define TS_MAXY 83*2
#define TS_MINY 913*2

TouchScreen ts = TouchScreen(XP, YP, XM, YM);

void setup()
{  
  Serial.begin(115200);
    TFT_BL_ON;                // turn on the background light
    Tft.TFTinit();            // init TFT library
 
//    Tft.setDisplayDirect(LEFT2RIGHT);    
//    Tft.setDisplayDirect(DOWN2UP);
    Tft.drawString(" READ TOUCH VALUE",40,300,2,YELLOW);
}

void loop()
{
  Point p = ts.getPoint();
  p.x = map(p.x, TS_MINX, TS_MAXX, 0, 240);
  p.y = map(p.y, TS_MINY, TS_MAXY, 0, 320);
  if (p.z > __PRESURE) {     
       Serial.print("X = "); Serial.print(p.x);
       Serial.print("\tY = "); Serial.print(p.y);
       Serial.print("\tPressure = "); Serial.println(p.z);     
       Tft.fillCircle(p.x,p.y,2,RED ); // down center 
      }
}
