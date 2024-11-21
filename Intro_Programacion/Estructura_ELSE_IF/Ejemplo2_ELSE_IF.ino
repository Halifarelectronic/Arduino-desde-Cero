int temperatura = 25; // Cambia este valor para probar otros casos

void setup() {
    Serial.begin(9600);
}

void loop() {
    if (temperatura < 10) {
        Serial.println("Temperatura: Frío");
   

 } else if (temperatura >= 10 && temperatura < 25) {
        Serial.println("Temperatura: Templado");
    } else if (temperatura >= 25) {
        Serial.println("Temperatura: Caliente");
    } else {
        Serial.println("Temperatura: Indefinida");
    }
    delay(2000); // Pausa para visualizar el resultado en el Monitor Serial
}
