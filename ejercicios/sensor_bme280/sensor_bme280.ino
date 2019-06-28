#include <Wire.h>
#include <BME280I2C.h>

BME280I2C bme;

void sensarBME280() {
  float temp(NAN), hum(NAN), pres(NAN);

  BME280::TempUnit tempUnit(BME280::TempUnit_Celsius);
  BME280::PresUnit presUnit(BME280::PresUnit_hPa);

  bme.read(pres, temp, hum, tempUnit, presUnit);

  Serial.println("T: " + String(temp));
  Serial.println("P: " + String(pres));
  Serial.println("H: " + String(hum));
}

void setup() {
  Serial.begin(38400);
  Wire.begin();

  while (!bme.begin()) {
    Serial.println("No se detecta el sensor BME280");
    delay(1000);
  }
}

void loop() {
  sensarBME280();
  delay(1000);
}
