/*
 * Questo programma fa aisbuhcbasihbcaihs
 * 
 */

int motor1pin1 = 2;
int motor1pin2 = 3;
int enablepin = 5;
int speedout = 9;

void setup() {
  pinMode(motor1pin1, OUTPUT);
  pinMode(motor1pin2, OUTPUT);
  pinMode(enablepin, OUTPUT);
  pinMode(speedout, OUTPUT);
  digitalWrite(enablepin, HIGH);
  digitalWrite(motor1pin1, HIGH);
  digitalWrite(motor1pin2, LOW);
}

void loop() {
  analogWrite(speedout, 255);
  
  digitalWrite(enablepin,HIGH);
  digitalWrite(motor1pin1, HIGH);
  digitalWrite(motor1pin2, LOW);
  delay(3000);

  digitalWrite(enablepin,LOW);
  digitalWrite(motor1pin1, LOW);
  digitalWrite(motor1pin2, LOW);
  delay(1000);

  digitalWrite(enablepin,HIGH);
  digitalWrite(motor1pin1, LOW);
  digitalWrite(motor1pin2, HIGH);
  delay(3000);

  digitalWrite(enablepin,LOW);
  digitalWrite(motor1pin1, LOW);
  digitalWrite(motor1pin2, LOW);
  delay(1000);
}
