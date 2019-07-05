#include <BME280I2C.h>
#include <Wire.h>

float temp(NAN), hum(NAN), pres(NAN);

BME280I2C bme;

void setup() {
  Serial.begin(115200);
  Wire.begin();
  while(!bme.begin()) {
    Serial.println("No se detecta el sensor BME280");
    delay(1000);
  }
}

void loop() {
   leerSensor();
   delay(500);
}

void leerSensor () {
   BME280::TempUnit tempUnit(BME280::TempUnit_Celsius);
   BME280::PresUnit presUnit(BME280::PresUnit_Pa);

   bme.read(pres, temp, hum, tempUnit, presUnit);

   Serial.println(temp);
}
