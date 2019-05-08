/*
  Primer ejemplo práctico, el hola mundo electrónico, parpadeo de un led
  El Arduino Uno cuenta con un led incorporado en la propia placa de desarrollo, conectado al pin digital 13 (D13).
*/

// Recordar que la función setup() se encuentra predefinida en el sistema.
// El código colocado dentro, será ejecutado UNA VEZ en cada inicio del microcontrolador.
void setup() {
  // Utilizamos la función pinMode para configurar el pin como SALIDA
  pinMode(13, OUTPUT);
}

// Recordar que la función loop() se encuentra predefinida en el sistema.
// El código colocado dentro, será ejecutado CICLICAMENTE mientras el micro permanezca activo.
void loop() {
  // Ponemos en ALTO el pin 13, es decir, enviamos voltaje por él, el led se enciende.
  digitalWrite(13, HIGH);
  // Aguardamos 1 segundo en ese estado => la función delay() trabaja con milisegundos
  delay(1000);
  // Ponemos en BAJO el pin, el led se apaga
  digitalWrite(13, LOW);
  // Volvemos a esperar 1 segundo en ese estado
  delay(1000);
  // Culmina el listado de instrucciones del loop(), el sistema vuelve a empezar repitiendo desde la primera (digitalWrite(13, HIGH); en este caso).
}
