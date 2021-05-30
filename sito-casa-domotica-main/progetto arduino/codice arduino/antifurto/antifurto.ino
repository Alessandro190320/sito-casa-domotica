/*
antifurto con controllo generale da bottone
*/

const int buttonPin = 5;     // the number of the pushbutton pin
const int ledPin =  13;      // the number of the LED pin
int pirPin = 2;              // PIR Out pin 
int pirStat = 0;             // PIR status
int cnt =0;
int buttonState = 0;         // variable for reading the pushbutton status

void setup() {
 pinMode(ledPin, OUTPUT);     
 pinMode(pirPin, INPUT);     
 pinMode(ledPin, OUTPUT);
 pinMode(buttonPin, INPUT);
 Serial.begin(9600);
}
void loop(){
  buttonState = digitalRead(buttonPin);

  if (buttonState == HIGH) {
    cnt++;
    delay(250);
  } 

  if(cnt%2==0){
    pirStat = digitalRead(pirPin); 
    if (pirStat == HIGH) {            // if motion detected
      digitalWrite(ledPin, HIGH);     // turn LED ON
    } 
    else {
      digitalWrite(ledPin, LOW);      // turn LED OFF if we have no motion
    }
  }
  else{
    digitalWrite(ledPin, LOW);
    pirStat = LOW;
  }
} 
