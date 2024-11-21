void setup() {
    Serial.begin(9600); // Inicia la comunicación serial
    randomSeed(analogRead(0)); // Inicializa el generador de números aleatorios
}

void loop() {
    int numero;

    Serial.println("Generando números aleatorios hasta que el valor sea mayor o igual a 50:");

    do {
        numero = random(1, 100); // Genera un número aleatorio entre 1 y 99
        Serial.println(numero); // Imprime el número generado
    } while (numero < 50); // Se repite hasta que el número sea >= 50

    Serial.println("Valor mayor o igual a 50 alcanzado.\n");
    delay(3000); // Pausa de 3 segundos antes de reiniciar el proceso
}
