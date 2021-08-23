#include <stdint.h>
#include <TFTv2.h>
#include <SPI.h>

int LM35 = 8;
float C = 0;

void setup() {
  // put your setup code here, to run once:
     TFT_BL_ON;
     Tft.TFTinit();
     Serial.begin(9600);
     pinMode(LM35,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
     int val = analogRead(LM35);
     C = (val * 5 * 100)/1024;
     Tft.
     Tft.drawFloat(C,60,150,4,RED);
     delay(2000);
     Tft.fillScreen(50, 180, 100, 200,BLACK);
     delay(200);
     //Serial.println(C,1);
     //delay(500);
}
