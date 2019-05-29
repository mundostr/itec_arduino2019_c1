#include <elapsedMillis.h>
#include <Adafruit_NeoPixel.h>

const byte PIN_MULTILED = 5;
const byte PIN_PULSADOR = 2;
const int INTERVALO_RJO = 5000;
const int INTERVALO_VDE = 5000;
const int INTERVALO_AMA = 3000;
const int INTERVALO_PAR = 1000;

byte etapa = 1;
int intervalo = INTERVALO_RJO;
volatile boolean todoOk = true;
boolean intermitente = false;

elapsedMillis timer1;
Adafruit_NeoPixel ledM = Adafruit_NeoPixel(1, PIN_MULTILED, NEO_GRB + NEO_KHZ800);

void setup() {
  ledM.begin();
  ledM.setPixelColor(0, 0, 255, 0);
  ledM.show();
  pinMode(PIN_PULSADOR, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(PIN_PULSADOR), paradaEmergencia, FALLING);
}

void loop() {
  if (timer1 >= intervalo) {
    if (todoOk) {
      ledM.clear();
      switch (etapa) {
        case 1:
          ledM.setPixelColor(0, 255, 0, 0);
          intervalo = INTERVALO_VDE;
          etapa = 2;
          break;
  
        case 2:
          ledM.setPixelColor(0, 255, 255, 0);
          intervalo = INTERVALO_AMA;
          etapa = 3;
          break;
  
        case 3:
          ledM.setPixelColor(0, 0, 255, 0);
          intervalo = INTERVALO_RJO;
          etapa = 1;
      }
      ledM.show();
    } else {
      intervalo = INTERVALO_PAR;
      intermitente = !intermitente;
      intermitente ? ledM.setPixelColor(0, 255, 255, 0) : ledM.setPixelColor(0, 0, 0, 0);
      ledM.show();
    }
    timer1 = 0;
  }
}

void paradaEmergencia() {
  todoOk = !todoOk;
  ledM.setPixelColor(0, 0, 0, 0);
  ledM.show();
}
