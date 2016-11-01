#include <Servo.h>
const int SERVO1 = 10;
Servo myservo;

int pos = 0;
void setup() {

  myservo.attach(SERVO1);
  pinMode(3, INPUT_PULLUP);
}

void loop() {
  int sensorVal = digitalRead(3);
  if (sensorVal == LOW)
    myservo.write(30);
  else
    myservo.write(180);
//  //For a normal servo
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
