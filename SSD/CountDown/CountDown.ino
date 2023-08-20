#include <SSD.h>
SSD ssd(2, 3, 4, 5, 6, 7, 8, 9);
// SSD ssd(2, 3, 4, 5, 6, 7, 8, 9, 10);
void setup(){
	// ssd.begin();
	ssd.begin(false, false);
}
void loop(){
	ssd.display(9);
	delay(1000);
	ssd.display(8);
	delay(1000);
	ssd.display(7);
	delay(1000);
	ssd.display(6);
	delay(1000);
	ssd.display(5);
	delay(1000);
	ssd.display(4);
	delay(1000);
	ssd.display(3);
	delay(1000);
	ssd.display(2);
	delay(1000);
	ssd.display(1);
	delay(1000);
	ssd.display(0);
	delay(1000);
}