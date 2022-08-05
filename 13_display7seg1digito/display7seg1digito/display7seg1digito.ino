/*
 * Descrição: Exemplo de como utilizar display 7 segmentos 1 dígito.
 * Autor: Eros Vitor Bornatowski
 * Data: 26/07/2022
 */
 
#define PIN_SEG_B 2
#define PIN_SEG_A 3
#define PIN_SEG_F 4
#define PIN_SEG_G 5
#define PIN_SEG_C 8
#define PIN_SEG_D 9
#define PIN_SEG_E 10

#define ON 1
#define OFF 0
 
void setup()
{
  pinMode(PIN_SEG_B, OUTPUT);
  pinMode(PIN_SEG_A, OUTPUT);
  pinMode(PIN_SEG_F, OUTPUT);
  pinMode(PIN_SEG_G, OUTPUT);
  pinMode(PIN_SEG_C, OUTPUT);
  pinMode(PIN_SEG_D, OUTPUT);
  pinMode(PIN_SEG_E, OUTPUT);
}
 
void loop()
{
  for (int i=0; i <= 9; i++) {
    showNumber(i);
    delay(1000);
  }
}

void showNumber(int number) {
  switch (number) {
    case 0: showNumber0(); break;
    case 1: showNumber1(); break;
    case 2: showNumber2(); break;
    case 3: showNumber3(); break;
    case 4: showNumber4(); break;
    case 5: showNumber5(); break;
    case 6: showNumber6(); break;
    case 7: showNumber7(); break;
    case 8: showNumber8(); break;
    case 9: showNumber9(); break;
  }
}

void showNumber0() {
  digitalWrite(PIN_SEG_B, ON);
  digitalWrite(PIN_SEG_A, ON);
  digitalWrite(PIN_SEG_F, ON);
  digitalWrite(PIN_SEG_G, OFF);
  digitalWrite(PIN_SEG_C, ON);
  digitalWrite(PIN_SEG_D, ON);
  digitalWrite(PIN_SEG_E, ON);  
}

void showNumber1() {
  digitalWrite(PIN_SEG_B, ON);
  digitalWrite(PIN_SEG_A, OFF);
  digitalWrite(PIN_SEG_F, OFF);
  digitalWrite(PIN_SEG_G, OFF);
  digitalWrite(PIN_SEG_C, ON);
  digitalWrite(PIN_SEG_D, OFF);
  digitalWrite(PIN_SEG_E, OFF);  
}

void showNumber2() {
  digitalWrite(PIN_SEG_B, ON);
  digitalWrite(PIN_SEG_A, ON);
  digitalWrite(PIN_SEG_F, OFF);
  digitalWrite(PIN_SEG_G, ON);
  digitalWrite(PIN_SEG_C, OFF);
  digitalWrite(PIN_SEG_D, ON);
  digitalWrite(PIN_SEG_E, ON);  
}

void showNumber3() {
  digitalWrite(PIN_SEG_B, ON);
  digitalWrite(PIN_SEG_A, ON);
  digitalWrite(PIN_SEG_F, OFF);
  digitalWrite(PIN_SEG_G, ON);
  digitalWrite(PIN_SEG_C, ON);
  digitalWrite(PIN_SEG_D, ON);
  digitalWrite(PIN_SEG_E, OFF);  
}

void showNumber4() {
  digitalWrite(PIN_SEG_B, ON);
  digitalWrite(PIN_SEG_A, OFF);
  digitalWrite(PIN_SEG_F, ON);
  digitalWrite(PIN_SEG_G, ON);
  digitalWrite(PIN_SEG_C, ON);
  digitalWrite(PIN_SEG_D, OFF);
  digitalWrite(PIN_SEG_E, OFF);  
}

void showNumber5() {
  digitalWrite(PIN_SEG_B, OFF);
  digitalWrite(PIN_SEG_A, ON);
  digitalWrite(PIN_SEG_F, ON);
  digitalWrite(PIN_SEG_G, ON);
  digitalWrite(PIN_SEG_C, ON);
  digitalWrite(PIN_SEG_D, ON);
  digitalWrite(PIN_SEG_E, OFF);  
}

void showNumber6() {
  digitalWrite(PIN_SEG_B, OFF);
  digitalWrite(PIN_SEG_A, ON);
  digitalWrite(PIN_SEG_F, ON);
  digitalWrite(PIN_SEG_G, ON);
  digitalWrite(PIN_SEG_C, ON);
  digitalWrite(PIN_SEG_D, ON);
  digitalWrite(PIN_SEG_E, ON);  
}

void showNumber7() {
  digitalWrite(PIN_SEG_B, ON);
  digitalWrite(PIN_SEG_A, ON);
  digitalWrite(PIN_SEG_F, OFF);
  digitalWrite(PIN_SEG_G, OFF);
  digitalWrite(PIN_SEG_C, ON);
  digitalWrite(PIN_SEG_D, OFF);
  digitalWrite(PIN_SEG_E, OFF);  
}

void showNumber8() {
  digitalWrite(PIN_SEG_B, ON);
  digitalWrite(PIN_SEG_A, ON);
  digitalWrite(PIN_SEG_F, ON);
  digitalWrite(PIN_SEG_G, ON);
  digitalWrite(PIN_SEG_C, ON);
  digitalWrite(PIN_SEG_D, ON);
  digitalWrite(PIN_SEG_E, ON);  
}

void showNumber9() {
  digitalWrite(PIN_SEG_B, ON);
  digitalWrite(PIN_SEG_A, ON);
  digitalWrite(PIN_SEG_F, ON);
  digitalWrite(PIN_SEG_G, ON);
  digitalWrite(PIN_SEG_C, ON);
  digitalWrite(PIN_SEG_D, OFF);
  digitalWrite(PIN_SEG_E, OFF);  
}
