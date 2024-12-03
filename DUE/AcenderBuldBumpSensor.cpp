// Pinos
const int bulbPin = 7; // Pino da bulb board
const int bumpSensor = 2; // Pino do bump sensor

// Estado atual da bulb board
bool bulbState = false;

void setup() {
  // Configurar o pino da bulb board como saída
  pinMode(bulbPin, OUTPUT);

  // Configurar o pino do bump sensor como entrada
  pinMode(bumpSensor, INPUT);

  // Inicialmente desligar a bulb board
  digitalWrite(bulbPin, LOW);
}

void loop() {
  // Verificar se o bump sensor foi acionado
  if (digitalRead(bumpSensor) == HIGH) {
    // Alternar o estado da bulb board
    bulbState = !bulbState;
    digitalWrite(bulbPin, bulbState ? HIGH : LOW);

    // Delay para evitar múltiplas leituras
    delay(500);
  }
}
