

#ifndef lib_4motor_h
#define lib_4motor_h

#include <Arduino.h>

#define ON true
#define OFF false

class lib_4motor
{
public:
  lib_4motor(int dir_pin1,int dir_pin2,int dir_pin3,int dir_pin4,int pwm_pin1,int pwm_pin2,int pwm_pin3,int pwm_pin4);
 void forward(int motorspeed);
 

void back(int motorspeed2);
void wait();
void left(int motorspeed3);
void right(int motorspeed9);
void inch_forward(int motorspeed4,int delay_val);
void inch_left(int motorspeed5,int delay_val2);
void inch_right(int motorspeed6,int delay_val3);



private:
  uint8_t dir1;
   uint8_t dir2;
     uint8_t dir3;
   uint8_t dir4;
    uint8_t pwm1;
    uint8_t pwm2;
    uint8_t pwm3;
    uint8_t pwm4;
};

#endif
