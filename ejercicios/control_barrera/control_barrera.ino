#include <Servo.h>
#include <elapsedMillis.h>

const byte SERVO = 9;
const byte BUZZER = 3;
const byte PULSADOR = 2;
const byte LED = 13;
const byte LDR = 14; // A0

const byte BARRERA_ALTA = 70;
const byte BARRERA_BAJA = 180;
const byte FREC_LDR = 100;
const int FREC_SIRENA = 1000;
const int MIN_LDR = 500;
const int DEMORA_BAJADA = 3000;
const int TONO_BAJO = 500;
const int TONO_ALTO = 0;

int lecturaLdr = 0;
int tono = TONO_BAJO;
bool barreraAlta = false;
volatile bool emergencia = false;

Servo servo01;
elapsedMillis timer1;
elapsedMillis timer2;
elapsedMillis timer3;

void setup() {
  Serial.begin(38400);

  pinMode(LDR, INPUT);
  pinMode(LED, OUTPUT);
  digitalWrite(LED, LOW);
  pinMode(PULSADOR, INPUT_PULLUP);

  servo01.attach(SERVO);
  servo01.write(BARRERA_BAJA);

  attachInterrupt(digitalPinToInterrupt(PULSADOR), cambiarBarrera, FALLING);

  Serial.println("SISTEMA INICIADO");
}

void loop() {
  if (timer1 >= FREC_LDR) {
    lecturaLdr = analogRead(LDR);

    if (lecturaLdr <= MIN_LDR || emergencia) {
      servo01.write(BARRERA_ALTA);
      barreraAlta = true;
      timer2 = 0;
    } else {
      if (barreraAlta && !emergencia) {
        if (timer2 >= DEMORA_BAJADA) {
          servo01.write(BARRERA_BAJA);
          digitalWrite(LED, LOW);
          barreraAlta = false;
          timer2 = 0;
        }
      }
    }

    timer1 = 0;
  }

  if (timer3 >= FREC_SIRENA && emergencia) {
    if (tono == TONO_BAJO) {
      tono = TONO_ALTO;
      digitalWrite(LED, LOW);
    } else {
      tono = TONO_BAJO;
      digitalWrite(LED, HIGH);
    }
    tone(BUZZER, tono, FREC_SIRENA);
    timer3 = 0;
  }
}

void cambiarBarrera() {
  emergencia = !emergencia;
}
