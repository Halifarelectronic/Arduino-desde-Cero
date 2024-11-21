int puntuacion = 85; // Cambia este valor para probar otros casos

void setup() {
    Serial.begin(9600);
}

void loop() {
    if (puntuacion >= 90) {
        Serial.println("Calificación: A");
    } else if (puntuacion >= 80) {
        Serial.println("Calificación: B");
    } else if (puntuacion >= 70) {
        Serial.println("Calificación: C");
    } else if (puntuacion >= 60) {
        Serial.println("Calificación: D");
    } else {
        Serial.println("Calificación: F");
    }
    delay(2000); // Pausa para visualizar el resultado en el Monitor Serial
}
