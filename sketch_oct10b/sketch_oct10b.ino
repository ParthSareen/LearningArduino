#include <LiquidCrystal.h>

LiquidCrystal lcd(1,2,8,9,10,11);
void setup (){
  lcd.begin(16,20);
}

void loop () {
  lcd.print("Hello Parth"); 
}

