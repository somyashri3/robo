

#ifndef led_h
#define led_h

#include <Arduino.h>

#define ON true
#define OFF false

class led
{
public:
 led(int pin);  //Constructor. attach pin to led
  void blink(bool value);  //enable blinking with 1s duration
  void blink(bool value, int blinkLength);   //enable blinking with blink duration
  void blink(bool value, int blinkLength, int blinkLoops);  //enable blinking with blink duration and number of loops
private:
  uint8_t pinNumber;
};

#endif
