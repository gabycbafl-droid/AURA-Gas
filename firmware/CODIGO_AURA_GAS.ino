
#include <ESP32Servo.h>

// Pines de ejemplo: verifica que coincidan con tu montaje.
const int PIN_SENSOR_MQ2 = 34;
const int PIN_LED_ROJO = 25;
const int PIN_LED_VERDE = 26;
const int PIN_BUZZER = 27;
const int PIN_SERVO = 18;

// Umbral ilustrativo: debes calibrarlo con pruebas.
const int UMBRAL_GAS = 1800;

const int POSICION_NORMAL = 0;
const int POSICION_ALERTA = 90;

Servo servoGas;

void setup() {
  Serial.begin(115200);

  pinMode(PIN_LED_ROJO, OUTPUT);
  pinMode(PIN_LED_VERDE, OUTPUT);
  pinMode(PIN_BUZZER, OUTPUT);

  servoGas.setPeriodHertz(50);
  servoGas.attach(PIN_SERVO, 500, 2400);
  servoGas.write(POSICION_NORMAL);

  digitalWrite(PIN_LED_ROJO, LOW);
  digitalWrite(PIN_LED_VERDE, HIGH);
  digitalWrite(PIN_BUZZER, LOW);

  Serial.println("AURA-Gas iniciado");
  Serial.println("Calentando sensor...");
  delay(30000);
}

void loop() {
  int lecturaGas = analogRead(PIN_SENSOR_MQ2);

  Serial.print("Lectura MQ-2: ");
  Serial.println(lecturaGas);

  if (lecturaGas >= UMBRAL_GAS) {
    digitalWrite(PIN_LED_ROJO, HIGH);
    digitalWrite(PIN_LED_VERDE, LOW);
    digitalWrite(PIN_BUZZER, HIGH);
    servoGas.write(POSICION_ALERTA);

    Serial.println("ALERTA: umbral alcanzado");
  } else {
    digitalWrite(PIN_LED_ROJO, LOW);
    digitalWrite(PIN_LED_VERDE, HIGH);
    digitalWrite(PIN_BUZZER, LOW);
    servoGas.write(POSICION_NORMAL);
  }

  delay(500);
}
