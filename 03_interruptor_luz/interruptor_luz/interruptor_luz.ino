/*
 * Descrição: Exemplo de como utilizar push button para simular um interruptor de luz.
 * Autor: Eros Vitor Bornatowski
 * Data: 20/07/2022
 */
 
#define PIN_LED 8
#define PIN_BUTTON 9

int stateLED = LOW;
int prevStateButton = LOW;
int curStateButton = LOW;

void setup()
{
  pinMode(PIN_LED, OUTPUT);
  pinMode(PIN_BUTTON, INPUT);
  digitalWrite(PIN_LED, LOW);
}

void loop()
{
  prevStateButton = curStateButton;
  
  curStateButton = digitalRead(PIN_BUTTON);

  if (curStateButton == HIGH && prevStateButton == LOW) {
    stateLED = !stateLED;
    digitalWrite(PIN_LED, stateLED);
  }
}
