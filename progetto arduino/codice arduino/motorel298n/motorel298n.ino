//controllo motore
int motor1pin1 = 2;
int motor1pin2 = 3;
int enablepin = 5;
int speedout = 9;

int button = 12;

void setup() {
  //parte del motore
  pinMode(motor1pin1, OUTPUT);
  pinMode(motor1pin2, OUTPUT);
  pinMode(enablepin, OUTPUT);
  pinMode(speedout, OUTPUT);
  
  digitalWrite(enablepin, HIGH);
  digitalWrite(motor1pin1, HIGH);
  digitalWrite(motor1pin2, LOW);


  //parte del bottone
  pinMode(button, INPUT);
  digitalWrite(button, LOW);

}

void loop() {

  // faccio in modo tale che se schiaccio il bottone faccio girare pausa e rigirare
  analogWrite(speedout, 255);
    
  int lettura = digitalRead(button);
  if(lettura == HIGH){
    //giro da una parte
    digitalWrite(enablepin,HIGH);
    digitalWrite(motor1pin1, HIGH);
    digitalWrite(motor1pin2, LOW);
    delay(5000);
  
    //spengo
    digitalWrite(enablepin,LOW);
    digitalWrite(motor1pin1, LOW);
    digitalWrite(motor1pin2, LOW);
    delay(3000);
  
    //giro dall'altra parte
    digitalWrite(enablepin,HIGH);
    digitalWrite(motor1pin1, LOW);
    digitalWrite(motor1pin2, HIGH);
    delay(5000);
  }
  else{
    digitalWrite(enablepin,LOW);
    digitalWrite(motor1pin1, LOW);
    digitalWrite(motor1pin2, LOW);
  }
  
  delay(100);

  /*
  analogWrite(speedout, 255);

  //giro da una parte
  digitalWrite(enablepin,HIGH);
  digitalWrite(motor1pin1, HIGH);
  digitalWrite(motor1pin2, LOW);
  delay(3000);

  //spengo
  digitalWrite(enablepin,LOW);
  digitalWrite(motor1pin1, LOW);
  digitalWrite(motor1pin2, LOW);
  delay(10000);

  //giro dall'altra parte
  digitalWrite(enablepin,HIGH);
  digitalWrite(motor1pin1, LOW);
  digitalWrite(motor1pin2, HIGH);
  delay(3000);
  */
  
}
