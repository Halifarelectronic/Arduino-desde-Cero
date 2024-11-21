// Definir los pines para los colores
const int rojoPin = 11;
const int verdePin = 10;
const int azulPin = 9;

void setup() {
  // Configurar los pines como salida
  pinMode(rojoPin, OUTPUT);
  pinMode(verdePin, OUTPUT);
  pinMode(azulPin, OUTPUT);
}

void loop() {
  // Cambiar colores ciclando entre Rojo, Verde, Azul y Blanco

  // Rojo
  setColor(255, 0, 0);  // Máxima intensidad en rojo
  delay(1000);          // Esperar 1 segundo

  // Verde
  setColor(0, 255, 0);  // Máxima intensidad en verde
  delay(1000);

  // Azul
  setColor(0, 0, 255);  // Máxima intensidad en azul
  delay(1000);

  // Blanco (combinación de los tres)
  setColor(255, 255, 255);  // Máxima intensidad en rojo, verde y azul
  delay(1000);

  // Apagar el LED
  setColor(0, 0, 0);  // Apagar todos los colores
  delay(1000);
}

// Función para ajustar los colores
void setColor(int rojo, int verde, int azul) {
  analogWrite(rojoPin, rojo);   // Controla la intensidad del rojo
  analogWrite(verdePin, verde); // Controla la intensidad del verde
  analogWrite(azulPin, azul);   // Controla la intensidad del azul
}
