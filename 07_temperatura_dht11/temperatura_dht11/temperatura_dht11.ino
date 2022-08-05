/*
 * Descrição: Exemplo de como usar o sensor de temperatura DHT11.
 * Autor: Eros Vitor Bornatowski
 * Data: 24/07/2022
 */
 
#include <DHT.h>

#define PIN_DHT 8
#define DHT_TYPE DHT11

DHT dht(PIN_DHT, DHT_TYPE);

void setup()
{
  // Initialize DHT
  dht.begin();

  // Initialize monitor serial
  Serial.begin(9600);
}

void loop()
{
  float h = dht.readHumidity();

  // Temperature in Celsius
  float tc = dht.readTemperature();

  if (isnan(h) || isnan(tc)) {
    Serial.println(F("Failed to read from DHT sensor!"));
    return;
  }

  Serial.print(F("Humidity: "));
  Serial.print(h);

  Serial.print(F("%  Temperature: "));
  Serial.print(tc);
  Serial.print(F("°C "));
  Serial.println("");

  delay(5000);
}
