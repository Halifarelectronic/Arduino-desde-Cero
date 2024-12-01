void setup() {
  Serial.begin(9600); // Inicia la comunicación serial a 9600 baudios.
  Serial.println("Introduce un número del 1 al 3:");
}

void loop() {
  if (Serial.available() > 0) { // Verifica si hay datos disponibles en el puerto serial.
    char input = Serial.read(); // Lee el carácter ingresado.
    switch (input) {
      case '1':
        Serial.println("Seleccionaste el caso 1");
        break;
      case '2':
        Serial.println("Seleccionaste el caso 2");
        break;
      case '3':
        Serial.println("Seleccionaste el caso 3");
        break;
      default:
        Serial.println("Entrada no válida. Introduce un número del 1 al 3.");
        break;
    }
  }
}
