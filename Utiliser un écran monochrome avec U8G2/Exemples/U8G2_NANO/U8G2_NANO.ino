#include <Arduino.h>
#include <U8g2lib.h>
#include <Wire.h>

U8G2_SSD1306_128X64_NONAME_1_HW_I2C u8g2(/* rotation=*/ U8G2_R0, /* reset=*/ U8X8_PIN_NONE);

void setup() {
  
    u8g2.begin();

    u8g2.enableUTF8Print(); 
}

void loop() {

    u8g2.firstPage();
    do {


      u8g2.setFont(u8g2_font_10x20_tf);
    
      u8g2.drawBox(0, 0, 128, 20);

      u8g2.setDrawColor(0);
      u8g2.setCursor(45, 15);
      u8g2.print("U8g2");
      u8g2.setDrawColor(1);

      u8g2.setCursor(5, 40); 
      u8g2.print("Arduino Nano");

      u8g2.setCursor(30, 62); 
      u8g2.print("SSD1306");

    
    } while ( u8g2.nextPage() );


    delay(10000);
}
