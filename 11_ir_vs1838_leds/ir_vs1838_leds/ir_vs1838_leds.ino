/*
 * Descrição: Exemplo de como utilizar um IR_VS1838 para ligar LEDs.
 * Autor: Eros Vitor Bornatowski
 * Data: 25/07/2022
 */
 
#include <IRremote.hpp>

#define PIN_IR 8
#define PIN_LED_RED 7
#define PIN_LED_GREEN 6
#define PIN_LED_BLUE 5

uint32_t decodedRawData = 0;

void setup()
{
  pinMode(PIN_LED_RED, OUTPUT);
  pinMode(PIN_LED_GREEN, OUTPUT);
  pinMode(PIN_LED_BLUE, OUTPUT);
  
  IrReceiver.begin(PIN_IR, ENABLE_LED_FEEDBACK);
}

void loop()
{
  if (IrReceiver.decode()) {
    decodedRawData = IrReceiver.decodedIRData.decodedRawData;
    if (decodedRawData == 4211404544) {  // Red
      digitalWrite(PIN_LED_RED, HIGH);
      digitalWrite(PIN_LED_GREEN, LOW);
      digitalWrite(PIN_LED_BLUE, LOW);
    } else if (decodedRawData == 4194692864) {  // Green
      digitalWrite(PIN_LED_RED, LOW);
      digitalWrite(PIN_LED_GREEN, HIGH);
      digitalWrite(PIN_LED_BLUE, LOW);
    } else if (decodedRawData == 4177981184) {  // Blue
      // Nothing
    } else if (decodedRawData == 4161269504) {  // White
      digitalWrite(PIN_LED_RED, LOW);
      digitalWrite(PIN_LED_GREEN, LOW);
      digitalWrite(PIN_LED_BLUE, HIGH);
    }
    IrReceiver.resume(); // Enable receiving of the next value
  }
}
