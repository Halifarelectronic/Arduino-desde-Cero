// Definición de los pines conectados a cada segmento
int segA = 2;
int segB = 3;
int segC = 4;
int segD = 5;
int segE = 6;
int segF = 7;
int segG = 8;

void setup() {
  // Configuración de los pines como salida
  pinMode(segA, OUTPUT);
  pinMode(segB, OUTPUT);
  pinMode(segC, OUTPUT);
  pinMode(segD, OUTPUT);
  pinMode(segE, OUTPUT);
  pinMode(segF, OUTPUT);
  pinMode(segG, OUTPUT);
}

void loop() {
  // Mostrar el número 3 en un display de ánodo común
  digitalWrite(segA, LOW); // Encender segmento A
  digitalWrite(segB, LOW); // Encender segmento B
  digitalWrite(segC, LOW); // Encender segmento C
  digitalWrite(segD, LOW); // Encender segmento D
  digitalWrite(segG, LOW); // Encender segmento G
  digitalWrite(segE, HIGH); // Apagar segmento E
  digitalWrite(segF, HIGH); // Apagar segmento F
  delay(1000); // Mostrar durante 1 segundo
  
  // Apagar todos los segmentos
  digitalWrite(segA, HIGH);
  digitalWrite(segB, HIGH);
  digitalWrite(segC, HIGH);
  digitalWrite(segD, HIGH);
  digitalWrite(segG, HIGH);
  delay(1000); // Esperar 1 segundo
}
