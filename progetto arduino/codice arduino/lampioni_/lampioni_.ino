#define foto A0
#define led 13 
#define led2 11
#define led3 9

int valFoto;
void setup()
{
  pinMode(foto, INPUT);
  pinMode(led, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  
}

void loop()
{
  valFoto = analogRead(foto);
  if(valFoto <= 25){
    digitalWrite(led, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
  }
  else {
    digitalWrite(led, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
  }
  delay(100);
}
  
