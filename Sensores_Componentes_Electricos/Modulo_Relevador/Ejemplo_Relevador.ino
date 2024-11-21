const int relayPin = 7;  // Pin del relevador en Arduino

void setup() {
  pinMode(relayPin, OUTPUT);  // Configurar el pin del relevador como salida
}

void loop() {
  digitalWrite(relayPin, HIGH);  // Activa el relevador (enciende el dispositivo)
  delay(2000);                   // Espera 2 segundos
  digitalWrite(relayPin, LOW);   // Desactiva el relevador (apaga el dispositivo)
  delay(2000);                   // Espera 2 segundos
}
