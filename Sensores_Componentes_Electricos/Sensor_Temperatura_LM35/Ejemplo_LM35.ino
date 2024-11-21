// Definir pines
const int lm35Pin = A0;      // Pin del LM35
const int ledPin = 9;        // Pin del LED

// Umbral de temperatura para encender el ventilador
const float tempThreshold = 30.0; // Grados Celsius

void setup() {
  // Iniciar la comunicación serie a 9600 bps
  Serial.begin(9600);
  
  // Configurar el pin del LED como salida
  pinMode(ledPin, OUTPUT);
  
  // Apagar el ventilador al inicio
  digitalWrite(ledPin, LOW);
}

void loop() {
  // Leer el valor analógico del LM35
  int analogValue = analogRead(lm35Pin);
  
  // Convertir el valor a voltaje (0-5V)
  float voltage = analogValue * (5.0 / 1023.0);
  
  // Convertir el voltaje a temperatura (10mV por cada grado Celsius)
  float temperatureC = voltage * 100;
  
  // Mostrar la temperatura en el monitor serial
  Serial.print("Temperatura: ");
  Serial.print(temperatureC);
  Serial.println(" °C");
  
  // Verificar si la temperatura supera el umbral
  if (temperatureC >= tempThreshold) {
    // Encender el ventilador (LED)
    digitalWrite(ledPin, HIGH);
    Serial.println("Ventilador ENCENDIDO");
  } else {
    // Apagar el ventilador (LED)
    digitalWrite(ledPin, LOW);
    Serial.println("Ventilador APAGADO");
  }
  
  // Pausa de un segundo antes de la siguiente lectura
  delay(1000);
}
