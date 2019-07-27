#include <Arduino.h>
#include <U8g2lib.h>
#include <Wire.h>

U8G2_SSD1306_128X64_NONAME_1_HW_I2C u8g2(/* rotation=*/ U8G2_R0, /* reset=*/ U8X8_PIN_NONE);

int i = 0;

void setup() {
  
    u8g2.begin();

    u8g2.enableUTF8Print(); 
}

void loop() {

    u8g2.firstPage();
    do {

      u8g2.setFont(u8g2_font_fur49_tn);
      u8g2.setCursor(5, 55);
      u8g2.print(i); 
      
    } while ( u8g2.nextPage() );

    i++;

    delay(500);
}
