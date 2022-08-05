/*
 * Descrição: Exemplo de como utilizar LEDs difusos para simular um semáforo.
 * Autor: Eros Vitor Bornatowski
 * Data: 16/07/2022
 */

#define PIN_LED_GREEN 8
#define PIN_LED_YELLOW 9
#define PIN_LED_RED 10

void setup()
{
  pinMode(PIN_LED_GREEN, OUTPUT);
  pinMode(PIN_LED_YELLOW, OUTPUT);
  pinMode(PIN_LED_RED, OUTPUT);

  digitalWrite(PIN_LED_GREEN, LOW);
  digitalWrite(PIN_LED_YELLOW, LOW);
  digitalWrite(PIN_LED_RED, LOW);
}

void loop()
{
  digitalWrite(PIN_LED_GREEN, HIGH);
  delay(5000); 
  
  digitalWrite(PIN_LED_GREEN, LOW);
  digitalWrite(PIN_LED_YELLOW, HIGH);
  delay(3000);
  
  digitalWrite(PIN_LED_YELLOW, LOW);
  digitalWrite(PIN_LED_RED, HIGH);
  delay(5000);

  digitalWrite(PIN_LED_RED, LOW);  
}
