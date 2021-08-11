// Workshop 7 : TFT LCD Display
// Example 6 : TFT Command
#include <stdint.h>
#include <TFTv2.h>
#include <SPI.h>

void setup()
{
    TFT_BL_ON;                                          //turn on the background light 
    
    Tft.TFTinit();                                      //init TFT library             

    //-----------------------------------Draw Circle------------------------------------------------------------//
    // Tft.drawCircle(100, 100, 30,YELLOW);                //center: (100, 100), r = 30 ,color : YELLOW              
    
    // Tft.drawCircle(100, 200, 40,CYAN);                  //center: (100, 200), r = 10 ,color : CYAN  
    
    // Tft.fillCircle(200, 100, 30,RED);                   //center: (200, 100), r = 30 ,color : RED    
    
    // Tft.fillCircle(200, 200, 30,BLUE);                  //center: (200, 200), r = 30 ,color : BLUE 

    //-----------------------------------Draw Line-------------------------------------------------------------//
    // Tft.drawLine(0,0,239,319,RED);                      //start: (0, 0) end: (239, 319), color : RED
    
    // Tft.drawLine(239,0,0,319,BLUE);                     //start: (239, 0) end: (0, 319), color : BLUE
                                                        
    //-----------------------------------Draw Rectangle-------------------------------------------------------//
    // Tft.fillScreen();                                   //clear screen color : BLACK
    
    // Tft.fillRectangle(0, 0, 239,319,YELLOW);            //start: (0, 0) end: (239, 319), color : YELLOW
    
    // Tft.drawRectangle(100, 170, 120,60,BLUE);           //start: (100, 170), length x = 120, length y = 60, color : BLUE
    
    // Tft.drawRectangle(120, 60, 100,170,RED);            //start: (120, 60), length x = 100, length y = 170, color : RED

    //-----------------------------------Draw Char------------------------------------------------------------//
    // Tft.drawChar('O',0,0,1,RED);                        // draw char: 'O', (0, 0), size: 1, color: RED
    
    // Tft.drawChar('N',20,10,2,BLUE);                     // draw char: 'N', (20, 10), size: 2, color: BLUE
    
    // Tft.drawChar('E',40,30,3,GREEN);                    // draw char: 'E', (40, 30), size: 3, color: GREEN
    
    // Tft.drawChar('T',60,60,4,YELLOW);                   // draw char: 'T', (60, 60), size: 4, color: YELLOW
    
    // Tft.drawChar('H',80,100,4,CYAN);                    // draw char: 'H', (80, 100), size: 5, color: CYAN

    // Tft.drawChar('E',100,140,5,MAGENTA);                // draw char: 'E', (100, 140), size: 6, color: MAGENTA

    // Tft.drawChar('A',120,180,6,DARK_GREEN);             // draw char: 'A', (120, 180), size: 7, color: DARK_GREEN

    // Tft.drawChar('L',160,220,7,GRAY1);                  // draw char: 'L', (160, 220), size: 8, color: GRAY1

    // Tft.drawChar('L',200,260,8,WHITE);                  // draw char: 'L', (200, 260), size: 9, color: WHITE

    //-----------------------------------Draw String------------------------------------------------------------//
    //Tft.drawString("Hello",0,180,3,CYAN);                // draw string: "Hello", (0, 180), size: 3, color: CYAN
    
    //Tft.drawString("World!!",20,220,4,WHITE);            // draw string: "World!!", (20, 230), size: 4, color: WHITE

    //-----------------------------------Text Direction------------------------------------------------------------//
    //Tft.setDisplayDirect(LEFT2RIGHT);
    //Tft.drawString("UP",80,20,4,RED);                      // draw string: "UP", (80, 20), size: 4, color: RED

    //Tft.setDisplayDirect(DOWN2UP);
    //Tft.drawString("LEFT",20,220,4,BLUE);                  // draw string: "LEFT", (20, 220), size: 4, color: BLUE
  
    //Tft.setDisplayDirect(RIGHT2LEFT);
    //Tft.drawString("DOWN",180,300,4,GREEN);                // draw string: "DOWN", (180, 300), size: 4, color: GREEN
  
    //Tft.setDisplayDirect(UP2DOWN);
    //Tft.drawString("RIGHT",220,80,4,WHITE);                // draw string: "RIGHT", (220, 80), size: 4, color: WHITE
}

void loop()
{

}

/*********************************************************************************************************
  END FILE
*********************************************************************************************************/
