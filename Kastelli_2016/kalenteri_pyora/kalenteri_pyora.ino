#include <Servo.h>
const int SERVO1 = 3;
//const long DELAY = 86400000;
const long DELAY = 4000;
Servo myservo;
int pos = 0;
void setup() {
  myservo.attach(SERVO1);
  myservo.write(pos);
}



void loop() {
  pos = pos +18;
  if(pos >180){
    pos = 0;
  }
  myservo.write(pos);
  delay(DELAY);
  
 
  // put your main code here, to run repeatedly:

}
