#include <DS1302.h>

// Definir los pines de conexión
int RST = 8;   // Pin CE
int DAT = 7;   // Pin I/O
int CLK = 6;   // Pin SCLK

// Crear una instancia del objeto DS1302
DS1302 rtc(RST, DAT, CLK);

void setup() {
  // Iniciar la comunicación serial
  Serial.begin(9600);
  
  // Establecer la fecha y hora (año, mes, día, hora, minuto, segundo)
  rtc.setTime(2024, 10, 18, 14, 30, 00); // Establece la fecha y hora inicial
  
  Serial.println("RTC DS1302 Iniciado.");
}

void loop() {
  // Obtener la hora actual del RTC
  Time currentTime = rtc.getTime();
  // Mostrar la fecha en formato YYYY-MM-DD
  Serial.print("Fecha: ");
  Serial.print(currentTime.year); 
  Serial.print("-");
  Serial.print(currentTime.mon); 
  Serial.print("-");
  Serial.println(currentTime.date);
  
  // Mostrar la hora en formato HH:MM:SS
  Serial.print("Hora: ");
  Serial.print(currentTime.hour); 
  Serial.print(":");
  Serial.print(currentTime.min); 
  Serial.print(":");
  Serial.println(currentTime.sec);
  delay(1000); // Esperar un segundo antes de actualizar
}
