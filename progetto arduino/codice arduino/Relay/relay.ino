
int pinRelay = 6;

void setup()
{
pinMode(pinRelay, OUTPUT);
}
void loop()
{

digitalWrite(pinRelay, HIGH);
delay(5000);
digitalWrite(pinRelay, LOW);
delay(5000);
}
