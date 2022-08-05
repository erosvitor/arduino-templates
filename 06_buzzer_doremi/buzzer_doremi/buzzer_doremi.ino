/*
 * Descrição: Exemplo de como utilizar buzzer para reproduzir sons.
 * Autor: Eros Vitor Bornatowski
 * Data: 24/07/2022
 */

#define PIN_BUZZER 9

#define DO  262
#define RE  294
#define MI  330
#define FA  349
#define SOL  392
#define LA  440
#define SI  494

int melodia[] = {
  DO, RE, MI, FA,
  FA, FA,
  DO, RE, DO, RE, RE, RE,
  DO, SOL, FA, MI, MI, MI,
  DO, RE, MI, FA, FA, FA
};

void setup()
{
  pinMode(PIN_BUZZER, OUTPUT);
}

void loop()
{
  for (int i=0; i<24; i++) {
    tone(PIN_BUZZER, melodia[i]);
    delay(500);
  }
  noTone(PIN_BUZZER);
  delay(1000);
}
