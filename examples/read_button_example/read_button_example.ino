
const int BUTTON = 10;
void setup() {
 // initialize the pushbutton pin as an input:
  pinMode(BUTTON, INPUT);
  //start serial connection
  Serial.begin(9600);
}

void loop() {
  //read the pushbutton value into a variable
  int sensorVal = digitalRead(BUTTON);
  //When button is pressed, I will get 0 (LOW) since buttons are uisng pull up resistors.
  if (sensorVal == LOW){
    Serial.println("Button pressed");
    //Wait till I release the button
    while(sensorVal==LOW){
      delay(500);
    }
    Serial.println("Button released");
  }

}
