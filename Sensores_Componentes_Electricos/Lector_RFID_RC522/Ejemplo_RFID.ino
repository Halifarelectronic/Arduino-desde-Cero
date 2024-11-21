#include <SPI.h>
#include <MFRC522.h>

#define SS_PIN 10  // Pin Slave Select
#define RST_PIN 9  // Pin de reinicio

MFRC522 mfrc522(SS_PIN, RST_PIN);  // Crear una instancia del lector

void setup() {
  Serial.begin(9600);  // Iniciar la comunicación serial
  SPI.begin();  // Iniciar el bus SPI
  mfrc522.PCD_Init();  // Iniciar el módulo RC522
  Serial.println("Acerca una tarjeta o llavero RFID...");
}

void loop() {
  // Revisar si hay una nueva tarjeta presente
  if (!mfrc522.PICC_IsNewCardPresent()) {
    return;
  }

  // Seleccionar la tarjeta
  if (!mfrc522.PICC_ReadCardSerial()) {
    return;
  }

  // Mostrar el UID de la tarjeta o llavero
  Serial.print("UID de la tarjeta o llavero: ");
  for (byte i = 0; i < mfrc522.uid.size; i++) {
    Serial.print(mfrc522.uid.uidByte[i] < 0x10 ? " 0" : " ");
    Serial.print(mfrc522.uid.uidByte[i], HEX);
  }
  Serial.println();

  delay(1000);  // Esperar un segundo antes de seguir leyendo
}
