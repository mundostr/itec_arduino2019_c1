/*
  Uso de potenciómetro para repaso de lectura analógica
  Agregado de función map() para extrapolación de valores entre rango ADC y rango analogWrite
 */

#include <elapsedMillis.h>

const byte PIN_LED = 11;
const byte PIN_POT = 14; // A0
const byte FREC_POT = 100;

int lectura, lecturaMap;

elapsedMillis timer1;

void setup() {
  Serial.begin(38400);
  pinMode(PIN_POT, INPUT);
  pinMode(PIN_LED, OUTPUT);
}

void loop() {
  if (timer1 >= FREC_POT) {
    // Así como estamos habituados a realizar operaciones digitalRead sobre pines digitales,
    // podemos hacer lo mismo sobre analógicos (A0 a A6 en el caso de Arduino UNO) con analogRed.
    // analogRead nos va a devolver un valor numérico entre 0 y 1023, proporcional al voltaje que
    // reciba el pin. Este rango obedece a que el conversor analógico digital (ADC) del Arduino
    // UNO, tiene una resolución de 8 bits (1024 valores diferentes).
    lectura = analogRead(PIN_POT);
    // map() nos permite extrapolar un valor de un rango a otro, en este caso el de la variable
    // "lectura", siendo el rango original 0 a 1023, y el destino 0 a 255.
    // por ende lectura = 0 => lecturaMap = 0, lectura = 1023 => lecturaMap = 255,
    // lectura = 512 => lecturaMap = 128, etc.
    lecturaMap = map(lectura, 0, 1023, 0, 255);
    Serial.println(String(lectura) + ", " + String(lecturaMap));
    // La extrapolación que hicimos con map() es necesaria, ya que analogWrite en el caso de
    // Arduino UNO, solo opera en un rango de 0 a 255.
    analogWrite(PIN_LED, lecturaMap);
    timer1 = 0;
  }
}
