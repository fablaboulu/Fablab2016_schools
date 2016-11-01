#include <Servo.h>
const int SERVO1 = 10;
const int BUTTON = 3; 
Servo myservo;
const int INITIAL_POSITION=10;
const int FINAL_POSITION=110;
int movement = 0;



void setup() {

  pinMode(3, INPUT_PULLUP);
  myservo.attach(SERVO1);
  myservo.write(INITIAL_POSITION);
  randomSeed(analogRead(A0));
  //Serial.begin(9600);
}

void loop() {
  int sensorVal = digitalRead(BUTTON);
  if (sensorVal == LOW){
    myservo.write(INITIAL_POSITION);
  }
  else{
    movement = random(0,4);
    switch(movement){
      case 0: //Standard option
      case 1:
      
      {
        //Serial.println("In 0,1");
        myservo.write(FINAL_POSITION);
        delay(150);
        break;
      }
      case 2: //Move slowly till the end
      {
        for (int i=INITIAL_POSITION; i<FINAL_POSITION-30; i+=5){
          myservo.write(i);
          delay(100);
        }
        delay(150);
        myservo.write(FINAL_POSITION);
        delay(150);
        break;
      }
      case 3: //Move to open and then wait
      {
        myservo.write((FINAL_POSITION-INITIAL_POSITION)/2);
        delay(1500);
        myservo.write(FINAL_POSITION+20);
        delay(200);
        break;
      }
    }
  }
}


