/* This example sketch shows all the patterns that can be made by combining all segments, patterns are shown in the following order:-
 * 1: Pattern involving one segment then two segments and so on till all seven segments.
 * 2: In each combination segment will move from segment a to b to c till segment g.
 * Point is not used because it won't make any pattern.
 */
#include <SSD.h>

int delms = 2000; // Delay in milliseconds
SSD ssd(2, 3, 4, 5, 6, 7, 8, 9);

void setup() {
  ssd.begin(false, false); // only change first false argument to true if your display is common cathode, second argument should remain false because point is not used.
}

void loop() {
  // One segment patterns
  ssd.displayS(1);
  delay(delms);
  ssd.clear();
  
  ssd.displayS(2);
  delay(delms);
  ssd.clear();
  
  ssd.displayS(3);
  delay(delms);
  ssd.clear();
  
  ssd.displayS(4);
  delay(delms);
  ssd.clear();
  
  ssd.displayS(5);
  delay(delms);
  ssd.clear();
  
  ssd.displayS(6);
  delay(delms);
  ssd.clear();
  
  ssd.displayS(7);
  delay(delms);
  ssd.clear();
  delay(delms);

  // Two segment patterns
  ssd.displayS(1, 2);
  delay(delms);
  ssd.clear();
  
  ssd.displayS(1, 3);
  delay(delms);
  ssd.clear();
  
  ssd.displayS(1, 4);
  delay(delms);
  ssd.clear();
  
  ssd.displayS(1, 5);
  delay(delms);
  ssd.clear();
  
  ssd.displayS(1, 6);
  delay(delms);
  ssd.clear();
  
  ssd.displayS(1, 7);
  delay(delms);
  ssd.clear();
  
  ssd.displayS(2, 3);
  delay(delms);
  ssd.clear();
  
  ssd.displayS(2, 4);
  delay(delms);
  ssd.clear();
  
  ssd.displayS(2, 5);
  delay(delms);
  ssd.clear();
  
  ssd.displayS(2, 6);
  delay(delms);
  ssd.clear();
  
  ssd.displayS(2, 7);
  delay(delms);
  ssd.clear();
  
  ssd.displayS(3, 4);
  delay(delms);
  ssd.clear();
  
  ssd.displayS(3, 5);
  delay(delms);
  ssd.clear();
  
  ssd.displayS(3, 6);
  delay(delms);
  ssd.clear();
  
  ssd.displayS(3, 7);
  delay(delms);
  ssd.clear();
  
  ssd.displayS(4, 5);
  delay(delms);
  ssd.clear();
  
  ssd.displayS(4, 6);
  delay(delms);
  ssd.clear();
  
  ssd.displayS(4, 7);
  delay(delms);
  ssd.clear();
  
  ssd.displayS(5, 6);
  delay(delms);
  ssd.clear();
  
  ssd.displayS(5, 7);
  delay(delms);
  ssd.clear();
  
  ssd.displayS(6, 7);
  delay(delms);
  ssd.clear();
  delay(delms);

  // Three segment patterns
  ssd.displayS(1, 2, 3);
  delay(delms);
  ssd.clear();
  
  ssd.displayS(1, 2, 4);
  delay(delms);
  ssd.clear();
  
  ssd.displayS(1, 2, 5);
  delay(delms);
  ssd.clear();
  
  ssd.displayS(1, 2, 6);
  delay(delms);
  ssd.clear();
  
  ssd.displayS(1, 2, 7);
  delay(delms);
  ssd.clear();
  
  ssd.displayS(1, 3, 4);
  delay(delms);
  ssd.clear();
  
  ssd.displayS(1, 3, 5);
  delay(delms);
  ssd.clear();
  
  ssd.displayS(1, 3, 6);
  delay(delms);
  ssd.clear();
  
  ssd.displayS(1, 3, 7);
  delay(delms);
  ssd.clear();
  
  ssd.displayS(1, 4, 5);
  delay(delms);
  ssd.clear();
  
  ssd.displayS(1, 4, 6);
  delay(delms);
  ssd.clear();
  
  ssd.displayS(1, 4, 7);
  delay(delms);
  ssd.clear();
  
  ssd.displayS(1, 5, 6);
  delay(delms);
  ssd.clear();
  
  ssd.displayS(1, 5, 7);
  delay(delms);
  ssd.clear();
  
  ssd.displayS(1, 6, 7);
  delay(delms);
  ssd.clear();
  
  ssd.displayS(2, 3, 4);
  delay(delms);
  ssd.clear();
  
  ssd.displayS(2, 3, 5);
  delay(delms);
  ssd.clear();
  
  ssd.displayS(2, 3, 6);
  delay(delms);
  ssd.clear();
  
  ssd.displayS(2, 3, 7);
  delay(delms);
  ssd.clear();
  
  ssd.displayS(2, 4, 5);
  delay(delms);
  ssd.clear();
  
  ssd.displayS(2, 4, 6);
  delay(delms);
  ssd.clear();
  
  ssd.displayS(2, 4, 7);
  delay(delms);
  ssd.clear();
  
  ssd.displayS(2, 5, 6);
  delay(delms);
  ssd.clear();
  
  ssd.displayS(2, 5, 7);
  delay(delms);
  ssd.clear();
  
  ssd.displayS(2, 6, 7);
  delay(delms);
  ssd.clear();
  
  ssd.displayS(3, 4, 5);
  delay(delms);
  ssd.clear();
  
  ssd.displayS(3, 4, 6);
  delay(delms);
  ssd.clear();
  
  ssd.displayS(3, 4, 7);
  delay(delms);
  ssd.clear();
  
  ssd.displayS(3, 5, 6);
  delay(delms);
  ssd.clear();
  
  ssd.displayS(3, 5, 7);
  delay(delms);
  ssd.clear();
  
  ssd.displayS(3, 6, 7);
  delay(delms);
  ssd.clear();
  
  ssd.displayS(4, 5, 6);
  delay(delms);
  ssd.clear();
  
  ssd.displayS(4, 5, 7);
  delay(delms);
  ssd.clear();
  
  ssd.displayS(4, 6, 7);
  delay(delms);
  ssd.clear();
  
  ssd.displayS(5, 6, 7);
  delay(delms);
  ssd.clear();
  delay(delms);

  // Four segment patterns
  ssd.displayS(1, 2, 3, 4);
  delay(delms);
  ssd.clear();

  ssd.displayS(1, 2, 3, 5);
  delay(delms);
  ssd.clear();
  
  ssd.displayS(1, 2, 3, 6);
  delay(delms);
  ssd.clear();
  
  ssd.displayS(1, 2, 3, 7);
  delay(delms);
  ssd.clear();
  
  ssd.displayS(1, 2, 4, 5);
  delay(delms);
  ssd.clear();
  
  ssd.displayS(1, 2, 4, 6);
  delay(delms);
  ssd.clear();
  
  ssd.displayS(1, 2, 4, 7);
  delay(delms);
  ssd.clear();
  
  ssd.displayS(1, 2, 5, 6);
  delay(delms);
  ssd.clear();
  
  ssd.displayS(1, 2, 5, 7);
  delay(delms);
  ssd.clear();
  
  ssd.displayS(1, 2, 6, 7);
  delay(delms);
  ssd.clear();
    
  ssd.displayS(1, 3, 4, 5);
  delay(delms);
  ssd.clear();

  ssd.displayS(1, 3, 4, 6);
  delay(delms);
  ssd.clear();
  
  ssd.displayS(1, 3, 4, 7);
  delay(delms);
  ssd.clear();
  
  ssd.displayS(1, 3, 5, 6);
  delay(delms);
  ssd.clear();
  
  ssd.displayS(1, 3, 5, 7);
  delay(delms);
  ssd.clear();
  
  ssd.displayS(1, 3, 6, 7);
  delay(delms);
  ssd.clear();
  
  ssd.displayS(1, 4, 5, 6);
  delay(delms);
  ssd.clear();
  
  ssd.displayS(1, 4, 5, 7);
  delay(delms);
  ssd.clear();
  
  ssd.displayS(1, 4, 6, 7);
  delay(delms);
  ssd.clear();
  
  ssd.displayS(1, 5, 6, 7);
  delay(delms);
  ssd.clear();
      
  ssd.displayS(2, 3, 4, 5);
  delay(delms);
  ssd.clear();

  ssd.displayS(2, 3, 4, 6);
  delay(delms);
  ssd.clear();
  
  ssd.displayS(2, 3, 4, 7);
  delay(delms);
  ssd.clear();
  
  ssd.displayS(2, 3, 5, 6);
  delay(delms);
  ssd.clear();
  
  ssd.displayS(2, 3, 5, 7);
  delay(delms);
  ssd.clear();
  
  ssd.displayS(2, 3, 6, 7);
  delay(delms);
  ssd.clear();
  
  ssd.displayS(2, 4, 5, 6);
  delay(delms);
  ssd.clear();
  
  ssd.displayS(2, 4, 5, 7);
  delay(delms);
  ssd.clear();
  
  ssd.displayS(2, 4, 6, 7);
  delay(delms);
  ssd.clear();
  
  ssd.displayS(2, 5, 6, 7);
  delay(delms);
  ssd.clear();
    
  ssd.displayS(3, 4, 5, 6);
  delay(delms);
  ssd.clear();
  
  ssd.displayS(3, 4, 5, 7);
  delay(delms);
  ssd.clear();
  
  ssd.displayS(3, 4, 6, 7);
  delay(delms);
  ssd.clear();
  
  ssd.displayS(3, 5, 6, 7);
  delay(delms);
  ssd.clear();
    
  ssd.displayS(4, 5, 6, 7);
  delay(delms);
  ssd.clear();
  delay(delms);

  // Five segment patterns
  ssd.displayS(1, 2, 3, 4, 5);
  delay(delms);
  ssd.clear();

  ssd.displayS(1, 2, 3, 4, 6);
  delay(delms);
  ssd.clear();
  
  ssd.displayS(1, 2, 3, 4, 7);
  delay(delms);
  ssd.clear();
  
  ssd.displayS(1, 2, 3, 5, 6);
  delay(delms);
  ssd.clear();
  
  ssd.displayS(1, 2, 3, 5, 7);
  delay(delms);
  ssd.clear();
    
  ssd.displayS(1, 2, 3, 6, 7);
  delay(delms);
  ssd.clear();
    
  ssd.displayS(1, 2, 4, 5, 6);
  delay(delms);
  ssd.clear();
  
  ssd.displayS(1, 2, 4, 5, 7);
  delay(delms);
  ssd.clear();
    
  ssd.displayS(1, 2, 4, 6, 7);
  delay(delms);
  ssd.clear();
      
  ssd.displayS(1, 2, 5, 6, 7);
  delay(delms);
  ssd.clear();
      
  ssd.displayS(1, 3, 4, 5, 6);
  delay(delms);
  ssd.clear();
  
  ssd.displayS(1, 3, 4, 5, 7);
  delay(delms);
  ssd.clear();
    
  ssd.displayS(1, 3, 4, 6, 7);
  delay(delms);
  ssd.clear();
      
  ssd.displayS(1, 3, 5, 6, 7);
  delay(delms);
  ssd.clear();
        
  ssd.displayS(1, 4, 5, 6, 7);
  delay(delms);
  ssd.clear();
       
  ssd.displayS(2, 3, 4, 5, 6);
  delay(delms);
  ssd.clear();
  
  ssd.displayS(2, 3, 4, 5, 7);
  delay(delms);
  ssd.clear();
    
  ssd.displayS(2, 3, 4, 6, 7);
  delay(delms);
  ssd.clear();
      
  ssd.displayS(2, 3, 5, 6, 7);
  delay(delms);
  ssd.clear();
        
  ssd.displayS(2, 4, 5, 6, 7);
  delay(delms);
  ssd.clear();
          
  ssd.displayS(3, 4, 5, 6, 7);
  delay(delms);
  ssd.clear();
  delay(delms);

  // Six segment patterns
  ssd.displayS(1, 2, 3, 4, 5, 6);
  delay(delms);
  ssd.clear();

  ssd.displayS(1, 2, 3, 4, 5, 7);
  delay(delms);
  ssd.clear();

  ssd.displayS(1, 2, 3, 4, 6, 7);
  delay(delms);
  ssd.clear();
  
  ssd.displayS(1, 2, 3, 5, 6, 7);
  delay(delms);
  ssd.clear();
  
  ssd.displayS(1, 2, 4, 5, 6, 7);
  delay(delms);
  ssd.clear();
  
  ssd.displayS(1, 3, 4, 5, 6, 7);
  delay(delms);
  ssd.clear();
  
  ssd.displayS(2, 3, 4, 5, 6, 7);
  delay(delms);
  ssd.clear();
  delay(delms);

  // Seven segment patterns
  ssd.displayS(1, 2, 3, 4, 5, 6, 7);
  delay(delms);
  ssd.clear();
  delay(delms);
}
