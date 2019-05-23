/*
  Variante ejercicio semáforo, manteniendo el uso de funciones y timer único, con el agregado
  de una matriz para el manejo de luces.
*/

#include <elapsedMillis.h>

const byte CTD_LUCES = 3;
// Definimos un par de matrices simples para almacenar los pines y tiempos de las luces,
// lo cual nos permitirá manejar de forma más cómoda las variables mediante un ciclo.
const byte luces[CTD_LUCES] = {11, 13, 12}; // Rojo, verde, amarillo
const int tiempos[CTD_LUCES] = {3000, 3000, 3000};
// Nos aseguramos de inicializar etapa (recordar que las matrices operan desde índice 0)
byte etapa = 0;

elapsedMillis timer1;

// Nuevamente una función para gestionar las luces, en este caso aprovechando la matriz
// podemos ciclarla mediante un for(), apagando todas las luces y encendiendo finalmente
// la que corresponda según el valor actual de "etapa".
void gestionarLuces() {
  for (byte x = 0; x < CTD_LUCES; x++) {
    digitalWrite(luces[x], LOW);
  }
  digitalWrite(luces[etapa], HIGH);
}

void setup() {
  // Aprovechamos un ciclo para la configuración de los pines
  for (byte x = 0; x < CTD_LUCES; x++) {
    pinMode(luces[x], OUTPUT);
  }
  // Realizamos una primer llamada a la función solo para que la
  // secuencia del semáforo comience de inmediato
  gestionarLuces();
}

void loop() {
  // Chequeamos constantemente el temporizador contra el intervalo actual de tiempos[etapa]
  if (timer1 >= tiempos[etapa]) {
    // Cada vez que la condición se valida, incrementamos "etapa"
    etapa++;
    // pero nos mantenemos atentos a resetearla a 0 si alcanza el límite de luces
    if (etapa == CTD_LUCES) {
      etapa = 0;
    }
    // y solo volvemos a llamar a la función de gestión y resetear el timer
    // para que la secuencia continue.
    gestionarLuces();
    timer1 = 0;
  }
}
