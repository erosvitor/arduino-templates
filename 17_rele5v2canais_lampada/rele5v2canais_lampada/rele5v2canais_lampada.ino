/*
 * Descrição: Exemplo de como utilizar um IR_VS1838 para identificar códigos de controles remoto.
 * Autor: Eros Vitor Bornatowski
 * Data: 25/07/2022
 */
 
#include <IRremote.hpp>

#define PIN_IR 8
#define PIN_RELE_CH1 9

uint32_t prevCode = 0;
uint32_t curCode = 0;

void setup()
{
  Serial.begin(9600);
  pinMode(PIN_RELE_CH1, OUTPUT);
  digitalWrite(PIN_RELE_CH1, HIGH); // RELÉ INICIA DESLIGADO
  IrReceiver.begin(PIN_IR, ENABLE_LED_FEEDBACK);
}

void loop()
{
  if (IrReceiver.decode()) {
    curCode = IrReceiver.decodedIRData.decodedRawData;
    if (curCode == 2148631564 && curCode != prevCode) {
      Serial.println("ligar lampada");
      digitalWrite(PIN_RELE_CH1, LOW);
    } else if (curCode == 2148598796 && curCode != prevCode) {
      Serial.println("desligar lampada");
      digitalWrite(PIN_RELE_CH1, HIGH);
    }
    prevCode = curCode;
    IrReceiver.resume(); // Enable receiving of the next value
  }
}
