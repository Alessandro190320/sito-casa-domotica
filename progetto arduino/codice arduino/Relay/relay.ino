int pulsantePin = 9;
int ledStato = LOW;
int pulsanteStato = LOW;
int pinRelay = 6;

void setup()
{
  pinMode(pinRelay, OUTPUT);
  pinMode(pulsantePin, INPUT);
  digitalWrite(pinRelay, ledStato);
}
void loop()
{
  int lettura = digitalRead(pulsantePin);
  if(lettura != pulsanteStato and lettura == HIGH){
    ledStato = !ledStato;
    digitalWrite(pinRelay, ledStato);
  }
  pulsanteStato = lettura;
  delay(10);
}
