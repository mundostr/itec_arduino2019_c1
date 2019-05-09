/*
  Primer conexión de pulsador
  Estamos colocando directamente el pulsador entre el pin D2 y GND
*/

const byte PULSADOR = 2;

void setup() {
  Serial.begin(38400);
  // Definimos ahora al pin como ENTRADA, para poder LEER su estado
  pinMode(PULSADOR, INPUT);
}

void loop() {
  // Leemos el estado del pin cada 100 ms
  Serial.println(digitalRead(PULSADOR));
  delay(100);
}
