/*
 * Descrição: Exemplo de como acionar um motor DC.
 * Autor: Eros Vitor Bornatowski
 * Data: 28/07/2022
 */
 
#define PIN_BASE_TRANSISTOR 8

void setup()
{
  pinMode(PIN_BASE_TRANSISTOR, OUTPUT);
}

void loop()
{
  digitalWrite(PIN_BASE_TRANSISTOR, HIGH);
  delay(5000);

  digitalWrite(PIN_BASE_TRANSISTOR, LOW);
  delay(2000);
}
