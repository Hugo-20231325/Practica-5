


/*
 
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB4AM 
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: Conversiones 
   Dev: Ricardo Andres Rodriguez de León-2023100
   Fecha: 3 de Mayo
*/

const int segA = 2;
const int segB = 3;
const int segC = 4;
const int segD = 5;
const int segE = 6;
const int segF = 7;
const int segG = 8;

float kgToLb(float kg) {
  return kg * 2.20462;
}

float aTouA(float a) {
  return a * 1000000;
}

void displaySequence() {
  int pins[5] = {segA, segB, segC, segD, segE};
  for (int i = 0; i < 5; i++) {
    digitalWrite(pins[i], HIGH);
    delay(500);
    digitalWrite(pins[i], LOW);
  }
}

void setupPins() {
  pinMode(segA, OUTPUT);
  pinMode(segB, OUTPUT);
  pinMode(segC, OUTPUT);
  pinMode(segD, OUTPUT);
  pinMode(segE, OUTPUT);
  pinMode(segF, OUTPUT);
  pinMode(segG, OUTPUT);
}

void setup() {
  // Configurar pines como salida
  setupPins();
}

void loop() {
  // Convertir 1 kg a lb
  float kg = 1.0;
  float lb = kgToLb(kg);
  Serial.print("1 kg = ");
  Serial.print(lb);
  Serial.println(" lb");

  float a = 1.0;
  float ua = aTouA(a);
  Serial.print("1 A = ");
  Serial.print(ua);
  Serial.println(" uA");

  displaySequence();
}
