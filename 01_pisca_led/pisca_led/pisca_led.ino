/*
 * Descrição: Exemplo de como fazer um LED difuso piscar.
 * Autor: Eros Vitor Bornatowski
 * Data: 16/07/2022
 */

#define PIN_LED 8

void setup()
{
  pinMode(PIN_LED, OUTPUT);
}
 
void loop()
{
  digitalWrite(PIN_LED, HIGH);
  delay(1000);
   
  digitalWrite(PIN_LED, LOW);
  delay(1000);
}
