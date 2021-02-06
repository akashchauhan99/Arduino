#Calender

/*
  LiquidCrystal Library - Hello World

 Demonstrates the use a 16x2 LCD display.  The LiquidCrystal
 library works with all LCD displays that are compatible with the
 Hitachi HD44780 driver. There are many of them out there, and you
 can usually tell them by the 16-pin interface.

 This sketch prints "Hello World!" to the LCD
 and shows the time.

  The circuit:
 * LCD RS pin to digital pin 12
 * LCD Enable pin to digital pin 11
 * LCD D4 pin to digital pin 5
 * LCD D5 pin to digital pin 4
 * LCD D6 pin to digital pin 3
 * LCD D7 pin to digital pin 2
 * LCD R/W pin to ground
 * LCD VSS pin to ground
 * LCD VCC pin to 5V
 * 10K resistor:
 * ends to +5V and ground
 * wiper to LCD VO pin (pin 3)

 Library originally added 18 Apr 2008
 by David A. Mellis
 library modified 5 Jul 2009
 by Limor Fried (http://www.ladyada.net)
 example added 9 Jul 2009
 by Tom Igoe
 modified 22 Nov 2010
 by Tom Igoe
 modified 7 Nov 2016
 by Arturo Guadalupi

 This example code is in the public domain.

 http://www.arduino.cc/en/Tutorial/LiquidCrystalHelloWorld

*/

// include the library code:
#include <LiquidCrystal.h>

// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
int d,m,y;
int b=0;
String w[] = {"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);

}

void loop() {
  for(y=2000;y>=2000;y++){
    //for month
 
    for(m=1;m<13;m++){
      if(m==1 or m==3 or m==5 or m==7 or m==9 or m==11){
        //for date
      for(int d=1;d<32;d++){
        if(b==7){
          b=0;
        }
        lcd.setCursor(0, 1);
        lcd.print(w[b]);
        b++;
        lcd.setCursor(0, 0);
        lcd.print(d);
        lcd.setCursor(2, 0);
        lcd.print('/');
        lcd.setCursor(4, 0);
        lcd.print(m);
        lcd.setCursor(6, 0);
        lcd.print('/');
        lcd.setCursor(7, 0);
        lcd.print(y);
        delay(200);
       lcd.clear();
      }
      lcd.clear();
      }
     else if(m==2){
      if(y%4==0){
        //for date
      for(int d=1;d<30;d++){
        if(b==7){
          b=0;
        }
        lcd.setCursor(0, 1);
        lcd.print(w[b]);
        b++;
        lcd.setCursor(0, 0);
        lcd.print(d);
        lcd.setCursor(2, 0);
        lcd.print('/');
        lcd.setCursor(4, 0);
        lcd.print(m);
        lcd.setCursor(6, 0);
        lcd.print('/');
        lcd.setCursor(7, 0);
        lcd.print(y);
        delay(200);
        lcd.clear();
      }
      lcd.clear();
      }else{
        for(int d=1;d<29;d++){
        if(b==7){
          b=0;
        }
        lcd.setCursor(0, 1);
        lcd.print(w[b]);
        b++;
        lcd.setCursor(0, 0);
        lcd.print(d);
        lcd.setCursor(2, 0);
        lcd.print('/');
        lcd.setCursor(4, 0);
        lcd.print(m);
        lcd.setCursor(6, 0);
        lcd.print('/');
        lcd.setCursor(7, 0);
        lcd.print(y);
        delay(200);
        lcd.clear();
      }
      lcd.clear();
      }
     }
     else if(m==4 or m==6 or m==8 or m==10 or m==12){
      //for date
      for(int d=1;d<31;d++){
        if(b==7){
          b=0;
        }
        lcd.setCursor(0, 1);
        lcd.print(w[b]);
        b++;
        lcd.setCursor(0, 0);
        lcd.print(d);
        lcd.setCursor(2, 0);
        lcd.print('/');
        lcd.setCursor(4, 0);
        lcd.print(m);
        lcd.setCursor(6, 0);
        lcd.print('/');
        lcd.setCursor(7, 0);
        lcd.print(y);
        delay(200);
        lcd.clear();
      }
      lcd.clear();
     }
   
     else{
      lcd.print('no value');
     }
    }
    lcd.clear();
  }
  lcd.clear();
}
