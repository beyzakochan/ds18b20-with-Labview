#include <OneWire.h>
#include <DallasTemperature.h>

OneWire oneWire(2);

DallasTemperature sensors(&oneWire);

void setup() {
  delay(500);
  Serial.begin(115200);
  sensors.begin();
  
}

void loop() {
  sensors.requestTemperatures();
  float temp = sensors.getTempCByIndex(0);
  Serial.println(temp);
  
}
