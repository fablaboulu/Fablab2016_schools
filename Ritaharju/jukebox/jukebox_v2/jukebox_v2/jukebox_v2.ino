// constants wont change. Theyre used here to
// set pin numbers:
const int BUTTONPIN1 = 2; // the number of the pushbutton pin
const int BUTTONPIN2 = 4;
const int BUTTONPIN3 = 7;
const int BUTTONPIN4 = 13;
const int BUZZER = 8;

const int SHORTTONE = 80;
const int LONGTONE = 200;


//NEW CODE
const int REST = 150;
int currentSong = 0;//SANDSTORM, HAPPYBIRTHDAY, SUPERMARIO, TWINKLE
int currentTone = 0;


#define C0 16.35
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

const int song1_tones [] = {NOTE_B3, NOTE_B3, NOTE_B3, NOTE_B3, NOTE_B3, NOTE_B3, NOTE_B3, NOTE_B3, NOTE_B3, NOTE_B3, NOTE_B3, NOTE_B3, NOTE_E4, NOTE_E4, NOTE_E4, NOTE_E4, NOTE_E4, NOTE_E4, NOTE_E4, NOTE_D4, NOTE_D4, NOTE_D4, NOTE_D4, NOTE_D4, NOTE_D4, NOTE_D4, NOTE_A3, NOTE_B3, NOTE_B3, NOTE_B3, NOTE_B3, NOTE_B3, NOTE_B3, NOTE_B3, NOTE_B3, NOTE_B3,
NOTE_B3, NOTE_B3, NOTE_B3, NOTE_E4, NOTE_B3, NOTE_B3, NOTE_B3, NOTE_B3, NOTE_B3, NOTE_B3, NOTE_B3, NOTE_B3, NOTE_B3, NOTE_B3, NOTE_B3, NOTE_B3, NOTE_E4};
const int song1_duration [] = {SHORTTONE, SHORTTONE, SHORTTONE, SHORTTONE, LONGTONE, SHORTTONE, SHORTTONE, SHORTTONE, SHORTTONE, SHORTTONE, SHORTTONE, LONGTONE, SHORTTONE, SHORTTONE, SHORTTONE, SHORTTONE, SHORTTONE, SHORTTONE, LONGTONE, SHORTTONE, SHORTTONE, SHORTTONE, SHORTTONE, SHORTTONE, SHORTTONE, LONGTONE, LONGTONE, SHORTTONE, SHORTTONE, SHORTTONE, SHORTTONE, 
LONGTONE, SHORTTONE, SHORTTONE, SHORTTONE, SHORTTONE, SHORTTONE, SHORTTONE, LONGTONE, LONGTONE, SHORTTONE, SHORTTONE, SHORTTONE, SHORTTONE, LONGTONE, SHORTTONE, SHORTTONE, SHORTTONE, SHORTTONE, SHORTTONE, SHORTTONE, LONGTONE, LONGTONE};

const int song2_tones [] = {660, 660, 0, 660, 0, 510, 660, 0, 770, 0, 0, 380, 0, 0, 510, 0, 0, 380, 0, 320, 0, 0, 440, 0, 480, 0, 450, 430, 0, 380, 660, 760, 860, 0, 700, 760, 0, 660, 0, 520, 580, 480, 0, 0, 510, 0, 0, 380, 0,
320, 0, 0, 440, 0, 480, 0, 450, 430, 0, 380, 660, 760, 860, 0, 700, 760, 0, 660, 0, 520, 580, 480, 0, 0, 500, 0, 760, 720, 680, 620, 0, 650, 0, 380, 430, 500, 0, 430, 500, 570, 500, 0, 760, 720, 680,
620, 0, 650, 0, 1020, 0, 1020, 1020, 0, 380, 0, 500, 0, 760, 720, 680, 620, 0, 650, 0, 380, 430, 500, 0, 430, 500, 570, 0, 585, 0, 0, 550, 0, 500, 0, 380, 0, 500, 0, 500, 500, 0, 500, 0, 760, 720, 680
, 620, 0, 650, 0, 380, 430, 500, 0, 430, 500, 570, 500, 0, 760, 720, 680, 620, 0, 650, 0, 1020, 0, 1020, 1020, 0, 380, 0, 500, 0, 760, 720, 680, 620, 0, 650, 0, 380, 430, 500, 0, 430, 500, 570, 0, 585
, 0, 0, 550, 0, 500, 0, 380, 0, 500, 0, 500, 500, 0, 500, 500, 0, 500, 0, 500, 580, 0, 660, 500, 0, 430, 380, 0, 0, 500, 500, 0, 500, 0, 500, 580, 660, 0, 0, 870, 0, 760, 0, 0, 500, 500, 0, 500, 0, 50,
0, 580, 0, 660, 500, 0, 430, 380, 0, 0, 660, 660, 0, 660, 0, 510, 660, 0, 770, 0, 0, 380, 0, 0};
const int song2_duration [] = {100, 100, SHORTTONE, 100, SHORTTONE, 100, 100, SHORTTONE, 100, SHORTTONE, SHORTTONE, 100, SHORTTONE, SHORTTONE, 100, SHORTTONE, SHORTTONE, 100, SHORTTONE, 100, SHORTTONE, SHORTTONE, 100, SHORTTONE, 80, SHORTTONE, 100, 100, SHORTTONE, 100, 80, 50, 100, SHORTTONE, 80, 50, SHORTTONE, 80, SHORTTONE, 80, 80, 80, SHORTTONE, SHORTTONE, 100, SHORTTONE, SHORTTONE, 100, SHORTTONE, 100, SHORTTONE, SHORTTONE, 100, SHORTTONE, 80, SHORTTONE, 100, 100, SHORTTONE, 100, 80, 50, 100, SHORTTONE, 80, 50, SHORTTONE, 80, SHORTTONE, 80, 80, 80, SHORTTONE, SHORTTONE, 100, SHORTTONE, 100, 100, 100, 150, SHORTTONE, 150, SHORTTONE, 100, 100, 100, SHORTTONE, 100, 100, 100, 100, SHORTTONE, 100, 100, 100, 150, SHORTTONE, 200, SHORTTONE, 80
, SHORTTONE, 80, 80, SHORTTONE, 100, SHORTTONE, 100, SHORTTONE, 100, 100, 100, 150, SHORTTONE, 150, SHORTTONE, 100, 100, 100, SHORTTONE, 100, 100, 100, SHORTTONE, 100, SHORTTONE, SHORTTONE, 100, SHORTTONE, 100, SHORTTONE, 100, SHORTTONE, 100, SHORTTONE, 100, 100, SHORTTONE, 100, SHORTTONE, 100, 100, 100, 150, SHORTTONE, 150, SHORTTONE, 100, 100, 100, SHORTTONE
, 100, 100, 100, 100, SHORTTONE, 100, 100, 100, 150, SHORTTONE, 200, SHORTTONE, 80, SHORTTONE, 80, 80, SHORTTONE, 100, SHORTTONE, 100, SHORTTONE, 100, 100, 100, 150, SHORTTONE, 150, SHORTTONE, 100, 100, 100, SHORTTONE, 100, 100, 100, SHORTTONE, 100, SHORTTONE, SHORTTONE, 100, SHORTTONE, 100, SHORTTONE, 100, SHORTTONE, 100, SHORTTONE, 100, 100, SHORTTONE, 60, 80,
 SHORTTONE, 60, SHORTTONE, 80, 80, SHORTTONE, 80, 80, SHORTTONE, 80, 80, SHORTTONE, SHORTTONE, 60, 80, SHORTTONE, 60, SHORTTONE, 80, 80, 80, SHORTTONE, SHORTTONE, 80, SHORTTONE,80, SHORTTONE, SHORTTONE, 60, 80, SHORTTONE, 60, SHORTTONE, 80, 80, SHORTTONE, 80, 80, SHORTTONE, 80, 80, SHORTTONE, SHORTTONE, 100, 100, SHORTTONE, 100, SHORTTONE, 100, 100, SHORTTONE, 100, SHORTTONE, SHORTTONE, 100, SHORTTONE, SHORTTONE};

const int song3_tones []={LA3, LA3, LA3, F3, C4, LA3, F3, C4, LA3, E4, E4, E4, F4, C4, Ab3, F3, C4, LA3, LA4, LA3, LA3, LA4, Ab4, G4, Gb4, E4, F4, 0, Bb3, Eb4, D4, 
Db4, C4, B3, C4, 0, F3, Ab3, F3, LA3, C4, LA3, C4, E4, LA4, LA3, LA3, LA4, Ab4, G4, Gb4, E4, F4, 0, Bb3, Eb4, D4, Db4, C4, B3, C4, 0, F3, Ab3
, F3, C4, LA3, F3, C4, LA3};
const int song3_duration[]={Q, Q, Q, E, S, Q, E, S, H, Q, Q, Q, E, S, Q, E, S, H, Q, E, S, Q, E, S, S, S, E, 1+E, E, Q, E, S, S, S, E, 1+E, E, Q, E,
S, Q, E, S, H, Q, E, S, Q, E, S, S, S, E, 1+E, E, Q, E, S, S, S, E, 1+E, E, Q, E, S, Q, E, S, H};

const int song4_tones [] ={262,294,330,294,440,0,440,392,0,262,294,349,294,392,0,392,349};
const int song4_duration[]={150,150,150,150,150,150,600,600,300,150,150,150,150,150,150,600,600,300};


void setup() {
  // initialize the piezo as output:
  pinMode(BUZZER, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(BUTTONPIN1, INPUT_PULLUP);
  pinMode(BUTTONPIN2, INPUT_PULLUP);
  pinMode(BUTTONPIN3, INPUT_PULLUP);
  pinMode(BUTTONPIN4, INPUT_PULLUP);
}

void loop() {
  int input1 = digitalRead(BUTTONPIN1);
  int input2 = digitalRead(BUTTONPIN2);
  int input3 = digitalRead(BUTTONPIN3);
  int input4 = digitalRead(BUTTONPIN4);

  if (input1 == HIGH && input2 == HIGH && input3 == HIGH && input4 == HIGH) {
    if (currentSong == 0)
      return;
    else if (currentSong == 1) {
      if (currentTone >= sizeof(song1_tones))
        return;
      else {
        tone(BUZZER,  song1_tones [currentTone], song1_duration[currentTone]);
        delay(REST);
        currentTone++;
      }
    }
    else if (currentSong == 2) {
      if (currentTone >= sizeof(song2_tones))
        return;
      else {
        tone(BUZZER,  song2_tones [currentTone], song2_duration[currentTone]);
        delay(REST);
        currentTone++;
      }
    }
    else if (currentSong == 3) {
      if (currentTone >= sizeof(song2_tones))
        return;
      else {
        tone(BUZZER,  song3_tones [currentTone], song3_duration[currentTone]);
        delay(REST);
        currentTone++;
      }
    }
    else if (currentSong == 4) {
      if (currentTone >= sizeof(song4_tones))
        return;
      else {
        tone(BUZZER,  song4_tones [currentTone], song4_duration[currentTone]);
        delay(REST);
        currentTone++;
      }
    }
  }
  else if (input1 == LOW) {
    currentSong = 1;
    currentTone = 0;
  }
  else if (input2 == LOW) {
    currentSong = 2;
    currentTone = 0;
  }
  else if (input3 == LOW) {
    currentSong = 3;
    currentTone = 0;
  }
  else if (input4 == LOW) {
    currentSong = 4;
    currentTone = 0;
  }
}
