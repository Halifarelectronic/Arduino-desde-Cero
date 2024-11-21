#include <Servo.h>

// Crear un objeto Servo para controlar el SG90
Servo myServo;

// Definir el pin donde está conectado el SG90
const int servoPin = 9;

void setup() {
  // Vincular el servo al pin 9
  myServo.attach(servoPin);
  
  // Iniciar la comunicación serie para monitoreo
  Serial.begin(9600);
}

void loop() {
  // Mover el servo a 0 grados
  myServo.write(0);
  Serial.println("Servo a 0 grados");
  delay(1000);  // Esperar 1 segundo
  
  // Mover el servo a 90 grados
  myServo.write(90);
  Serial.println("Servo a 90 grados");
  delay(1000);  // Esperar 1 segundo
  
  // Mover el servo a 180 grados
  myServo.write(180);
  Serial.println("Servo a 180 grados");
  delay(1000);  // Esperar 1 segundo
  
  // Mover el servo de vuelta a 90 grados
  myServo.write(90);
  Serial.println("Servo de vuelta a 90 grados");
  delay(1000);  // Esperar 1 segundo
}
