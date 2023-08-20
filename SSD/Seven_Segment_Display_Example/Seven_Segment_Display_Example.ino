/* This is diagram for referring to the segments
 *    a    
 *    _
 * f |_|b
 * e |_|c
 *    d .p
 *             | |
 *   The centre _ one is g 
 *             | |
 * To check for which one is which connect the common/centre pin on any of the two sides to positive if common anode, and if the seven segment display is common cathode connect that centre/common pin to negative.Then connect all other pins to positive if the common pin is conected to negative, else connect all other pins to negative if the common pin is connected to positive, connect the other pins one by one and note down each pin with respective segment.
 * Here is the schematic of the seven segment display
 * 
 *       2    _ _________ _ 8 (point)
 *       1    _|  __ __. |_ 3
 * common pin _| |  |  | |_ common pin
 *       6    _| |__|__| |_ 4
 *       7    _|________ |_ 5
 * The labelling 1 to 8 may vary with your seven segment display, but the common pin is always the centre one.
 * To check wheather the display is common anode or common cathode connect the common pin with positive and any other pin with nagative, if any segment turns on in this case it means that your Seven Segment Display (SSD) is common anode , else it is common cathode if none of the segment turns on.
 */
#include <SSD.h>
SSD ssd(2, 3, 4, 5, 6, 7, 8, 9); // pins a, b, c, d, e, f, g for seven segments and pin p for point
// SSD ssd(2, 3, 4, 5, 6, 7, 8, 9, 10); // pins a, b, c, d, e, f, g for seven segments, pin p for point and power pin
void setup() {
  //ssd.begin(); // initializes the seven segment display considering that it is common cathode type and point is enabled
  ssd.begin(false, false); // first argument's false means common anode type and true means common cathode type, second argument's false means point disabled and true means point enabled, point can be disabled if you don't want to use it or if you want to use that pin for other purpose
  
}
void loop() {
  ssd.display(9); // can enter form 0 to 9
  delay(1000);
  ssd.display(3, true); // can enter from 0 to 9 and true for point to be displayed, this will display 3 also it will display point "."
  delay(1000);
  ssd.clear();
  ssd.displayS(2, 5, 7); // you can use 1 to 7 for segments and 8 for point
  delay(1000);
}
