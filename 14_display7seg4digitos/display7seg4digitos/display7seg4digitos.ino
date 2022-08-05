/*
 * Descrição: Exemplo de como utilizar display 7 segmentos 4 digitos TM1637.
 * Autor: Eros Vitor Bornatowski
 * Data: 26/07/2022
 */
 
#include <Arduino.h>
#include <TM1637Display.h>

#define PIN_CLK 8
#define PIN_DIO 9
#define DELAY 1000

TM1637Display display(CLK, DIO);   // inicializa o objeto

void setup()
{
  uint8_t data[] = { 0xff, 0xff, 0xff, 0xff };

  // Liga o display
  display.setBrightness(7, true);
  display.setSegments(data);

  // Mostra número 321 com zero à esquerda
  display.showNumberDec(321, true);
  delay(DELAY);

  // Mostra número 321 sem zero à esquerda
  display.showNumberDec(321, false);
  delay(DELAY);

  // Mostra número -27 sem zero à esquerda
  display.showNumberDec(-27, false);
  delay(DELAY);

  // Mostra números 0 a 20
  for (int i=0; i <= 20; i++) {
    display.showNumberDec(i, false);
    delay(100);
  }

  // Intensidade do brilho
  for (int k = 0; k < 4; k++) {
    data[k] = 0xff;
  }
  for (int k = 0; k < 7; k++) {
    display.setBrightness(k);
    display.setSegments(data);
    delay(DELAY);
  }

  // Desliga o display
  display.setBrightness(7, false);
  display.setSegments(data);
}

void loop()
{

}
