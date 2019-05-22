const int INTERVARLO = 1500;
// Definimos una variable sin signo de tipo "long", ya que vamos
// a almacenar un número que puede crecer de forma considerable
unsigned long timer1 = 0;

void setup() {
  Serial.begin(38400);
}

void loop() {
  // Empleamos la función de sistema "millis()", la cual nos devuelve la cantidad
  // de milisegundos que han transcurrido desde que comenzó la ejecución de nuestro código.
  // Realizando una simple resta con nuestro timer ("timer1") y comparando con
  // el intervalo (INTERVALO), podemos saber si ha transcurrido un determinado período de tiempo.
  if (millis() - timer1 >= INTERVALO) {
    // Ni bien la condición se verifique, ejecutamos lo necesario y actualizamos el valor de
    // "timer1" con el que tenga actualmente "millis()", dejando lista la condición para
    // que vuelva a esperar un nuevo intervalo
    Serial.println("Ejecuta");
    timer1 = millis();
  }
}
