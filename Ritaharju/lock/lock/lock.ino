#include <Servo.h>
const int SERVO1 = 10;
Servo myservo;

//currentState =0 => open
//currentState =1 => close
int state=1;
int previous=0;
int reading;

long time = 0;         // the last time the output pin was toggled
long debounce = 200;   // the debounce time, increase if the output flickers

void setup() {

  myservo.attach(SERVO1);
  myservo.write(0);
  pinMode(5, INPUT_PULLUP);
}

void open() {
   myservo.write(0); 
}

void close(){
  myservo.write(90);
}
void loop() {
  //Read digital input
  //If 1 (button pressed)
  //   If currentState == OPEN -> 
  //      close();
  //      currentState= CLOSE;          
  //          
  //   If currentState == CLOSE ->
  //           open();
  //           currentState =OPEN;


  
reading = digitalRead(5);
// if the input just went from LOW and HIGH and we've waited long enough
  // to ignore any noise on the circuit, toggle the output pin and remember
  // the time
  if (reading == HIGH && previous == LOW && millis() - time > debounce) {
    if (state == HIGH)
      state = 0;
    else
      state = 1;

    time = millis();    
  }

   myservo.write(state * 180);

  previous = reading;
}

