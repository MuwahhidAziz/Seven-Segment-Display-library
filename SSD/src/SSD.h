#ifndef SSD_H
#define SSD_H
#include "Arduino.h"
class SSD {
  public:
  SSD(int pinA, int pinB, int pinC, int pinD, int pinE, int pinF, int pinG, int pinP);
  SSD(int pinA, int pinB, int pinC, int pinD, int pinE, int pinF, int pinG, int pinP, int power);
  void begin();
  void begin(bool commonCathode, bool enbPoint);
  void display();
  void display(int number);
  void display(int number, bool point);
  void displayS(int segment);
  void displayS(int s1, int s2);
  void displayS(int s1, int s2, int s3);
  void displayS(int s1, int s2, int s3, int s4);
  void displayS(int s1, int s2, int s3, int s4, int s5);
  void displayS(int s1, int s2, int s3, int s4, int s5, int s6);
  void displayS(int s1, int s2, int s3, int s4, int s5, int s6, int s7);
  void clear();
  void clearS(int segment);
  void clearS(int s1, int s2);
  void clearS(int s1, int s2, int s3);
  void clearS(int s1, int s2, int s3, int s4);
  void clearS(int s1, int s2, int s3, int s4, int s5);
  void clearS(int s1, int s2, int s3, int s4, int s5, int s6);

  private:
  int A, B, C, D, E, F, G, P, Power;
  bool Pow = false, comCath = true, p = true;
};
#endif