const int sensorPin = A0;  // Pin donde se conecta la salida del sensor
int sensorValue = 0;       // Variable para almacenar el valor de la lectura

void setup() {
    Serial.begin(9600);    // Inicia la comunicación serial
    pinMode(sensorPin, INPUT); // Configura el pin del sensor como entrada
}

void loop() {
    // Lee el valor analógico del sensor
    sensorValue = analogRead(sensorPin);

    // Convierte la lectura a porcentaje
    float porcentajeNivel = map(sensorValue, 0, 1023, 0, 100);

    // Muestra el porcentaje de nivel de agua en el monitor serial
    Serial.print("Nivel de Agua: ");
    Serial.print(porcentajeNivel);
    Serial.println("%");

    delay(1000); // Espera 1 segundo antes de leer nuevamente
}
