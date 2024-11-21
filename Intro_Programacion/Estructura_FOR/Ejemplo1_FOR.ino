void setup()
{
    Serial.begin(9600); // Inicia la comunicación serial
}

void loop() 
{
    for (int i = 1; i <= 10; i++) 
{
        Serial.print("Contador: ");
        Serial.println(i);
        delay(500); // Pausa de medio segundo entre cada número
    	}
   
delay(2000); // Pausa de 2 segundos antes de reiniciar el conteo
}
