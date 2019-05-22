/*
  Segundo ejercicio para manejo simple de secuencia de semáforo con delay()
  y el agregado de llamada a función para mejor organización del código
  Ciclamos indefinidamente, primero luz roja, luego verde, luego amarilla
*/

const byte LUZ_ROJ = 3;
const byte LUZ_AMA = 4;
const byte LUZ_VDE = 5;

// Declaramos una función llamada "controlarLuces", a la cual le pasamos
// 2 parámetros llamados "luz" y "espera", para indicar qué luz debe encender
// y cuánto tiempo debe aguardar hasta apagarla
void controlarLuces(byte luz, int espera) {
  digitalWrite(luz, HIGH);
  delay(espera);
  digitalWrite(luz, LOW);
}

void setup() {
  Serial.begin(38400);
  pinMode(LUZ_ROJ, OUTPUT);
  pinMode(LUZ_AMA, OUTPUT);
  pinMode(LUZ_VDE, OUTPUT);

  // Simplemente inicializamos las 3 luces en bajo
  digitalWrite(LUZ_ROJ, LOW);
  digitalWrite(LUZ_AMA, LOW);
  digitalWrite(LUZ_VDE, LOW);
}

void loop() {
  // Ahora en el loop(), en lugar de agregar sucesivas líneas digitalWrite()
  // solo colocamos 3 llamadas a "controlarLuces", pasándole como parámetros
  // la luz que debe encender y el tiempo que debe esperar.
  controlarLuces(LUZ_ROJ, 5000);
  controlarLuces(LUZ_VDE, 5000);
  controlarLuces(LUZ_AMA, 3000);
}
