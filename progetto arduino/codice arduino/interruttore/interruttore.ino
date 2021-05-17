int ledPin = 9;
int pulsantePin = 2;
int ledStato = LOW;
int pulsanteStato = LOW;

void setup(){
  pinMode(ledPin, OUTPUT);
  pinMode(pulsantePin, INPUT);
  digitalWrite(ledPin, ledStato);
}

void loop(){
  int lettura = digitalRead(pulsantePin);
  if(lettura != pulsanteStato and lettura == HIGH){
    ledStato = !ledStato;
    digitalWrite(ledPin, ledStato);
  }
  pulsanteStato = lettura;
  delay(10);
}
