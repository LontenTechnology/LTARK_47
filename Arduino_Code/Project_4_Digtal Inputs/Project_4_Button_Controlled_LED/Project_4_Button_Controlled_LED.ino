int Redled=11;// initialize Redled 11
int inpin=7;// initialize pin 7
boolean change=false;// define val
void setup()
{
    pinMode(Redled,OUTPUT);// set LED pin as “output”
    pinMode(inpin,INPUT);// set button pin as “input”
}
void loop()
{
  while(digitalRead(inpin)==HIGH)
  {
    delay(500);
    if(change==true)
    {
      digitalWrite(Redled,LOW);
      change=!change;
    }
    else
    {
      digitalWrite(Redled,HIGH);
      change=!change;
    }
  }
}
