#include <Keypad.h>

const byte ROWS = 4; // Cuatro filas
const byte COLS = 4; // Cuatro columnas

// Mapa de teclas
char keys[ROWS][COLS] = {
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
};

// Pines de conexión
byte rowPins[ROWS] = {5, 4, 3, 2}; // Conectar filas a pines digitales 2-5
byte colPins[COLS] = {6, 7, 8, 9}; // Conectar columnas a pines digitales 6-9

// Inicializa el teclado
Keypad keypad = Keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLS);

void setup() {
  Serial.begin(9600); // Inicializa la comunicación serial
}

void loop() {
  char key = keypad.getKey(); // Obtiene la tecla presionada
  if (key) { // Si se presionó una tecla
    Serial.print("Tecla presionada: ");
    Serial.println(key); // Imprime la tecla en el monitor serial
  }
}
