/*
  Uso de display Hitachi 16x2 sin I2C mediante librería LiquidCrystal

  LCD / Arduino
  GND (VSS) a GND
  VCC a 5V
  V0 a 5V o Pot
  RS a pin 12
  RW a GND
  Enable (E) a pin 11
  D4 a pin 5
  D5 a pin 4
  D6 a pin 3
  D7 a pin 2
  A a 5V con resistencia 10k
  K a GND
*/

#include <LiquidCrystal.h>

// Simplemente inicializamos el objeto según los pines utilizados
// RS, Enable, D4, D5, D6, D7.
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  // Activamos el lcd de 16 x 2 en este caso
  lcd.begin(16, 2);
  // Posicionamos el puntero en la primer columna (0), y segunda fija (1).
  lcd.setCursor(0, 1);
  // Simplemente imprimimos con el método print el texto deseado
  lcd.print("Bienvenido!");
  delay(3000);
}

void loop() {
  lcd.setCursor(0, 1);
  lcd.print(millis() / 1000);
  delay(1000);
  lcd.clear();
}
