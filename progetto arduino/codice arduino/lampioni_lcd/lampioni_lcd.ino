#define foto A0
#define led 13 
#define led2 11
#define led3 9

// include the library code:
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(7, 6, 5, 4, 3, 2);

int valFoto;
void setup()
{
  pinMode(foto, INPUT);
  pinMode(led, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);

  // set up the LCD's number of columns and rows:
  lcd.begin(20, 2);
  // Print a message to the LCD.
  lcd.print(" Benvenuti alla");
  lcd.setCursor(0, 1);
  lcd.print("casa domotica 3I");
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

  lcd.begin(20, 2);
  // Print a message to the LCD.
  lcd.print(" Benvenuti alla");
  lcd.setCursor(0, 1);
  lcd.print("casa domotica 3I");
  analogWrite(9,20);
  delay(5000);
  lcd.setCursor(0, 0);
  lcd.print("Con sistema di  ");
  lcd.setCursor(0, 1);
  lcd.print("illuminazione   ");
  delay(1000);
  lcd.setCursor(0, 1);
  lcd.print("interna         ");
  delay(1000);
  lcd.setCursor(0, 1);
  lcd.print("illuminazione   ");
  delay(1000);
  lcd.setCursor(0, 1);
  lcd.print("interna         ");
  
  delay(5000);
  lcd.setCursor(0, 0);
  lcd.print("Con sistema di  ");
  lcd.setCursor(0, 1);
  lcd.print("antifurto    ");
  
  delay(5000);
  lcd.setCursor(0, 0);
  lcd.print("Con sistema di  ");
  lcd.setCursor(0, 1);
  lcd.print("irrigazione    ");
  
  delay(5000);
  lcd.setCursor(0, 0);
  lcd.print("Con sistema di  ");
  lcd.setCursor(0, 1);
  lcd.print("illuminazione   ");
  delay(1000);
  lcd.setCursor(0, 1);
  lcd.print("esterna         ");
  delay(1000);
  lcd.setCursor(0, 1);
  lcd.print("illuminazione   ");
  delay(1000);
  lcd.setCursor(0, 1);
  lcd.print("esterna         ");
  
  delay(5000);
  lcd.setCursor(0, 0);
  lcd.print("La porta        ");
  lcd.setCursor(0, 1);
  lcd.print("automatica   ");
  
  delay(5000);
  lcd.setCursor(0, 0);
  lcd.print("Poi ci sono io       ");
  lcd.setCursor(0, 1);
  lcd.print("il schermo LCD       ");
  
  delay(5000);
  lcd.setCursor(0, 0);
  lcd.print(" Benvenuti alla");
  lcd.setCursor(0, 1);
  lcd.print("casa domotica 3^I");
  
}
  
