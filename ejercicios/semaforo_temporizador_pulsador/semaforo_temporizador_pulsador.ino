#include <Bounce2.h>
#include <elapsedMillis.h>

const byte PIN_RJO = 11;
const byte PIN_VDE = 13;
const byte PIN_AMA = 12;
const byte PIN_PULSADOR = 2;
const int INTERVALO_RJO = 5000;
const int INTERVALO_VDE = 5000;
const int INTERVALO_AMA = 3000;

byte etapa = 1;
int intervalo = INTERVALO_RJO;
bool iniciado = false;

elapsedMillis timer1;
Bounce pulsador = Bounce();

void gestionarLuz(byte luz) {
  digitalWrite(PIN_RJO, LOW);
  digitalWrite(PIN_VDE, LOW);
  digitalWrite(PIN_AMA, LOW);
  digitalWrite(luz, HIGH);

}

void setup() {
  Serial.begin(38400);
  pinMode(PIN_RJO, OUTPUT);
  pinMode(PIN_VDE, OUTPUT);
  pinMode(PIN_AMA, OUTPUT);
  pulsador.attach(PIN_PULSADOR, INPUT_PULLUP);
  pulsador.interval(30);
  Serial.println("SISTEMA EN ESPERA");

  while (!iniciado) {
    if (pulsador.update()) {
      if (pulsador.fell()) {
        iniciado = true;
      }
    }
  }
}

void loop() {
  if (pulsador.update()) {
    if (pulsador.fell()) {
      iniciado = !iniciado;
      gestionarLuz(0);
    }
  }

  if (iniciado) {
    if (timer1 >= intervalo) {
      Serial.println("Secuencia iniciada");
      switch (etapa) {
        case 1:
          gestionarLuz(PIN_RJO);
          intervalo = INTERVALO_VDE;
          etapa = 2;
          break;

        case 2:
          gestionarLuz(PIN_VDE);
          intervalo = INTERVALO_AMA;
          etapa = 3;
          break;

        case 3:
          gestionarLuz(PIN_AMA);
          intervalo = INTERVALO_RJO;
          etapa = 1;
      }
      timer1 = 0;
    }
  }
}
