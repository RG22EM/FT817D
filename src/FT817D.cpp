#include "Arduino.h"
#include "FT817.h"
 
FT817::FT817(int pin)
{
  pinMode(pin, OUTPUT);
  _pin = pin;
}
 
void FT817::dot()
{
  digitalWrite(_pin, HIGH);
  delay(250);
  digitalWrite(_pin, LOW);
  delay(250);  
}
 
void FT817::dash()
{
  digitalWrite(_pin, HIGH);
  delay(1000);
  digitalWrite(_pin, LOW);
  delay(250);
}
