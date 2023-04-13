#define RELAY_PIN 13 // Pino do Arduino conectado ao pino de controle do relé
#define DELAY_MS 5000 // Tempo em milissegundos para ligar/desligar o relé (neste exemplo, 5 segundos)

void setup() {
  pinMode(RELAY_PIN, OUTPUT);
}

void loop() {
  digitalWrite(RELAY_PIN, HIGH); // Liga o relé
  delay(DELAY_MS); // Espera o tempo definido
  digitalWrite(RELAY_PIN, LOW); // Desliga o relé
  delay(DELAY_MS); // Espera o tempo definido
}
