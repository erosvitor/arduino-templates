/*
 * Descrição: Exemplo de como monitorar valores do potenciômetro linear.
 * Autor: Eros Vitor Bornatowski
 * Data: 21/07/2022
 */

#define PIN_POT A0

int prevValuePOT = 0;
int curValuePOT = 0;

void setup()
{
  pinMode(PIN_POT, INPUT);
  Serial.begin(9600);
}

void loop()
{
  curValuePOT = analogRead(PIN_POT);
  
  if (curValuePOT != prevValuePOT) {
    Serial.println(curValuePOT);
    prevValuePOT = curValuePOT;
  }  
}
