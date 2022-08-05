/*
 * Descrição: Exemplo de como usar o sensor de temperatura LM35.
 * Autor: Eros Vitor Bornatowski
 * Data: 24/07/2022
 */
 
#define PIN_LM35 A0

float temperatura;
 
void setup()
{
  Serial.begin(9600);
}
 
void loop()
{
  // Lê valor do sensor (0 a 1023, onde 0 é 0Volts e 1023 é 5Volts)
  float valor_sensor = float(analogRead(PIN_LM35));

  // Converte valor para tensão elétrica
  float tensao = (valor_sensor * 5) / 1023;

  // Calcula a temperatura (1 grau Celsius é 10mV)
  temperatura = tensao / 0.010;
  
  Serial.print("Temperatura: ");
  Serial.println(temperatura);
  
  delay(5000);
}
