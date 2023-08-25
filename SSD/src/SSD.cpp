#include "SSD.h"
#include "Arduino.h"
SSD::SSD(int pinA, int pinB, int pinC, int pinD, int pinE, int pinF, int pinG, int pinP){
  A = pinA;
  B = pinB;
  C = pinC;
  D = pinD;
  E = pinE;
  F = pinF;
  G = pinG;
  P = pinP;
  Pow = false;
}
SSD::SSD(int pinA, int pinB, int pinC, int pinD, int pinE, int pinF, int pinG, int pinP, int power){
  A = pinA;
  B = pinB;
  C = pinC;
  D = pinD;
  E = pinE;
  F = pinF;
  G = pinG;
  P = pinP;
  Power = power;
  Pow = true;
}
void SSD::begin(){
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(E, OUTPUT);
  pinMode(F, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(P, OUTPUT);
  if (Pow == true){
    pinMode(Power, OUTPUT);
    digitalWrite(Power, LOW);
  }
  comCath = true;
  p = true;
}
void SSD::begin(bool commonCathode, bool enbPoint){
  comCath = commonCathode;
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(E, OUTPUT);
  pinMode(F, OUTPUT);
  pinMode(G, OUTPUT);
  if (enbPoint == true){
    pinMode(P, OUTPUT);
  }
  if (Pow == true){
    pinMode(Power, OUTPUT);
    if (commonCathode == true){
     digitalWrite(Power, LOW);
    }
    else if (commonCathode == false){
     digitalWrite(Power, HIGH);
    }
  }
  p = enbPoint;
}
void SSD::displayS(int segment){
  if (comCath == true){
    if (segment == 1){
      digitalWrite(A, HIGH);
    }
    else if (segment == 2){
      digitalWrite(B, HIGH);
    }
    else if (segment == 3){
      digitalWrite(C, HIGH);
    }
    else if (segment == 4){
      digitalWrite(D, HIGH);
    }
    else if (segment == 5){
      digitalWrite(E, HIGH);
    }
    else if (segment == 6){
      digitalWrite(F, HIGH);
    }
    else if (segment == 7){
      digitalWrite(G, HIGH);
    }
    else if (segment == 8){
      digitalWrite(P, HIGH);
    }
    else {
      digitalWrite(P, HIGH);
      delay(1000/segment);
      digitalWrite(P, LOW);
      delay(1000/segment);
    }
  }
  else {
    if (segment == 1){
      digitalWrite(A, LOW);
    }
    else if (segment == 2){
      digitalWrite(B, LOW);
    }
    else if (segment == 3){
      digitalWrite(C, LOW);
    }
    else if (segment == 4){
      digitalWrite(D, LOW);
    }
    else if (segment == 5){
      digitalWrite(E, LOW);
    }
    else if (segment == 6){
      digitalWrite(F, LOW);
    }
    else if (segment == 7){
      digitalWrite(G, LOW);
    }
    else if (segment == 8){
      digitalWrite(P, LOW);
    }
    else {
      digitalWrite(P, LOW);
      delay(1000/segment);
      digitalWrite(P, HIGH);
      delay(1000/segment);
    }
  }
}
void SSD::displayS(int s1, int s2){
 displayS(s1);
 displayS(s2);
}
void SSD::displayS(int s1, int s2, int s3){
 displayS(s1, s2);
 displayS(s3);
}
void SSD::displayS(int s1, int s2, int s3, int s4){
 displayS(s1, s2, s3);
 displayS(s4);
}
void SSD::displayS(int s1, int s2, int s3, int s4, int s5){
 displayS(s1, s2, s3, s4);
 displayS(s5);
}
void SSD::displayS(int s1, int s2, int s3, int s4, int s5, int s6){
 displayS(s1, s2, s3, s4, s5);
 displayS(s6);
}
void SSD::displayS(int s1, int s2, int s3, int s4, int s5, int s6, int s7){
 displayS(s1, s2, s3, s4, s5, s6);
 displayS(s7);
}
void SSD::clear(){
  if (comCath == true){
    digitalWrite(A, LOW);
    digitalWrite(B, LOW);
    digitalWrite(C, LOW);
    digitalWrite(D, LOW);
    digitalWrite(E, LOW);
    digitalWrite(F, LOW);
    digitalWrite(G, LOW);
  }
  else {
    digitalWrite(A, HIGH);
    digitalWrite(B, HIGH);
    digitalWrite(C, HIGH);
    digitalWrite(D, HIGH);
    digitalWrite(E, HIGH);
    digitalWrite(F, HIGH);
    digitalWrite(G, HIGH);
  }
}
void SSD::clearS(int segment){
  if (comCath == false){
    if (segment == 1){
      digitalWrite(A, HIGH);
    }
    else if (segment == 2){
      digitalWrite(B, HIGH);
    }
    else if (segment == 3){
      digitalWrite(C, HIGH);
    }
    else if (segment == 4){
      digitalWrite(D, HIGH);
    }
    else if (segment == 5){
      digitalWrite(E, HIGH);
    }
    else if (segment == 6){
      digitalWrite(F, HIGH);
    }
    else if (segment == 7){
      digitalWrite(G, HIGH);
    }
    else if (segment == 8){
      digitalWrite(P, HIGH);
    }
    else {
      digitalWrite(P, HIGH);
      delay(1000/segment);
      digitalWrite(P, LOW);
      delay(1000/segment);
    }
  }
  else {
    if (segment == 1){
      digitalWrite(A, LOW);
    }
    else if (segment == 2){
      digitalWrite(B, LOW);
    }
    else if (segment == 3){
      digitalWrite(C, LOW);
    }
    else if (segment == 4){
      digitalWrite(D, LOW);
    }
    else if (segment == 5){
      digitalWrite(E, LOW);
    }
    else if (segment == 6){
      digitalWrite(F, LOW);
    }
    else if (segment == 7){
      digitalWrite(G, LOW);
    }
    else if (segment == 8){
      digitalWrite(P, LOW);
    }
    else {
      digitalWrite(P, LOW);
      delay(1000/segment);
      digitalWrite(P, HIGH);
      delay(1000/segment);
    }
  }
}
void SSD::clearS(int s1, int s2){
 clearS(s1);
 clearS(s2);
}
void SSD::clearS(int s1, int s2, int s3){
 clearS(s1, s2);
 clearS(s3);
}
void SSD::clearS(int s1, int s2, int s3, int s4){
 clearS(s1, s2, s3);
 clearS(s4);
}
void SSD::clearS(int s1, int s2, int s3, int s4, int s5){
 clearS(s1, s2, s3, s4);
 clearS(s5);
}
void SSD::clearS(int s1, int s2, int s3, int s4, int s5, int s6){
 clearS(s1, s2, s3, s4, s5);
 clearS(s6);
}
void SSD::display(){
  displayS(1, 2, 3, 4, 5, 6, 7);
  displayS(8);
}
void SSD::display(int number){
    if (number == 0){
      clear();
      displayS(1, 2, 3, 4, 5, 6);
    }
    else if (number == 1){
      clear();
      displayS(2, 3);
    }
    else if (number == 2){
      clear();
      displayS(1, 2, 4, 5, 7);
    }
    else if (number == 3){
      clear();
      displayS(1, 2, 3, 4, 7);
    }
    else if (number == 4){
      clear();
      displayS(2, 3, 6, 7);
    }
    else if (number == 5){
      clear();
      displayS(1, 3, 4, 6, 7);
    }
    else if (number == 6){
      clear();
      displayS(1, 3, 4, 5, 6, 7);
    }
    else if (number == 7){
      clear();
      displayS(1, 2, 3);
    }
    else if (number == 8){
      clear();
      displayS(1, 2, 3, 4, 5, 6, 7);
    }
    else if (number == 9){
      clear();
      displayS(1, 2, 3, 4, 6, 7);
    }
    else {
      digitalWrite(P, LOW);
      delay(1000/number);
      digitalWrite(P, HIGH);
      delay(1000/number);
    }
}
void SSD::display(int number, bool point){
  display(number);
  if(p == true && point == true){
    digitalWrite(P, HIGH);
  }
}
