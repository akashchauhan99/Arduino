//drag string at lcd display

// include the library code:
#include <LiquidCrystal.h>

// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
}

void loop() {
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  //lcd.setCursor(0, 0);


  for(int i = 0; i<15; i++){
    lcd.setCursor(i, 0); // i will choose row
    lcd.print("Akash");
    delay(150);
    lcd.clear();
 
     
  }
  for(int i = 0; i<15; i++){
    lcd.setCursor(i, 1);
    lcd.print("Akash");
    delay(150);
    lcd.clear();
  }
}
