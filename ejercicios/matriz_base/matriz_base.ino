/*
 Declaración, inicialización, ciclado y modificación de matrices
*/

// Definimos una matriz de subíndice 10 (es decir, que contendrá como máximo 10 items)
// En este caso los items serán de tipo int, aprovechamos la misma línea de definición
// para asignar los 10 valores, aunque por supuesto podríamos hacerlo luego, como en
// en caso de las lecturas de un sensor.
int matriz01[10] = {22, 15, 6548, 1, 2, 3, 456, 722, 0, 3};
int sumatoria = 0;

void setup() {
  Serial.begin(38400);
  // Como ejemplo, modificamos el valor del 10mo item de la matriz (era 3, lo pasamos a 1).
  // Recordar que siempre el primer item de una matriz se identifica con el subíndice 0, NO 1.
  matriz01[9] = 1;
  // Generamos un ciclo para recorrer la matriz
  for (byte c = 0; c < 10; c++) {
    // y aprovechamos la variable del ciclo ("c") para obtener el valor de cada item
    // en la matriz, así matriz01[c] se reemplazará en cada ciclo por 0, 1, 2, 3, etc.
    Serial.println("MTR 01 subindice: " + String(c) + " = " + String(matriz01[c]));
    // Acumulamos la sumatoria de cada item de la matriz en la variable "sumatoria"
    sumatoria += matriz01[c];
  }
  // y finalmente, terminado el for(), imprimimos el valor de "sumatoria"
  Serial.println("Sumatoria total: " + String(sumatoria));
}

void loop() {
  // Nuevamente para este ejemplo no utilizamos el loop(), pero debemos colocarlo
  // de todas maneras en el IDE oficial de Arduino, o se nos generará un error al compilar.
}
