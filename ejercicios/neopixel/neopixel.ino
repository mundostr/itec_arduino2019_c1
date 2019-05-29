/*
  Ejemplo de led programable PL9823 con librería Neopixel de Adafruit,
  incluyendo el uso de matriz bidimensional para guardar diferentes colores RGB
 */

#include <elapsedMillis.h>
#include <Adafruit_NeoPixel.h>

const byte MULTILED = 5;
const int FREC_LEDM = 3000;
const byte ITEMS_MATRIZ = 6;

byte ciclo = 0;
// Creamos la matriz bidireccional, guardando distintos colores RGB
// Recordar que los colores RGB se forman con Rojo (R), Verde (G) y Azul (B),
// cada valor yendo de 0 a 255. Negro es 0, 0, 0 y blanco 255, 255, 255.
// Por supuesto no estamos limitados a extremos, podemos encender por ejemplo
// al led en un blanco tenue, con un RGB 32, 32, 32.
byte matrizRGB[ITEMS_MATRIZ][3] = { {0, 0, 0}, {255, 0, 0}, {0, 255, 0}, {0, 0, 255}, {255, 255, 0}, {255, 255, 255} };

elapsedMillis timer1;
Adafruit_NeoPixel ledM = Adafruit_NeoPixel(1, MULTILED, NEO_GRB + NEO_KHZ800);

void setup() {
  Serial.begin(38400);
  ledM.begin();
}

void loop() {
  if (timer1 >= FREC_LEDM) {
    // Estas 3 instrucciones setean el color del led al indicado
    // setPixelColor recibe como primer argumento el ID del led al que queremos aplicar el color,
    // (recordar que podemos trabajar con muchos de estos leds conectados en cada).
    // En nuestro caso donde tenemos 1 solo led, el primer argumento será siempre 0.
    // Los otros 3 argumentos son respectivamente el valor de verde, rojo y azul.
    // (rojo y verde están invertidos porque los leds PL9823 son programados de esa manera.
    ledM.clear();
    ledM.setPixelColor(0, matrizRGB[ciclo][1], matrizRGB[ciclo][0], matrizRGB[ciclo][2]);
    ledM.show();
    ciclo++;
    if (ciclo == ITEMS_MATRIZ) {
      ciclo = 0;
    }
    timer1 = 0;
  }
}
