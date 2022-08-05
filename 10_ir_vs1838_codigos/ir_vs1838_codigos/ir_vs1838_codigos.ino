/*
 * Descrição: Exemplo de como utilizar um IR_VS1838 para identificar códigos de controles remoto.
 * Autor: Eros Vitor Bornatowski
 * Data: 25/07/2022
 */
 
#include <IRremote.hpp>

#define PIN_IR 8

uint32_t decodedRawData = 0;

void setup()
{
  Serial.begin(9600);
  IrReceiver.begin(PIN_IR, ENABLE_LED_FEEDBACK);
}

void loop()
{
  if (IrReceiver.decode()) {
    decodedRawData = IrReceiver.decodedIRData.decodedRawData;
    if (decodedRawData > 0) {
      Serial.println(decodedRawData);
    }  
    IrReceiver.resume(); // Enable receiving of the next value
  }
}
