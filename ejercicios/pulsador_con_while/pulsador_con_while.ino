/*
  Utilización de while() como ciclo de control de espera.
  Aguardamos indefinidamente a que a que se presione un pulsador para comenzar la secuencia.
  (en este caso simplemente un parpadeo de led).
*/

#include <Bounce2.h>

bool iniciado = false;
const byte PIN_PULSADOR = 2;
const byte PIN_LED = 13; // utilizamos como indicador el led incorporado

// Definimos el objeto que nos permite manejar el pulsador
Bounce pulsador = Bounce();

void setup() {
  Serial.begin(38400);
  pinMode(PIN_LED, OUTPUT);
  // Configuramos el pin del pulsador y habilitamos la pullup interna
  pulsador.attach(PIN_PULSADOR, INPUT_PULLUP);
  pulsador.interval(30);
  Serial.println("SISTEMA LISTO");

  // "iniciado" fue configurado como variable global de tipo booleano, comenzando en false
  // por ende el siguiente ciclo while() continuará ejecutándose hasta que iniciado pase a true.
  while (!iniciado) {
    // Acá chequeamos si hubo algún cambio en el estado del pulsador
    if (pulsador.update()) {
      // y dentro si ese cambio es de caída (alto a bajo = 1 a 0).
      // Recordar que con el pullup interno el pulsador queda negado,
      // siempre en 1 y solo pasa a 0 cuando lo pulsamos.
      if (pulsador.fell()) {
        // Solo cuando lo pulsamos, cambiamos la variable global "iniciado" a true
        // y de esa forma en la siguiente iteracción saldremos del ciclo while(),
        // el sistema seguirá con el flujo de código e imprimirá por consola "Sistema iniciado".
        iniciado = true;
      }
    }
  }
  Serial.println("Sistema iniciado");
}

void loop() {
  // Realizamos un simple parpadeo del led cada 500 ms
  // pero gracias al while() agregado en el setup(), esta secuencia en el loop()
  // no se ejecutará hasta que hayamos presionado el pulsador.
  digitalWrite(PIN_LED, !digitalRead(PIN_LED));
  delay(500);
}
