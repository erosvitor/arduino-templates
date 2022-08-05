/*
 * Descrição: Exemplo de como utilizar display LCD 16x2.
 * Autor: Eros Vitor Bornatowski
 * Data: 26/07/2022
 */
 
#include <LiquidCrystal.h>

LiquidCrystal lcd(7,6,5,4,3,2);

void setup()
{
  lcd.begin(16, 2);
  lcd.clear();
}

void loop()
{
  // Coluna 0, Linha 0
  lcd.setCursor(3,0);
  lcd.print("Curso Arduino");

  // Coluna 0, Linha 1
  lcd.setCursor(3,1);
  lcd.print("LCD 16x2");

  for (int pos=0; pos < 3; pos++) {
    lcd.scrollDisplayLeft();
    delay(200);
  }

  for (int pos=0; pos < 3; pos++) {
    lcd.scrollDisplayRight();
    delay(200);
  }
}
