
// 5161AS 7-Segment Display
// Common Cathode
// Arduino UNO

const int A = 4;
const int B = 5;
const int C = 7;
const int D = 8;
const int E = 9;
const int F = 10;
const int G = 11;

const int timeDelay = 1000;


// Turn everything OFF
void clearDisplay() {
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  digitalWrite(E, LOW);
  digitalWrite(F, LOW);
  digitalWrite(G, LOW);
}


// Display 0
void display0() {
  clearDisplay();
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(F, HIGH);
}


// Display 1
void display1() {
  clearDisplay();
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
}


// Display 2
void display2() {
  clearDisplay();
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(G, HIGH);
}


// Display 3
void display3() {
  clearDisplay();
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(G, HIGH);
}


// Display 4
void display4() {
  clearDisplay();
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(G, HIGH);
}


// Display 5
void display5() {
  clearDisplay();
  digitalWrite(A, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(G, HIGH);
}


// Display 6
void display6() {
  clearDisplay();
  digitalWrite(A, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(G, HIGH);
}


// Display 7
void display7() {
  clearDisplay();
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
}


// Display 8
void display8() {
  clearDisplay();
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(G, HIGH);
}


// Display 9
void display9() {
  clearDisplay();
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(G, HIGH);
}


void setup() {
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(E, OUTPUT);
  pinMode(F, OUTPUT);
  pinMode(G, OUTPUT);

  clearDisplay();
}


void loop() {
  display0();
  delay(timeDelay);

  display1();
  delay(timeDelay);

  display2();
  delay(timeDelay);

  display3();
  delay(timeDelay);

  display4();
  delay(timeDelay);

  display5();
  delay(timeDelay);

  display6();
  delay(timeDelay);

  display7();
  delay(timeDelay);

  display8();
  delay(timeDelay);

  display9();
  delay(timeDelay);
}
