int buzzerPin = 11;
int ledPin = 9;             
int pulsantePin = 2;
int pirPin = 4;
int ledStato = LOW;
int pulsanteStato = LOW;
int on_off = LOW;
int pirStat = LOW;

void setup(){
  pinMode(ledPin, OUTPUT);
  pinMode(pulsantePin, INPUT);
  pinMode(buzzerPin, OUTPUT);
  pinMode(pirPin,INPUT);
  digitalWrite(ledPin, ledStato);
}

void loop(){
  int lettura = digitalRead(pulsantePin);
  if(lettura != pulsanteStato and lettura == HIGH){
    on_off = !on_off;
  }
  pulsanteStato = lettura;
  delay(10);
  
  if(on_off==HIGH){
    pirStat = digitalRead(pirPin); 
    if (pirStat == HIGH) {            // if motion detected
      digitalWrite(ledPin, HIGH);     // turn LED ON
      digitalWrite(buzzerPin, HIGH);
    } 
    else {
      digitalWrite(ledPin, LOW);      // turn LED OFF if we have no motion
      digitalWrite(buzzerPin, LOW);
    }
  }
  else{
    digitalWrite(ledPin, LOW);
    pirStat = LOW;
  }
}
