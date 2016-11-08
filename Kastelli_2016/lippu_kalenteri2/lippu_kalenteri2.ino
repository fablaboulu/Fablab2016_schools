#include <Servo.h>
const int SERVO1 = 3;
const int SERVO2 = 5;
//const long DELAY = 86400000;
const long DELAY1 = 4000;
const long DELAY2 = 10000;
const int STEP = 15; 
Servo servo1;
Servo servo2;
int pos_servo1 = 0;
int pos_servo2 =0;
void setup() {
  servo1.attach(SERVO1);
  servo1.write(pos_servo1);
  servo2.attach(SERVO2);
  servo2.write(pos_servo2);
}

void moveServo1(){
  pos_servo1 = pos_servo1 +STEP;
  servo1.write(pos_servo1);
  delay(DELAY1);
}
void moveServo2(){
  pos_servo2 = 160;
  servo2.write(pos_servo2);
  delay(DELAY2);
  pos_servo2 =0;
  servo2.write(pos_servo2);
  
}

void loop() {
  moveServo1();
  moveServo2();
  
 
  // put your main code here, to run repeatedly:

}
