
// 5161AS 7-Segment Display
// Common Cathode
// Arduino UNO
// Alphabetic Display A-J

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


// Display A
void displayA() {
  clearDisplay();
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(G, HIGH);
}


// Display B (lowercase b shape)
void displayB() {
  clearDisplay();
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(G, HIGH);
}


// Display C
void displayC() {
  clearDisplay();
  digitalWrite(A, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(F, HIGH);
}


// Display D (lowercase d shape)
void displayD() {
  clearDisplay();
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(G, HIGH);
}


// Display E
void displayE() {
  clearDisplay();
  digitalWrite(A, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(G, HIGH);
}


// Display F
void displayF() {
  clearDisplay();
  digitalWrite(A, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(G, HIGH);
}


// Display G (approximation)
void displayG() {
  clearDisplay();
  digitalWrite(A, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(G, HIGH);
}


// Display H
void displayH() {
  clearDisplay();
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(G, HIGH);
}


// Display I (resembles 1)
void displayI() {
  clearDisplay();
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
}


// Display J
void displayJ() {
  clearDisplay();
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(E, HIGH);
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
  displayA();
  delay(timeDelay);

  displayB();
  delay(timeDelay);

  displayC();
  delay(timeDelay);

  displayD();
  delay(timeDelay);

  displayE();
  delay(timeDelay);

  displayF();
  delay(timeDelay);

  displayG();
  delay(timeDelay);

  displayH();
  delay(timeDelay);

  displayI();
  delay(timeDelay);

  displayJ();
  delay(timeDelay);
}
