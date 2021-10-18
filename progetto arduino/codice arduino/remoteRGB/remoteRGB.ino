#include <IRremote.h>  //including infrared remote header file     
int RECV_PIN = 7; // the pin where you connect the output pin of IR sensor     
     
void setup()     
{     
Serial.begin(9600);     
IrReceiver.begin(RECV_PIN, DISABLE_LED_FEEDBACK);     
} 
void loop()     
{     
if (IrReceiver.decode())// Returns 0 if no data ready, 1 if data ready.     
{     
 Serial.println(" ");     
 Serial.print("Code: ");     
 Serial.println(IrReceiver.decodedIRData.decodedRawData, HEX); //prints the value a a button press     
 Serial.println(" ");     
 IrReceiver.resume(); // Restart the ISR state machine and Receive the next value     
}  
}   
