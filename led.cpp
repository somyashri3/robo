
 
#include <Arduino.h>
#include "led.h"

led::led(int pin){
 pinMode(pin, OUTPUT);
 pinNumber = pin; 
}
 
void led::blink(bool value){
 if(value == true){
 digitalWrite(pinNumber,HIGH);
 delay(1000);
 digitalWrite(pinNumber,LOW);
 delay(1000);
 }else{
 digitalWrite(pinNumber,LOW);
 }
}

void led::blink(bool value, int blinkLength ){
 if(value == true){
 digitalWrite(pinNumber,HIGH);
 delay(blinkLength);
 digitalWrite(pinNumber,LOW);
 delay(blinkLength);
 }else{
 digitalWrite(pinNumber,LOW);
 }
}
 
void led::blink(bool value, int blinkLength, int blinkLoops){
 if(value == true){
 for(int i=0;i<blinkLoops;i++){
 digitalWrite(pinNumber,HIGH);
 delay(blinkLength);
 digitalWrite(pinNumber,LOW);
 delay(blinkLength);
 }
 }else{
 digitalWrite(pinNumber,LOW);
 }
}
