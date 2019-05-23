/*
  Reescritura ejercicio semáforo, manteniendo el uso de una función para el manejo de las luces,
  pero agregando temporizadores para atender varias tareas al mismo tiempo (por ejemplo, ciclar luces
  y estar atentos a la pulsación de un botón).
*/

// Incluimos la librería elapsedMillis, para manejar los temporizadores con una sintaxis más limpia
#include <elapsedMillis.h>

// Definimos las constantes para indicar los pines a utilizar y los tiempos de encendido de cada luz
const byte PIN_RJO = 3;
const byte PIN_VDE = 4;
const byte PIN_AMA = 5;
const byte INTERVALO_RJO = 5000;
const byte INTERVALO_VDE = 5000;
const byte INTERVALO_AMA = 3000;

// Agregamos un par de variables que nos servirán en el loop() para llevar
// un control de qué luz encender, y poder cambiar dinámicamente el tiempo que aguarda el temporizador
byte etapa = 1;
int intervalo = INTERVALO_RJO;

// Creamos un objeto de tipo elapsedMillis para manejar el temporizador
elapsedMillis timer1;

// Esta función simplemente apaga todas las luces y enciende por último la que indiquemos en el argumento "luz"
void gestionarLuz(byte luz) {
  digitalWrite(PIN_RJO, LOW);
  digitalWrite(PIN_VDE, LOW);
  digitalWrite(PIN_AMA, LOW);
  digitalWrite(luz, HIGH);
}

void setup() {
  // En este caso solo inicializamos los pines de las luces como salida
  // no estamos habilitando la consola serial ya que los mismos leds nos
  // indican visualmente si el código se está ejecutando de forma correcta.
  pinMode(PIN_RJO, OUTPUT);
  pinMode(PIN_VDE, OUTPUT);
  pinMode(PIN_AMA, OUTPUT);
}

void loop() {
  // Continuamente chequeamos si ha transcurrido un intervalo para cambio de luces
  // y dentro del propio if(), ajustamos la variable "intervalo" según se necesite.
  if (timer1 >= intervalo) {
    // "etapa" comienza en 1, nos permite llevar un control de si estamos en la
    // etapa del rojo, el verde o el amarillo.
    switch (etapa) {
      case 1:
        // Si etapa está en 1, significa que debemos encender el rojo, por ende
        // hacemos un llamado a la función "gestionarLuz()", pasándolo como argumento PIN_RJO
        gestionarLuz(PIN_RJO);
        // y luego cambiamos intervalo y etapa, para que la próxima vez que el if() genere una
        // condición verdadera, el switch() ejecute el case siguiente.
        intervalo = INTERVALO_VDE;
        etapa = 2;
        break;

      case 2:
        // idem anterior y actualizamos "etapa" e "intervalo" para el amarillo.
        gestionarLuz(PIN_VDE);
        intervalo = INTERVALO_AMA;
        etapa = 3;
        break;

      case 3:
        // idem anterior y actualizamos para retornar a la etapa 1 (rojo).
        gestionarLuz(PIN_AMA);
        intervalo = INTERVALO_RJO;
        etapa = 1;
    }
    // MUY IMPORTANTE, independientemente de cuál case se ejecute en cada momento, siempre
    // que el if() genera una condición verdadera, corremos el código y volvemos el timer
    // a cero para dejarlo listo para la próxima iteracción.
    timer1 = 0;
  }
}
