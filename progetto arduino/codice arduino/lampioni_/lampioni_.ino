#define foto A0
#define led 13 
int valFoto;
void setup()
{
  pinMode(foto, INPUT);
  pinMode(led, OUTPUT);
  
}

void loop()
{
  valFoto = analogRead(foto);
  if(valFoto <= 600)
    digitalWrite(led, HIGH);
  else 
    digitalWrite(led, LOW);
  delay(100);
}
  
