// Definir los pines del sensor y del LED
const int digitalPin = 7;  // Salida digital del KY-037
const int analogPin = A0;  // Salida analógica del KY-037
const int ledPin = 8;      // LED en el pin 8

void setup() {
  // Configurar el LED y el pin digital como salidas
  pinMode(ledPin, OUTPUT);
  pinMode(digitalPin, INPUT);
  
  // Iniciar la comunicación serie
  Serial.begin(9600);
}

void loop() {
  // Leer el valor del pin digital
  int soundDigital = digitalRead(digitalPin);

  // Leer el valor analógico del sensor
  int soundAnalog = analogRead(analogPin);

  // Mostrar el valor analógico del sonido en el monitor serial
  Serial.print("Nivel de sonido (analogico): ");
  Serial.println(soundAnalog);

  // Si el valor digital es HIGH (se detecta un sonido fuerte), encender el LED
  if (soundDigital == HIGH) {
    digitalWrite(ledPin, HIGH);  // Encender el LED
    Serial.println("¡Sonido detectado!");
  } else {
    digitalWrite(ledPin, LOW);   // Apagar el LED
  }

  // Pausar un poco antes de la siguiente lectura
  delay(200);
}
