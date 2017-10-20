#include <LiquidCrystal.h>

LiquidCrystal lcd(1, 2, 4, 5, 6, 7);

void setup (){
  lcd.begin(16,20);
}
void loop() {
  lcd.print("Test");
  delay(3000);

  lcd.setCursor(2,1);
  lcd.print("LCD test 2");
  delay(3000);
  lcd.clear();

  lcd.blink();
  delay(4000);

  lcd.setCursor(7,1);
  delay(3000);
  lcd.noBlink();

  lcd.cursor();
  delay(4000);
  lcd.noCursor();

   lcd.clear();
  }

