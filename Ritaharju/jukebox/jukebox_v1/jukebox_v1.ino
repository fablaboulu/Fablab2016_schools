/*
  Button

  Turns on and off a light emitting diode(LED) connected to digital
  pin 13, when pressing a pushbutton attached to pin 7.


  The circuit:
  LED attached from pin 13 to ground
  pushbutton attached to pin 2 from +5V
  10K resistor attached to pin 2 from ground

  Note: on most Arduinos there is already an LED on the board
  attached to pin 13.


  created 2005
  by DojoDave <http://www.0j0.org>
  modified 17 Jun 2009
  by Tom Igoe

  http://www.arduino.cc/en/Tutorial/Button
*/

// constants won't change. They're used here to
// set pin numbers:
const int buttonPin1 = 2; // the number of the pushbutton pin
const int buttonPin2 = 4;
const int buttonPin3 = 7;
const int buttonPin4 = 13;
int Buzzer1 = 8;
int shortTone = 80;
int longTone = 200;
int standardDelay = 50;
int delayBetweenBars = 50;
#define  C0 16.35
#define Db0 17.32
#define D0  18.35
#define Eb0 19.45
#define E0  20.60
#define F0  21.83
#define Gb0 23.12
#define G0  24.50
#define Ab0 25.96
#define LA0 27.50
#define Bb0 29.14
#define B0  30.87
#define C1  32.70
#define Db1 34.65
#define D1  36.71
#define Eb1 38.89
#define E1  41.20
#define F1  43.65
#define Gb1 46.25
#define G1  49.00
#define Ab1 51.91
#define LA1 55.00
#define Bb1 58.27
#define B1  61.74
#define C2  65.41
#define Db2 69.30
#define D2  73.42
#define Eb2 77.78
#define E2  82.41
#define F2  87.31
#define Gb2 92.50
#define G2  98.00
#define Ab2 103.83
#define LA2 110.00
#define Bb2 116.54
#define B2  123.47
#define C3  130.81
#define Db3 138.59
#define D3  146.83
#define Eb3 155.56
#define E3  164.81
#define F3  174.61
#define Gb3 185.00
#define G3  196.00
#define Ab3 207.65
#define LA3 220.00
#define Bb3 233.08
#define B3  246.94
#define C4  261.63
#define Db4 277.18
#define D4  293.66
#define Eb4 311.13
#define E4  329.63
#define F4  349.23
#define Gb4 369.99
#define G4  392.00
#define Ab4 415.30
#define LA4 440.00
#define Bb4 466.16
#define B4  493.88
#define C5  523.25
#define Db5 554.37
#define D5  587.33
#define Eb5 622.25
#define E5  659.26
#define F5  698.46
#define Gb5 739.99
#define G5  783.99
#define Ab5 830.61
#define LA5 880.00
#define Bb5 932.33
#define B5  987.77
#define C6  1046.50
#define Db6 1108.73
#define D6  1174.66
#define Eb6 1244.51
#define E6  1318.51
#define F6  1396.91
#define Gb6 1479.98
#define G6  1567.98
#define Ab6 1661.22
#define LA6 1760.00
#define Bb6 1864.66
#define B6  1975.53
#define C7  2093.00
#define Db7 2217.46
#define D7  2349.32
#define Eb7 2489.02
#define E7  2637.02
#define F7  2793.83
#define Gb7 2959.96
#define G7  3135.96
#define Ab7 3322.44
#define LA7 3520.01
#define Bb7 3729.31
#define B7  3951.07
#define C8  4186.01
#define Db8 4434.92
#define D8  4698.64
#define Eb8 4978.03
#define NOTE_B0  31
#define NOTE_C1  33
#define NOTE_CS1 35
#define NOTE_D1  37
#define NOTE_DS1 39
#define NOTE_E1  41
#define NOTE_F1  44
#define NOTE_FS1 46
#define NOTE_G1  49
#define NOTE_GS1 52
#define NOTE_A1  55
#define NOTE_AS1 58
#define NOTE_B1  62
#define NOTE_C2  65
#define NOTE_CS2 69
#define NOTE_D2  73
#define NOTE_DS2 78
#define NOTE_E2  82
#define NOTE_F2  87
#define NOTE_FS2 93
#define NOTE_G2  98
#define NOTE_GS2 104
#define NOTE_A2  110
#define NOTE_AS2 117
#define NOTE_B2  123
#define NOTE_C3  131
#define NOTE_CS3 139
#define NOTE_D3  147
#define NOTE_DS3 156
#define NOTE_E3  165
#define NOTE_F3  175
#define NOTE_FS3 185
#define NOTE_G3  196
#define NOTE_GS3 208
#define NOTE_A3  220
#define NOTE_AS3 233
#define NOTE_B3  247
#define NOTE_C4  262
#define NOTE_CS4 277
#define NOTE_D4  294
#define NOTE_DS4 311
#define NOTE_E4  330
#define NOTE_F4  349
#define NOTE_FS4 370
#define NOTE_G4  392
#define NOTE_GS4 415
#define NOTE_A4  440
#define NOTE_AS4 466
#define NOTE_B4  494
#define NOTE_C5  523
#define NOTE_CS5 554
#define NOTE_D5  587
#define NOTE_DS5 622
#define NOTE_E5  659
#define NOTE_F5  698
#define NOTE_FS5 740
#define NOTE_G5  784
#define NOTE_GS5 831
#define NOTE_A5  880
#define NOTE_AS5 932
#define NOTE_B5  988
#define NOTE_C6  1047
#define NOTE_CS6 1109
#define NOTE_D6  1175
#define NOTE_DS6 1245
#define NOTE_E6  1319
#define NOTE_F6  1397
#define NOTE_FS6 1480
#define NOTE_G6  1568
#define NOTE_GS6 1661
#define NOTE_A6  1760
#define NOTE_AS6 1865
#define NOTE_B6  1976
#define NOTE_C7  2093
#define NOTE_CS7 2217
#define NOTE_D7  2349
#define NOTE_DS7 2489
#define NOTE_E7  2637
#define NOTE_F7  2794
#define NOTE_FS7 2960
#define NOTE_G7  3136
#define NOTE_GS7 3322
#define NOTE_A7  3520
#define NOTE_AS7 3729
#define NOTE_B7  3951
#define NOTE_C8  4186
#define NOTE_CS8 4435
#define NOTE_D8  4699
#define NOTE_DS8 4978
#define BPM 120    //  you can change this value changing all the others
#define H 2*Q //half 2/4
#define Q 60000/BPM //quarter 1/4 
#define E Q/2   //eighth 1/8
#define S Q/4 // sixteenth 1/16
#define W 4*Q // whole 4/4

int speakerPin = 8;

// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status

void setup() {
  // initialize the piezo as output:
  pinMode(Buzzer1, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin1, INPUT_PULLUP);
  pinMode(buttonPin2, INPUT_PULLUP);
  pinMode(buttonPin3, INPUT_PULLUP);
  pinMode(buttonPin4, INPUT_PULLUP);
}

void play_song1() {

  // play th Music
  tone(8,  NOTE_B3, shortTone);
  delay(shortTone);
  noTone(8);
  delay(standardDelay);
  tone(8,  NOTE_B3, shortTone);
  delay(shortTone);
  noTone(8);
  delay(standardDelay);
  tone(8,  NOTE_B3, shortTone);
  delay(shortTone);
  noTone(8);
  delay(standardDelay);
  tone(8,  NOTE_B3, shortTone);
  delay(shortTone);
  noTone(8);
  delay(standardDelay);
  tone(8,  NOTE_B3, longTone);
  delay(longTone);
  noTone(8);
  delay(delayBetweenBars);

  tone(8,  NOTE_B3, shortTone);
  delay(shortTone);
  noTone(8);
  delay(standardDelay);
  tone(8, NOTE_B3, shortTone);
  delay(shortTone);
  noTone(8);
  delay(standardDelay);
  tone(8,  NOTE_B3, shortTone);
  delay(shortTone);
  noTone(8);
  delay(standardDelay);
  tone(8,  NOTE_B3, shortTone);
  delay(shortTone);
  noTone(8);
  delay(standardDelay);
  tone(8,  NOTE_B3, shortTone);
  delay(shortTone);
  noTone(8);
  delay(standardDelay);
  tone(8,  NOTE_B3, shortTone);
  delay(shortTone);
  noTone(8);
  delay(standardDelay);
  tone(8,  NOTE_B3, longTone);
  delay(longTone);
  noTone(8);
  delay(standardDelay);

  tone(8,  NOTE_E4, shortTone);
  delay(shortTone);
  noTone(8);
  delay(standardDelay);
  tone(8, NOTE_E4, shortTone);
  delay(shortTone);
  noTone(8);
  delay(standardDelay);
  tone(8,  NOTE_E4, shortTone);
  delay(shortTone);
  noTone(8);
  delay(standardDelay);
  tone(8,  NOTE_E4, shortTone);
  delay(shortTone);
  noTone(8);
  delay(standardDelay);
  tone(8,  NOTE_E4, shortTone);
  delay(shortTone);
  noTone(8);
  delay(standardDelay);
  tone(8,  NOTE_E4, shortTone);
  delay(shortTone);
  noTone(8);
  delay(standardDelay);
  tone(8,  NOTE_E4, longTone);
  delay(longTone);
  noTone(8);
  delay(standardDelay);


  tone(8,  NOTE_D4, shortTone);
  delay(shortTone);
  noTone(8);
  delay(standardDelay);
  tone(8, NOTE_D4, shortTone);
  delay(shortTone);
  noTone(8);
  delay(standardDelay);
  tone(8,  NOTE_D4, shortTone);
  delay(shortTone);
  noTone(8);
  delay(standardDelay);
  tone(8,  NOTE_D4, shortTone);
  delay(shortTone);
  noTone(8);
  delay(standardDelay);
  tone(8,  NOTE_D4, shortTone);
  delay(shortTone);
  noTone(8);
  delay(standardDelay);
  tone(8,  NOTE_D4, shortTone);
  delay(shortTone);
  noTone(8);
  delay(standardDelay);
  tone(8,  NOTE_D4, longTone);
  delay(longTone);
  noTone(8);
  delay(standardDelay);

  tone(8, NOTE_A3, longTone);
  delay(longTone);
  noTone(8);
  delay(standardDelay);

  tone(8,  NOTE_B3, shortTone);
  delay(shortTone);
  noTone(8);
  delay(standardDelay);
  tone(8,  NOTE_B3, shortTone);
  delay(shortTone);
  noTone(8);
  delay(standardDelay);
  tone(8,  NOTE_B3, shortTone);
  delay(shortTone);
  noTone(8);
  delay(standardDelay);
  tone(8,  NOTE_B3, shortTone);
  delay(shortTone);
  noTone(8);
  delay(standardDelay);
  tone(8,  NOTE_B3, longTone);
  delay(longTone);
  noTone(8);
  delay(delayBetweenBars);

  tone(8,  NOTE_B3, shortTone);
  delay(shortTone);
  noTone(8);
  delay(standardDelay);
  tone(8, NOTE_B3, shortTone);
  delay(shortTone);
  noTone(8);
  delay(standardDelay);
  tone(8,  NOTE_B3, shortTone);
  delay(shortTone);
  noTone(8);
  delay(standardDelay);
  tone(8,  NOTE_B3, shortTone);
  delay(shortTone);
  noTone(8);
  delay(standardDelay);
  tone(8,  NOTE_B3, shortTone);
  delay(shortTone);
  noTone(8);
  delay(standardDelay);
  tone(8,  NOTE_B3, shortTone);
  delay(shortTone);
  noTone(8);
  delay(standardDelay);
  tone(8,  NOTE_B3, longTone);
  delay(longTone);
  noTone(8);
  delay(standardDelay);

  tone(8, NOTE_E4, longTone);
  delay(longTone);
  noTone(8);
  delay(standardDelay);

  tone(8,  NOTE_B3, shortTone);
  delay(shortTone);
  noTone(8);
  delay(standardDelay);
  tone(8,  NOTE_B3, shortTone);
  delay(shortTone);
  noTone(8);
  delay(standardDelay);
  tone(8,  NOTE_B3, shortTone);
  delay(shortTone);
  noTone(8);
  delay(standardDelay);
  tone(8,  NOTE_B3, shortTone);
  delay(shortTone);
  noTone(8);
  delay(standardDelay);
  tone(8,  NOTE_B3, longTone);
  delay(longTone);
  noTone(8);
  delay(delayBetweenBars);

  tone(8,  NOTE_B3, shortTone);
  delay(shortTone);
  noTone(8);
  delay(standardDelay);
  tone(8, NOTE_B3, shortTone);
  delay(shortTone);
  noTone(8);
  delay(standardDelay);
  tone(8,  NOTE_B3, shortTone);
  delay(shortTone);
  noTone(8);
  delay(standardDelay);
  tone(8,  NOTE_B3, shortTone);
  delay(shortTone);
  noTone(8);
  delay(standardDelay);
  tone(8,  NOTE_B3, shortTone);
  delay(shortTone);
  noTone(8);
  delay(standardDelay);
  tone(8,  NOTE_B3, shortTone);
  delay(shortTone);
  noTone(8);
  delay(standardDelay);
  tone(8,  NOTE_B3, longTone);
  delay(longTone);
  noTone(8);
  delay(standardDelay);

  tone(8, NOTE_E4, longTone);
  delay(longTone);
  noTone(8);
  delay(standardDelay);


}

void play_song2() {
tone(8,660,100);
delay(150);
tone(8,660,100);
delay(300);
tone(8,660,100);
delay(300);
tone(8,510,100);
delay(100);
tone(8,660,100);
delay(300);
tone(8,770,100);
delay(550);
tone(8,380,100);
delay(575);

tone(9,510,100);
delay(450);
tone(8,380,100);
delay(400);
tone(8,320,100);
delay(500);
tone(8,440,100);
delay(300);
tone(8,480,80);
delay(330);
tone(8,450,100);
delay(150);
tone(8,430,100);
delay(300);
tone(8,380,100);
delay(200);
tone(8,660,80);
delay(200);
tone(8,760,50);
delay(150);
tone(8,860,100);
delay(300);
tone(8,700,80);
delay(150);
tone(8,760,50);
delay(350);
tone(8,660,80);
delay(300);
tone(8,520,80);
delay(150);
tone(8,580,80);
delay(150);
tone(8,480,80);
delay(500);

tone(8,510,100);
delay(450);
tone(8,380,100);
delay(400);
tone(8,320,100);
delay(500);
tone(8,440,100);
delay(300);
tone(8,480,80);
delay(330);
tone(8,450,100);
delay(150);
tone(8,430,100);
delay(300);
tone(8,380,100);
delay(200);
tone(8,660,80);
delay(200);
tone(8,760,50);
delay(150);
tone(8,860,100);
delay(300);
tone(8,700,80);
delay(150);
tone(8,760,50);
delay(350);
tone(8,660,80);
delay(300);
tone(8,520,80);
delay(150);
tone(8,580,80);
delay(150);
tone(8,480,80);
delay(500);

tone(8,500,100);
delay(300);

tone(8,760,100);
delay(100);
tone(8,720,100);
delay(150);
tone(8,680,100);
delay(150);
tone(8,620,150);
delay(300);

tone(8,650,150);
delay(300);
tone(8,380,100);
delay(150);
tone(8,430,100);
delay(150);

tone(8,500,100);
delay(300);
tone(8,430,100);
delay(150);
tone(8,500,100);
delay(100);
tone(8,570,100);
delay(220);

tone(8,500,100);
delay(300);

tone(8,760,100);
delay(100);
tone(8,720,100);
delay(150);
tone(8,680,100);
delay(150);
tone(8,620,150);
delay(300);

tone(8,650,200);
delay(300);

tone(8,1020,80);
delay(300);
tone(8,1020,80);
delay(150);
tone(8,1020,80);
delay(300);

tone(8,380,100);
delay(300);
tone(8,500,100);
delay(300);

tone(8,760,100);
delay(100);
tone(8,720,100);
delay(150);
tone(8,680,100);
delay(150);
tone(8,620,150);
delay(300);

tone(8,650,150);
delay(300);
tone(8,380,100);
delay(150);
tone(8,430,100);
delay(150);

tone(8,500,100);
delay(300);
tone(8,430,100);
delay(150);
tone(8,500,100);
delay(100);
tone(8,570,100);
delay(420);

tone(8,585,100);
delay(450);

tone(8,550,100);
delay(420);

tone(8,500,100);
delay(360);

tone(8,380,100);
delay(300);
tone(8,500,100);
delay(300);
tone(8,500,100);
delay(150);
tone(8,500,100);
delay(300);

tone(8,500,100);
delay(300);

tone(8,760,100);
delay(100);
tone(8,720,100);
delay(150);
tone(8,680,100);
delay(150);
tone(8,620,150);
delay(300);

tone(8,650,150);
delay(300);
tone(8,380,100);
delay(150);
tone(8,430,100);
delay(150);

tone(8,500,100);
delay(300);
tone(8,430,100);
delay(150);
tone(8,500,100);
delay(100);
tone(8,570,100);
delay(220);

tone(8,500,100);
delay(300);

tone(8,760,100);
delay(100);
tone(8,720,100);
delay(150);
tone(8,680,100);
delay(150);
tone(8,620,150);
delay(300);

tone(8,650,200);
delay(300);

tone(8,1020,80);
delay(300);
tone(8,1020,80);
delay(150);
tone(8,1020,80);
delay(300);

tone(8,380,100);
delay(300);
tone(8,500,100);
delay(300);

tone(8,760,100);
delay(100);
tone(8,720,100);
delay(150);
tone(8,680,100);
delay(150);
tone(8,620,150);
delay(300);

tone(8,650,150);
delay(300);
tone(8,380,100);
delay(150);
tone(8,430,100);
delay(150);

tone(8,500,100);
delay(300);
tone(8,430,100);
delay(150);
tone(8,500,100);
delay(100);
tone(8,570,100);
delay(420);

tone(8,585,100);
delay(450);

tone(8,550,100);
delay(420);

tone(8,500,100);
delay(360);

tone(8,380,100);
delay(300);
tone(8,500,100);
delay(300);
tone(8,500,100);
delay(150);
tone(8,500,100);
delay(300);

tone(8,500,60);
delay(150);
tone(8,500,80);
delay(300);
tone(8,500,60);
delay(350);
tone(8,500,80);
delay(150);
tone(8,580,80);
delay(350);
tone(8,660,80);
delay(150);
tone(8,500,80);
delay(300);
tone(8,430,80);
delay(150);
tone(8,380,80);
delay(600);

tone(8,500,60);
delay(150);
tone(8,500,80);
delay(300);
tone(8,500,60);
delay(350);
tone(8,500,80);
delay(150);
tone(8,580,80);
delay(150);
tone(8,660,80);
delay(550);

tone(8,870,80);
delay(325);
tone(8,760,80);
delay(600);

tone(8,500,60);
delay(150);
tone(8,500,80);
delay(300);
tone(8,500,60);
delay(350);
tone(8,500,80);
delay(150);
tone(8,580,80);
delay(350);
tone(8,660,80);
delay(150);
tone(8,500,80);
delay(300);
tone(8,430,80);
delay(150);
tone(8,380,80);
delay(600);

tone(8,660,100);
delay(150);
tone(8,660,100);
delay(300);
tone(8,660,100);
delay(300);
tone(8,510,100);
delay(100);
tone(8,660,100);
delay(300);
tone(8,770,100);
delay(550);
tone(8,380,100);
delay(575);



}
void play_song3() {
tone(8,LA3,Q); 
    delay(1+Q); //delay duration should always be 1 ms more than the note in order to separate them.
    tone(8,LA3,Q);
    delay(1+Q);
    tone(8,LA3,Q);
    delay(1+Q);
    tone(8,F3,E+S);
    delay(1+E+S);
    tone(8,C4,S);
    delay(1+S);
    
    tone(8,LA3,Q);
    delay(1+Q);
    tone(8,F3,E+S);
    delay(1+E+S);
    tone(8,C4,S);
    delay(1+S);
    tone(8,LA3,H);
    delay(1+H);
    
    tone(8,E4,Q); 
    delay(1+Q); 
    tone(8,E4,Q);
    delay(1+Q);
    tone(8,E4,Q);
    delay(1+Q);
    tone(8,F4,E+S);
    delay(1+E+S);
    tone(8,C4,S);
    delay(1+S);
    
    tone(8,Ab3,Q);
    delay(1+Q);
    tone(8,F3,E+S);
    delay(1+E+S);
    tone(8,C4,S);
    delay(1+S);
    tone(8,LA3,H);
    delay(1+H);
    
    tone(8,LA4,Q);
    delay(1+Q);
    tone(8,LA3,E+S);
    delay(1+E+S);
    tone(8,LA3,S);
    delay(1+S);
    tone(8,LA4,Q);
    delay(1+Q);
    tone(8,Ab4,E+S);
    delay(1+E+S);
    tone(8,G4,S);
    delay(1+S);
    
    tone(8,Gb4,S);
    delay(1+S);
    tone(8,E4,S);
    delay(1+S);
    tone(8,F4,E);
    delay(1+E);
    delay(1+E);//PAUSE
    tone(8,Bb3,E);
    delay(1+E);
    tone(8,Eb4,Q);
    delay(1+Q);
    tone(8,D4,E+S);
    delay(1+E+S);
    tone(8,Db4,S);
    delay(1+S);
    
    tone(8,C4,S);
    delay(1+S);
    tone(8,B3,S);
    delay(1+S);
    tone(8,C4,E);
    delay(1+E);
    delay(1+E);//PAUSE QUASI FINE RIGA
    tone(8,F3,E);
    delay(1+E);
    tone(8,Ab3,Q);
    delay(1+Q);
    tone(8,F3,E+S);
    delay(1+E+S);
    tone(8,LA3,S);
    delay(1+S);
    
    tone(8,C4,Q);
    delay(1+Q);
     tone(8,LA3,E+S);
    delay(1+E+S);
    tone(8,C4,S);
    delay(1+S);
    tone(8,E4,H);
    delay(1+H);
    
     tone(8,LA4,Q);
    delay(1+Q);
    tone(8,LA3,E+S);
    delay(1+E+S);
    tone(8,LA3,S);
    delay(1+S);
    tone(8,LA4,Q);
    delay(1+Q);
    tone(8,Ab4,E+S);
    delay(1+E+S);
    tone(8,G4,S);
    delay(1+S);
    
    tone(8,Gb4,S);
    delay(1+S);
    tone(8,E4,S);
    delay(1+S);
    tone(8,F4,E);
    delay(1+E);
    delay(1+E);//PAUSE
    tone(8,Bb3,E);
    delay(1+E);
    tone(8,Eb4,Q);
    delay(1+Q);
    tone(8,D4,E+S);
    delay(1+E+S);
    tone(8,Db4,S);
    delay(1+S);
    
    tone(8,C4,S);
    delay(1+S);
    tone(8,B3,S);
    delay(1+S);
    tone(8,C4,E);
    delay(1+E);
    delay(1+E);//PAUSE QUASI FINE RIGA
    tone(8,F3,E);
    delay(1+E);
    tone(8,Ab3,Q);
    delay(1+Q);
    tone(8,F3,E+S);
    delay(1+E+S);
    tone(8,C4,S);
    delay(1+S);
    
    tone(8,LA3,Q);
    delay(1+Q);
     tone(8,F3,E+S);
    delay(1+E+S);
    tone(8,C4,S);
    delay(1+S);
    tone(8,LA3,H);
    delay(1+H);
    
    delay(2*H);
}
void play_song4() {
  
const int songLength = 18;

// Notes is an array of text characters corresponding to the notes
// in your song. A space represents a rest (no tone)

char notes[] = "cdfda ag cdfdg gf "; // a space represents a rest

// Beats is an array values for each note and rest.
// A "1" represents a quarter-note, 2 a half-note, etc.
// Don't forget that the rests (spaces) need a length as well.

int beats[] = {1,1,1,1,1,1,4,4,2,1,1,1,1,1,1,4,4,2};
 int i, duration;
 int tempo = 150;
  
  for (i = 0; i < songLength; i++) // step through the song arrays
  {
    duration = beats[i] * tempo;  // length of note/rest in ms
    
    if (notes[i] == ' ')          // is this a rest? 
    {
      delay(duration);            // then pause for a moment
    }
    else                          // otherwise, play the note
    {
      tone(Buzzer1, frequency(notes[i]), duration);
      delay(duration); // wait for tone to finish
    }
    delay(tempo/10);              // brief pause between notes
  }
  

}


int frequency(char note) 
{
  // This function takes a note character (a-g), and returns the
  // corresponding frequency in Hz for the tone() function.
  
  int i;
  const int numNotes = 8;  // number of notes we're storing
  
  // The following arrays hold the note characters and their
  // corresponding frequencies. The last "C" note is uppercase
  // to separate it from the first lowercase "c". If you want to
  // add more notes, you'll need to use unique characters.

  // For the "char" (character) type, we put single characters
  // in single quotes.

  char names[] = { 'c', 'd', 'e', 'f', 'g', 'a', 'b', 'C' };
  int frequencies[] = {262, 294, 330, 349, 392, 440, 494, 523};
  
  // Now we'll search through the letters in the array, and if
  // we find it, we'll return the frequency for that note.
  
  for (i = 0; i < numNotes; i++)  // Step through the notes
  {
    if (names[i] == note)         // Is this the one?
    {
      return(frequencies[i]);     // Yes! Return the frequency
    }
  }
  return(0);  // We looked through everything and didn't find it,
              // but we still need to return a value, so return 0.
}

void loop() {
  int input1 = digitalRead(buttonPin1);
  if (input1 == LOW) {
    play_song1();
    delay(1000);
    return;
  }
  int input2 = digitalRead(buttonPin2);
  if (input2 == LOW) {
    play_song2();
    delay(1000);
    return;
  }
  int input3 = digitalRead(buttonPin3);
  if (input3 == 0) {
    play_song3();
    delay(1000);
    return;
  }
  int input4 = digitalRead(buttonPin4);
  if (input4 == 0) {
    play_song4();
    delay(1000);
    return;
  }
}
