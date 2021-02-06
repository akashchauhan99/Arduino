#Analog to Digital Converter

#include <LiquidCrystal.h>

// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  // put your setup code here, to run once:
  pinMode(A0, INPUT);
  lcd.begin(16, 2);
  pinMode(7, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(13, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  float resolution = 1023, sVoltage = 5,adcReading;
  float avMeasured;
  int x = analogRead(A0);
  adcReading = x;
  avMeasured = (adcReading*sVoltage)/resolution;
  lcd.setCursor(0, 0);
  lcd.print(x);
  lcd.setCursor(0, 1);
  lcd.print(avMeasured);
  if(adcReading<=100){
    digitalWrite(7, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(7, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);
  }else if(adcReading>=101 and adcReading<=200){
    digitalWrite(9, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(9, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);
  }else if(adcReading>=201 and adcReading<=300){
    digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);
  }else{
    lcd.setCursor(9, 1);
    lcd.print("Nothing");
  }
}
