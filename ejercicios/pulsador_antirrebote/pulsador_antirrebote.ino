/*
  Ejemplo de código antirrebote para pulsador mediante librería.
*/

// Incluimos la librería Bounce2
// Podemos hacerlo fácilmente buscándola mediante el gestor de bibliotecas.
#include <Bounce2.h>

const byte PIN_PULSADOR = 2;

// Generamos un objeto llamado pulsador, en base a la clase definida en la librería.
Bounce pulsador = Bounce();

void setup() {
  Serial.begin(38400);
  // Utilizamos el método attach del objeto para inicializar el pin
  // y habilitar su resistencia de pullup interna
  pulsador.attach(PIN_PULSADOR, INPUT_PULLUP);
  // Activamos un pequeño intervalo de espera para ayudar con la limpieza del rebote.
  pulsador.interval(30);
}

void loop() {
  // Si hay una actualización en el estado del pulsador
  if (pulsador.update()) {
    // Si la lectura es 0 (recordar que tenemos pullup_habilitado
    // por lo cual trabajamos con lógica negada: botón pulsado = 0
    if (!pulsador.read()) {
      Serial.println("Pulsado");
    }
  }
}
