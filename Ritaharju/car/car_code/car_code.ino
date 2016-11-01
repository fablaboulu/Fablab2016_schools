#include <Servo.h>
const int CONTINOUS_SERVO = 10;
const int SERVO = 6;
Servo contservo;
Servo servo;
boolean isMoving = false;
int pos = 0;
void setup() {
  contservo.attach(CONTINOUS_SERVO);
  servo.attach(SERVO);
  contservo.write(0);
  isMoving=true;
}

void loop() {
  servo.write(90);
  delay(6000);
  servo.write(0);
  delay(2000);
  servo.write(90);
  delay(6000);
  servo.write(180);
  delay(2000);
  //For a normal servo
//  for (pos = 0; pos <= 180; pos += 1) { // goes from 0 degrees to 180 degrees
//    // in steps of 1 degree
//    myservo.write(pos);              // tell servo to go to position in variable 'pos'
//    delay(15);                       // waits 15ms for the servo to reach the position
//  }
//  for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
//    myservo.write(pos);              // tell servo to go to position in variable 'pos'
//    delay(15);                       // waits 15ms for the servo to reach the position
//  }
  //For a continous servo
//  myservo.write(0);

}
