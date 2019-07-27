#include <Arduino.h>
#include <U8g2lib.h>
#include <Wire.h>

U8G2_SSD1306_128X64_NONAME_F_HW_I2C u8g2(/* rotation=*/ U8G2_R0, /* reset=*/ U8X8_PIN_NONE);

void setup() {
  
    u8g2.begin();

    u8g2.enableUTF8Print(); 
}

void loop() {

    u8g2.clearBuffer();

    u8g2.setFont(u8g2_font_10x20_tf);
  
    u8g2.setCursor(30, 15);
    u8g2.print("Estylos");

    u8g2.sendBuffer();

    delay(1000);
  

    u8g2.setCursor(10, 55); 
    u8g2.print("Présente...");

    u8g2.sendBuffer();

    delay(2000);
  
  
    u8g2.clearBuffer();

    u8g2.setCursor(25, 17);
    u8g2.print("Utiliser");

    u8g2.setCursor(25, 37); 
    u8g2.print("un écran");

    u8g2.setCursor(6, 57);
    u8g2.print("OLED avec...");

    u8g2.sendBuffer();

    delay(2000);
  

    u8g2.clearBuffer();
  
    drawLogo();
    drawURL();
  
    u8g2.sendBuffer();

    delay(30000);
}
