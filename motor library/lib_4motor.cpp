
 
#include <Arduino.h>
#include "lib_4motor.h"

lib_4motor::lib_4motor(int dir_pin1,int dir_pin2,int dir_pin3,int dir_pin4,int pwm_pin1,int pwm_pin2,int pwm_pin3,int pwm_pin4){
 pinMode(dir_pin1, OUTPUT);
 dir1 = dir_pin1; 
  pinMode(pwm_pin1, OUTPUT);
 pwm1 = pwm_pin1; 
 pinMode(dir_pin2, OUTPUT);
 dir2 = dir_pin2; 
  pinMode(pwm_pin2, OUTPUT);
 pwm2 = pwm_pin2; 
  pinMode(dir_pin3, OUTPUT);
 dir3 = dir_pin3; 
  pinMode(pwm_pin3, OUTPUT);
 pwm3 = pwm_pin3; 
 pinMode(dir_pin4, OUTPUT);
 dir4 = dir_pin4; 
  pinMode(pwm_pin4, OUTPUT);
 pwm4 = pwm_pin4; 
 
}
 
void lib_4motor::forward(int motorspeed1){
 
  digitalWrite(dir1,LOW);
   analogWrite(pwm1,motorspeed1);
    digitalWrite(dir2,LOW);
  analogWrite(pwm2,motorspeed1 );
     digitalWrite(dir3,LOW);
   analogWrite(pwm3,motorspeed1);
  digitalWrite(dir4,LOW);
  analogWrite(pwm4,motorspeed1 );
 }


 
void lib_4motor::back(int motorspeed2){
 
  digitalWrite(dir1,HIGH);
   analogWrite(pwm1,motorspeed2);
    digitalWrite(dir2,HIGH);
  analogWrite(pwm2,motorspeed2);
     digitalWrite(dir3,HIGH);
   analogWrite(pwm3,motorspeed2);
  digitalWrite(dir4,HIGH);
  analogWrite(pwm4,motorspeed2);

 }
void lib_4motor::wait(){

 analogWrite(pwm1,0);
  analogWrite(pwm3,0 );
    analogWrite(pwm2,0);
  analogWrite(pwm4,0 );

}
 void lib_4motor::left(int motorspeed3){
  
   digitalWrite(dir1,HIGH);
   analogWrite(pwm1,motorspeed3);
    digitalWrite(dir2,LOW);
  analogWrite(pwm2,motorspeed3);
     digitalWrite(dir3,HIGH);
   analogWrite(pwm3,motorspeed3);
  digitalWrite(dir4,LOW);
  analogWrite(pwm4,motorspeed3);
  
  }

void lib_4motor::right(int motorspeed9){
   digitalWrite(dir1,LOW);
   analogWrite(pwm1,motorspeed9);
    digitalWrite(dir2,HIGH);
  analogWrite(pwm2,motorspeed9);
     digitalWrite(dir3,LOW);
   analogWrite(pwm3,motorspeed9);
  digitalWrite(dir4,HIGH);
  analogWrite(pwm4,motorspeed9);
} 

void lib_4motor::inch_forward(int motorspeed4,int delay_val){
  digitalWrite(dir1,LOW);
   analogWrite(pwm1,motorspeed4);
    digitalWrite(dir2,LOW);
  analogWrite(pwm2,motorspeed4);
     digitalWrite(dir3,LOW);
   analogWrite(pwm3,motorspeed4);
  digitalWrite(dir4,LOW);
  analogWrite(pwm4,motorspeed4);
  
   delay(delay_val);
   
     digitalWrite(dir1,HIGH);
   analogWrite(pwm1,motorspeed4);
    digitalWrite(dir2,HIGH);
  analogWrite(pwm2,motorspeed4);
     digitalWrite(dir3,HIGH);
   analogWrite(pwm3,motorspeed4);
  digitalWrite(dir4,HIGH);
  analogWrite(pwm4,motorspeed4);
  
delay(delay_val);    
  }

  void lib_4motor::inch_left(int motorspeed5,int delay_val2){
    digitalWrite(dir1,HIGH);
   analogWrite(pwm1,motorspeed5);
    digitalWrite(dir2,LOW);
  analogWrite(pwm2,motorspeed5);
     digitalWrite(dir3,HIGH);
   analogWrite(pwm3,motorspeed5);
  digitalWrite(dir4,LOW);
  analogWrite(pwm4,motorspeed5);
  
  delay(delay_val2);
  
   digitalWrite(dir1,LOW);
   analogWrite(pwm1,motorspeed5);
    digitalWrite(dir2,HIGH);
  analogWrite(pwm2,motorspeed5);
     digitalWrite(dir3,LOW);
   analogWrite(pwm3,motorspeed5);
  digitalWrite(dir4,HIGH);
  analogWrite(pwm4,motorspeed5);
  
delay(delay_val2);
}

 void lib_4motor::inch_right(int motorspeed6,int delay_val3){ 
  digitalWrite(dir1,LOW);
   analogWrite(pwm1,motorspeed6);
    digitalWrite(dir2,HIGH);
  analogWrite(pwm2,motorspeed6);
     digitalWrite(dir3,LOW);
   analogWrite(pwm3,motorspeed6);
  digitalWrite(dir4,HIGH);
  analogWrite(pwm4,motorspeed6);
  
  delay(delay_val3);

digitalWrite(dir1,HIGH);
   analogWrite(pwm1,motorspeed6);
    digitalWrite(dir2,LOW);
  analogWrite(pwm2,motorspeed6);
     digitalWrite(dir3,HIGH);
   analogWrite(pwm3,motorspeed6);
  digitalWrite(dir4,LOW);
  analogWrite(pwm4,motorspeed6);

  delay(delay_val3);
}
