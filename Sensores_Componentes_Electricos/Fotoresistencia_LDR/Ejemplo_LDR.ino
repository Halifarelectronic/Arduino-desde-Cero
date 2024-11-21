
int ldrPin = A0; // Pin analógico donde está conectada la LDR
int ldrValue = 0; // Variable para almacenar el valor de la LDR

void setup() {
  Serial.begin(9600); // Inicializa la comunicación serial
}

void loop() {
  ldrValue = analogRead(ldrPin); // Lee el valor analógico de la LDR
  Serial.print("Intensidad de luz: ");
  Serial.println(ldrValue); // Muestra el valor en el monitor serial
  delay(500); // Pausa de 500 ms entre lecturas
}
