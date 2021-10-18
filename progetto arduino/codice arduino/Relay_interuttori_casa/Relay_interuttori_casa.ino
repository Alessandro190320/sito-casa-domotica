int ledPin1 = 8;
int pulsantePin1 = 2;
int ledStato1 = LOW;
int pulsanteStato1 = LOW;
int lettura1=LOW;

int ledPin2 = 10;
int pulsantePin2 = 4;
int ledStato2 = LOW;
int pulsanteStato2 = LOW;
int lettura2 = LOW;

int ledPin3 = 12;
int pulsantePin3 = 6;
int ledStato3 = LOW;
int pulsanteStato3 = LOW;
int lettura3 = LOW;

//parte del relay
int pulsantePin = 9;
int ledStato = LOW;
int pulsanteStato = LOW;
int pinRelay = 7;


void setup(){
  pinMode(ledPin1, OUTPUT);
  pinMode(pulsantePin1, INPUT);
  digitalWrite(ledPin1, ledStato1);

  pinMode(ledPin2, OUTPUT);
  pinMode(pulsantePin2, INPUT);
  digitalWrite(ledPin2, ledStato2);

  pinMode(ledPin3, OUTPUT);
  pinMode(pulsantePin3, INPUT);
  digitalWrite(ledPin3, ledStato3);

  pinMode(pinRelay, OUTPUT);
  pinMode(pulsantePin, INPUT);
  digitalWrite(pinRelay, ledStato);
}

void loop(){
  lettura1 = digitalRead(pulsantePin1);
  if(lettura1 != pulsanteStato1 and lettura1 == HIGH){
    ledStato1 = !ledStato1;
    digitalWrite(ledPin1, ledStato1);
  }
  pulsanteStato1 = lettura1;
  delay(10);


  lettura2 = digitalRead(pulsantePin2);
  if(lettura2 != pulsanteStato2 and lettura2 == HIGH){
    ledStato2 = !ledStato2;
    digitalWrite(ledPin2, ledStato2);
  }
  pulsanteStato2 = lettura2;
  delay(10);


  lettura3 = digitalRead(pulsantePin3);
  if(lettura3 != pulsanteStato3 and lettura3 == HIGH){
    ledStato3 = !ledStato3;
    digitalWrite(ledPin3, ledStato3);
  }
  pulsanteStato3 = lettura3;
  delay(10);

  int lettura = digitalRead(pulsantePin);
  if(lettura != pulsanteStato and lettura == HIGH){
    ledStato = !ledStato;
    digitalWrite(pinRelay, ledStato);
  }
  pulsanteStato = lettura;
  delay(10);
}
