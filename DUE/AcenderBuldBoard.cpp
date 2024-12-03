// Definir o pino que controla a bulb board
const int bulbControlPin = 7;

void setup() {
  // Configurar o pino como saída
  pinMode(bulbControlPin, OUTPUT);
}

void loop() {
  // Ativar a bulb board (sinal HIGH)
  digitalWrite(bulbControlPin, HIGH);
  delay(2000); // Aguarda 2 segundos

  // Desativar a bulb board (sinal LOW)
  digitalWrite(bulbControlPin, LOW);
  delay(2000); // Aguarda 2 segundos
}
