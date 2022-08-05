/*
 * Descrição: Exemplo de como utilizar um LDR.
 * Autor: Eros Vitor Bornatowski
 * Data: 25/07/2022
 */

#define PIN_LDR A0
#define PIN_LED 8

// O valor da luz de referência esta relacionado ao ambiente onde o LDR será utilizado.
// Para calibrar o valor de referência, utilize o monitor serial e verifique qual o valor
// médio gerado para a luz ambiente. 
const int REF_VALUE_LIGHT = 500;

int valueLight = 0;

void setup()
{
  pinMode(PIN_LED, OUTPUT);
  Serial.begin(9600);
}
 
void loop()
{
  valueLight = analogRead(PIN_LDR);
  Serial.println(valueLight);

  if (valueLight > REF_VALUE_LIGHT) {
    digitalWrite(PIN_LED, HIGH);
  } else {
    digitalWrite(PIN_LED, LOW);
  }

  delay(2000);
}
