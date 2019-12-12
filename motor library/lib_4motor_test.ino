//To run a HOLONOMIC drive


//include this library in your code
#include "lib_4motor.h"


//Create a new instance of the library
//Call the pin "pin"
//motor 4 direction pin are connected to 6,7,8,9 respectively
//motor 4 pwm pin are connected to 2,3,4,5 respectively

lib_4motor pin(6,7,8,9,2,3,4,5);  

void setup() {
  
}

void loop() {
/*write the condition and call the required function,
pin.back(speed);     //as a parameter mention the required speed
pin.right(speed);
pin.left(speed);
pin.inch_forward(speed,delay);     //as a parameter mention your speed and delay
pin.inch_right(speed,delay);
pin.inch_left(speed,delay);
*/
pin.wait();          

}
