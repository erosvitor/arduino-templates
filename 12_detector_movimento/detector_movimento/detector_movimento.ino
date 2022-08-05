/*
 * Descrição: Exemplo de como utilizar o sensor de presença PIR.
 * Autor: Eros Vitor Bornatowski
 * Data: 27/07/2022
 */

#define PIN_PIR 8

int valuePIR;
 
void setup()
{
  pinMode(PIN_PIR, INPUT);
  Serial.begin(9600);
}

void loop()
{
  valuePIR = digitalRead(PIN_PIR);

  if (valuePIR == HIGH) {
    Serial.println("movimento");
  } else {
    Serial.println("------");
  }
}
