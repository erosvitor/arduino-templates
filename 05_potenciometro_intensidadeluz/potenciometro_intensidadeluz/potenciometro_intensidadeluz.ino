/*
 * Descrição: Exemplo de como utilizar potenciômetro linear para controlar a intensidade do LED.
 * Autor: Eros Vitor Bornatowski
 * Data: 21/07/2022
 */

#define PIN_POT A0
#define PIN_LED 9

int valuePOT = 0;
int brightnessLED = 0;

void setup()
{
  pinMode(PIN_POT, INPUT);
  pinMode(PIN_LED, OUTPUT);
}

void loop()
{
  valuePOT = analogRead(PIN_POT);

  // A função map() transforma uma escala de 0-1023 em uma escala 0 a 255
  // 0 a 255 é o valor que pode ser escrito numa porta PWM (~)
  brightnessLED = map(valuePOT, 0, 1023, 0, 255);

  analogWrite(PIN_LED, brightnessLED);
}
