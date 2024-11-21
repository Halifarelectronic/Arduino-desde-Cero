int potPin = A0;  // Pin del potenciómetro
int ledPin = 9;   // Pin PWM para el LED
int potValue;     // Variable para almacenar el valor del potenciómetro

void setup() {
    pinMode(ledPin, OUTPUT);   // Configura el pin del LED como salida
    Serial.begin(9600);        // Inicia la comunicación serial
}

void loop() {
    potValue = analogRead(potPin);//Lee el valor del potenciómetro
    int brightness = map(potValue, 0, 1023, 0, 255); // Mapea de 0-1023 a 0-255
    analogWrite(ledPin, brightness);// Ajusta el brillo del LED
    Serial.println(brightness);// Imprime el valor en el monitor serial
    delay(100);           // Pausa breve para estabilidad
}
