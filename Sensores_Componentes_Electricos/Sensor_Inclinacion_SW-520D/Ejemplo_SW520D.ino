// Pin de conexión del SW-520D
const int sensorPin = 2;

// Variable para almacenar el estado del sensor
int sensorState = 0;

void setup() {
  // Configurar el pin del sensor como entrada
  pinMode(sensorPin, INPUT);

  // Iniciar el monitor serie para ver la salida
  Serial.begin(9600);
}

void loop() {
  // Leer el estado del sensor
  sensorState = digitalRead(sensorPin);

  // Si el sensor detecta inclinación o vibración
  if (sensorState == HIGH) {
    Serial.println("Movimiento detectado!");
  } else {
    Serial.println("Sin movimiento.");
  }

  // Pausa para evitar lecturas muy rápidas
  delay(500);
}
