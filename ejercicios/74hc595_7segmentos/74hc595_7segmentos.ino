/*
  Ejemplo utilización de dígito de 7 segmentos con integrado 74HC595.
  El dígito es de ánodo común, es decir, el pin común va
  a VCC y cada pin de segmento se debe conectar a GND.
  Por esta razón, al momento de hacer el traslado del registro con shiftOut,
  debemos tener en cuenta que la lógica quedará negada.
*/

#include <Arduino.h>

const byte PIN_LATCH = 25; // pin 12 595
const byte PIN_DATOS = 26; // pin 14 595
const byte PIN_CLOCK = 27; // pin 11 595

// Estos números se obtienen del valor binario negado del dígito,
// pasado a decimal. Con 8 bits, para el 0 deberíamos iluminar los
// 6 primeros, el binario negado nos quedaría 11000000, estando en 1
// las posiciones de 128 y 64.
const byte DIGITOS[16] = {
  192,  // 0
  249,  // 1
  164,  // 2
  176,  // 3
  153,  // 4
  146,  // 5
  130,  // 6
  248,  // 7
  128,  // 8
  152,  // 9
  136,  // A
  131,  // b
  198,  // C
  161,  // d
  134,  // E
  142,  // F
};

void setup() {
  pinMode(PIN_LATCH, OUTPUT);
  pinMode(PIN_DATOS, OUTPUT);
  pinMode(PIN_CLOCK, OUTPUT);
}

void loop() {
  for (byte i = 0; i < 16; i++) {
    // El pin de latch opera negado, lo bajamos cuando comenzamos
    // la escritura y lo subimos al finalizar
    digitalWrite(PIN_LATCH, LOW);
    // La función shiftOut toma un byte en serie y lo saca
    // en paralelo a las 8 salidas del integrado
    shiftOut(PIN_DATOS, PIN_CLOCK, MSBFIRST, DIGITOS[i]);
    digitalWrite(PIN_LATCH, HIGH);
    delay(1000);
  }
}
