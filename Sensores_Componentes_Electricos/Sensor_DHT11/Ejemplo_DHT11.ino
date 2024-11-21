#include "DHT.h"

// Definir el pin del DHT11 y el tipo de sensor
#define DHTPIN 2     
#define DHTTYPE DHT11   

// Definir los pines de los LEDs
const int ledFanPin = 9;        // LED para simular el ventilador
const int ledDehumidifierPin = 10; // LED para simular el deshumidificador

// Umbrales para las alertas
const float tempThreshold = 28.0;   // Temperatura umbral para activar el ventilador
const float humidityThreshold = 40.0; // Humedad umbral para activar el deshumidificador

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  // Iniciar la comunicación serie
  Serial.begin(9600);
  
  // Inicializar el sensor DHT11
  dht.begin();
  
  // Configurar los pines de los LEDs como salidas
  pinMode(ledFanPin, OUTPUT);
  pinMode(ledDehumidifierPin, OUTPUT);
  
 
 // Apagar los LEDs al inicio
  digitalWrite(ledFanPin, LOW);
  digitalWrite(ledDehumidifierPin, LOW);
}

void loop() {
  // Pausa de 2 segundos entre lecturas
  delay(2000);

  // Leer la humedad
  float humidity = dht.readHumidity();
  // Leer la temperatura en grados Celsius
  float temperature = dht.readTemperature();

  // Verificar si hubo algún error al leer el sensor
  if (isnan(humidity) || isnan(temperature)) {
    Serial.println("Error al leer del sensor DHT11");
    return;
  }

  // Imprimir los valores de temperatura y humedad en el monitor serial
  Serial.print("Humedad: ");
  Serial.print(humidity);
  Serial.print(" %\t");
  
  Serial.print("Temperatura: ");
  Serial.print(temperature);
  Serial.println(" °C");

  // Verificar si la temperatura supera el umbral
  if (temperature > tempThreshold) {
    // Encender el ventilador (LED)
    digitalWrite(ledFanPin, HIGH);
    Serial.println("ALERTA: Temperatura alta. Ventilador ENCENDIDO.");
  } else {
    // Apagar el ventilador (LED)
    digitalWrite(ledFanPin, LOW);
    Serial.println("Temperatura normal. Ventilador APAGADO.");
  }

  // Verificar si la humedad es inferior al umbral
  if (humidity < humidityThreshold) {
    // Encender el deshumidificador (LED)
    digitalWrite(ledDehumidifierPin, HIGH);
    Serial.println("ALERTA: Humedad baja. Deshumidificador ENCENDIDO.");
  } else {
    // Apagar el deshumidificador (LED)
    digitalWrite(ledDehumidifierPin, LOW);
    Serial.println("Humedad adecuada. Deshumidificador APAGADO.");
  }
}
