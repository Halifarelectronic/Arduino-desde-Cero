// Definir los pines del HC-SR04
const int trigPin = 9;
const int echoPin = 10;

// Variables para almacenar la duración y la distancia
long duration;
int distance;

void setup() {
  // Iniciar la comunicación serie
  Serial.begin(9600);
  
  // Configurar los pines
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop() {
  // Asegurarse de que el TRIG esté en LOW
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  // Enviar un pulso ultrasónico de 10 microsegundos
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Leer la duración del pulso en el pin ECHO
  duration = pulseIn(echoPin, HIGH);

  // Calcular la distancia en cm
  distance = duration * 0.034 / 2;

  // Mostrar la distancia en el monitor serial
  Serial.print("Distancia: ");
  Serial.print(distance);
  Serial.println(" cm");

  // Esperar 500 ms antes de la siguiente lectura
  delay(500);
}
