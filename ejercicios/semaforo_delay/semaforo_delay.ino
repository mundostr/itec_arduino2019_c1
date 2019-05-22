/*
  Primer ejercicio para manejo simple de secuencia de semáforo con delay()
  Ciclamos indefinidamente, primero luz roja, luego verde, luego amarilla
*/

const byte LUZ_ROJ = 3;
const byte LUZ_AMA = 4;
const byte LUZ_VDE = 5;

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
  // y ciclamos indefinidamente en el loop(), encendiendo y apagando de a una
  // con delays intermedios
  digitalWrite(LUZ_AMA, LOW);
  digitalWrite(LUZ_ROJ, HIGH);
  delay(5000);
  digitalWrite(LUZ_ROJ, LOW);
  digitalWrite(LUZ_VDE, HIGH);
  delay(5000);
  digitalWrite(LUZ_VDE, LOW);
  digitalWrite(LUZ_AMA, HIGH);
  delay(3000);
}
