void setup() {
    Serial.begin(9600); // Inicia la comunicación serial
}

void loop() {
    int contador = 10; // Variable para la cuenta regresiva

    Serial.println("Iniciando cuenta regresiva:");
   
    while (contador > 0) {
       Serial.println(contador);
       contador--; // Disminuye el contador en 1 en cada iteración
       delay(500); // Pausa de 500 ms entre cada número
    }
   
    Serial.println("¡Despegue!");
    delay(2000); // Pausa de 2 segundos antes de reiniciar
}
