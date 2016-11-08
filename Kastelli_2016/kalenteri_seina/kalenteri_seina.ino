#include <Servo.h>
const int SERVO1=10;
const int STEP = 8;
const int DELAY =4000;
Servo myservo;
int pos=0;
void setup() {
myservo.attach(10);
myservo.write(0);
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
if (pos==0){
  pos = STEP;
  myservo.write(pos);
  delay(DELAY);
}
if (pos == STEP){
  pos = 0;
  myservo.write(pos);
  delay(DELAY);
}
}
