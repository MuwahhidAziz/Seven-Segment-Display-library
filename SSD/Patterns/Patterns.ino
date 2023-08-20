/* This example sketch shows all the patterns that can be made by combining all segments, patterns are shownn in following order:-
 * 1: Pattern involving one segment then two segments and so on till all seven segments.
 * 2: In each combination segment will move from segment a to b to c till segment g.
 * Point is not used because it won't make any pattern.
 */
#include <SSD.h>
SSD ssd(2, 3, 4, 5, 6, 7, 8, 9);
// SSD ssd(2, 3, 4, 5, 6, 7, 8, 9, 10);
void setup() {
  // put your setup code here, to run once:
  ssd.begin(false, false); // only change first false argument to true if your display is common cathode, second argument should remain false because point is not used.
}

void loop() {
  // put your main code here, to run repeatedly:
  ssd.displayS(1);
  ssd.clear();delay(2000);
  ssd.displayS(2);
  ssd.clear();delay(2000);
  ssd.displayS(3);
  ssd.clear();delay(2000);
  ssd.displayS(4);
  ssd.clear();delay(2000);
  ssd.displayS(5);
  ssd.clear();delay(2000);
  ssd.displayS(6);
  ssd.clear();delay(2000);
  ssd.displayS(7);
  ssd.clear();delay(2000);
  ssd.displayS(1, 2);
  ssd.clear();delay(2000);
  ssd.displayS(1, 3);
  ssd.clear();delay(2000);
  ssd.displayS(1, 4);
  ssd.clear();delay(2000);
  ssd.displayS(1, 5);
  ssd.clear();delay(2000);
  ssd.displayS(1, 6);
  ssd.clear();delay(2000);
  ssd.displayS(1, 7);
  ssd.clear();delay(2000);
  ssd.displayS(2, 3);
  ssd.clear();delay(2000);
  ssd.displayS(2, 4);
  ssd.clear();delay(2000);
  ssd.displayS(2, 5);
  ssd.clear();delay(2000);
  ssd.displayS(2, 6);
  ssd.clear();delay(2000);
  ssd.displayS(2, 7);
  ssd.clear();delay(2000);
  ssd.displayS(3, 4);
  ssd.clear();delay(2000);
  ssd.displayS(3, 5);
  ssd.clear();delay(2000);
  ssd.displayS(3, 6);
  ssd.clear();delay(2000);
  ssd.displayS(3, 7);
  ssd.clear();delay(2000);
  ssd.displayS(4, 5);
  ssd.clear();delay(2000);
  ssd.displayS(4, 6);
  ssd.clear();delay(2000);
  ssd.displayS(4, 7);
  ssd.clear();delay(2000);
  ssd.displayS(5, 6);
  ssd.clear();delay(2000);
  ssd.displayS(5, 7);
  ssd.clear();delay(2000);
  ssd.displayS(6, 7);
  ssd.clear();delay(2000);
  ssd.displayS(1, 2, 3);
  ssd.clear();delay(2000);
  ssd.displayS(1, 2, 4);
  ssd.clear();delay(2000);
  ssd.displayS(1, 2, 5);
  ssd.clear();delay(2000);
  ssd.displayS(1, 2, 6);
  ssd.clear();delay(2000);
  ssd.displayS(1, 2, 7);
  ssd.clear();delay(2000);
  ssd.displayS(1, 3, 4);
  ssd.clear();delay(2000);
  ssd.displayS(1, 3, 5);
  ssd.clear();delay(2000);
  ssd.displayS(1, 3, 6);
  ssd.clear();delay(2000);
  ssd.displayS(1, 3, 7);
  ssd.clear();delay(2000);
  ssd.displayS(1, 4, 5);
  ssd.clear();delay(2000);
  ssd.displayS(1, 4, 6);
  ssd.clear();delay(2000);
  ssd.displayS(1, 4, 7);
  ssd.clear();delay(2000);
  ssd.displayS(1, 5, 6);
  ssd.clear();delay(2000);
  ssd.displayS(1, 5, 7);
  ssd.clear();delay(2000);
  ssd.displayS(1, 6, 7);
  ssd.clear();delay(2000);
  ssd.displayS(2, 3, 4);
  ssd.clear();delay(2000);
  ssd.displayS(2, 3, 5);
  ssd.clear();delay(2000);
  ssd.displayS(2, 3, 6);
  ssd.clear();delay(2000);
  ssd.displayS(2, 3, 7);
  ssd.clear();delay(2000);
  ssd.displayS(2, 4, 5);
  ssd.clear();delay(2000);
  ssd.displayS(2, 4, 6);
  ssd.clear();delay(2000);
  ssd.displayS(2, 4, 7);
  ssd.clear();delay(2000);
  ssd.displayS(2, 5, 6);
  ssd.clear();delay(2000);
  ssd.displayS(2, 5, 7);
  ssd.clear();delay(2000);
  ssd.displayS(2, 6, 7);
  ssd.clear();delay(2000);
  ssd.displayS(3, 4, 5);
  ssd.clear();delay(2000);
  ssd.displayS(3, 4, 6);
  ssd.clear();delay(2000);
  ssd.displayS(3, 4, 7);
  ssd.clear();delay(2000);
  ssd.displayS(3, 5, 6);
  ssd.clear();delay(2000);
  ssd.displayS(3, 5, 7);
  ssd.clear();delay(2000);
  ssd.displayS(3, 6, 7);
  ssd.clear();delay(2000);
  ssd.displayS(4, 5, 6);
  ssd.clear();delay(2000);
  ssd.displayS(4, 5, 7);
  ssd.clear();delay(2000);
  ssd.displayS(4, 6, 7);
  ssd.clear();delay(2000);
  ssd.displayS(5, 6, 7);
  ssd.clear();delay(2000);
}