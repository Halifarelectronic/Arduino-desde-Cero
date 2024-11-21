#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// Crear un objeto para la pantalla LCD (con dirección I2C 0x27)
LiquidCrystal_I2C lcd(0x27, 16, 2);  

void setup() {
  // Iniciar el LCD
  lcd.init();
  
  // Encender la retroiluminación del LCD
  lcd.backlight();
  
  // Escribir un mensaje en la pantalla LCD
  lcd.setCursor(0, 0);  // Posicionar en la primera línea, primer carácter
  lcd.print("Hola Mundo!");

  lcd.setCursor(0, 1);  // Posicionar en la segunda línea, primer carácter
  lcd.print("LCD con I2C");
}

void loop() {
  // No es necesario usar código en el loop para este ejemplo básico
}
