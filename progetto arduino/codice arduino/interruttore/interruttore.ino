int stato = LOW;
void setup()
{
  pinMode(10, OUTPUT);
  pinMode(3, INPUT);
}

void loop()
{
 if(digitalRead(3) == HIGH){
   stato = !stato;// vado a mettere il contrari del valore della variabile 
   delay(200);
 }

 if(stato == HIGH)
  digitalWrite(10, HIGH);
 else 
  digitalWrite(10, LOW);
}
