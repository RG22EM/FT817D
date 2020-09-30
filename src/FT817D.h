/*Библиотека реализующая функции трансивера FT-817 / FT-857 /FT-897 
*
*/
#ifndef FT817_h
#define FT817_h

#include "Arduino.h"

class FT817
{
  public:
    FT817(int pin);
    void dot();
    void dash();
  private:
    int _pin;
};
 
#endif

