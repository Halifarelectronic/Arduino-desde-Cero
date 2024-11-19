void setup() {
  // Iniciar la comunicación serial
  Serial.begin(9600);

  // Declarar variables para la comparación
  int numero1 = 10;
  int numero2 = 20;

  // Usar la instrucción if con operadores de comparación
  if (numero1 > numero2) {
    // Si numero1 es mayor que numero2
    Serial.println("numero1 es mayor que numero2");
  } 
  else if (numero1 < numero2) {
    // Si numero1 es menor que numero2
    Serial.println("numero1 es menor que numero2");
  } 
  else {
    // Si numero1 es igual a numero2
    Serial.println("numero1 es igual a numero2");
  }
}

void loop() {
  // No se necesita hacer nada en el loop para esta actividad
} 