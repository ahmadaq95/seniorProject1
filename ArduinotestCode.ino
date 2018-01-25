/*
    senior project
    This is test code for our project
     we have 6 LED light 4 for alarming and
     2 light for control it via andriod app and on/off botton
     2 sensor 1 for gas detection and 1 for sound detection
     1 wifi
     arduino detect the gas and sound and take 2 action
     first action : turn sepcefic alarming light
     second action: notify the server
*/

const int LEDsound = 10;
const int LEDgas = 11;
const int LEDclock = 12;
const int LEDdoor = 13;
const int gasSensor = 9;
const String soundSensor = A0;
const int doorSwitch = 8;
int valOfgas = 0 ;
int valOfsound = 0;
int valOfdoorSwitch = 0;

void setup() {
  pinMode(LEDsound, OUTPUT);
  pinMode(LEDgas, OUTPUT);
  pinMode(LEDclock, OUTPUT);
  pinMode(LEDdoor, OUTPUT);
  pinMode(gasSensor, INPUT);
  pinMode(soundSensor, INPUT);
}

void loop() {


// gas detection
  valOfgas = digitalRead(gasSensor);

  if (valOfgas == HIGH) {
    do {
      digitalWrite(LEDgas, HIGH);
      delay(100);
      digitalWrite(LEDgas , LOW);
      delay(100);
    } while (valOfgas == 0);

  }

// loud sound detection
  valOfsound = digitalRead(soundSensor);

  else if (valOfgas == 1000) {
    do {
      digitalWrite(LEDsound, HIGH);
      delay(100);
      digitalWrite(LEDsound , LOW);
      delay(100);
    } while (valOfsound == 0);

  }

// door detection
 valOfdoorSwitch = digitalRead(doorSwitch);

  else if (valOfdoorSwitch == 1) {
    do {
      digitalWrite(LEDdoor, HIGH);
      delay(100);
      digitalWrite(LEDdoor , LOW);
      delay(100);
    } while (valOfsound == 0);

  }


}
