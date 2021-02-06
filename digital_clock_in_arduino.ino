//Digital clock in arduino

#include <LiquidCrystal.h>

// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
int hh,mm,ss;
 
void setup() {
   // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  pinMode(8, INPUT);
  pinMode(9, INPUT);
}

void loop() {
 
  //for hour
  for(hh=0;hh<24;hh++){
    // for minutes
    for(mm=0;mm<60;mm++){
      //for second
      for(ss = 0;ss<60;ss++){
        //For ':' Blinking
        lcd.setCursor(2, 0);
        lcd.print(':');
        lcd.setCursor(5, 0);
        lcd.print(':');
        delay(500);
        lcd.setCursor(2, 0);
        lcd.print(' ');
        lcd.setCursor(5, 0);
        lcd.print(' ');
        lcd.setCursor(0, 0);
        lcd.print(hh);
        lcd.setCursor(3, 0);
        lcd.print(mm);
        lcd.setCursor(6, 0);
        lcd.print(ss);
        }
        lcd.clear();
     }
   lcd.clear();
  }
  lcd.clear();
}
 
  
