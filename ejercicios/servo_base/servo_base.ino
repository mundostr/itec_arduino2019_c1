/*
  Manejo de servo mediante librería standard con pulso PWM
*/

#include <Servo.h>

const byte LDR = 14; //A0
const byte SERVO = 9; // Verificar que sea un pin con soporte PWM (etiquetado con tilde)

// Declaramos el objeto que nos permite manejar el servo
Servo servo01;

void setup() {
  Serial.begin(38400);
  pinMode(LDR, INPUT);
  // Mediante el método attach(), le indicamos en qué pin se encuentra conectado
  servo01.attach(SERVO);

  // Mediante el método write(), podemos escribir directamente un valor en grados
  // entre 0 y 180, para mover el brazo del servo de un sector a otro. Recordar que
  // los servos utilizados habitualmente, están diseñados como actuadores, con una
  // amplitud de rotación de aprox. 180 grados.
  // Como probaremos más adelante, también disponemos del método writeMicroseconds()
  // para indicar el valor del pulso a enviar al servo directamente en microsegundos.
  // En ese caso el rango irá de 1000 a 2000, aunque en la práctica se deberá probar
  // ya que no todos los servos se comportarán exactamente igual.
  servo01.write(180);
  delay(3000);
  servo01.write(0);
  delay(3000);
  servo01.write(90);
  delay(3000);
}

void loop() {
}
