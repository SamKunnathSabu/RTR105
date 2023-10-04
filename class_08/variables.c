// let invvestigate data types and variables

#include <stdio.h>

int main(void)
 {
 char c, test_symbol; // declaration of discrete variables
                      // this is just creation of correspondance 
                      // variable name (or identificator) VS
                      // some plase and some amount of bytes in memory
                      // after declaration value of variable isnt known
 printf("value of c variable as symbol: %c\n", c);
 printf("value of c variable as integer number (dec): %d\n", c);
 printf("value of c variable as integer number (oct): %#o\n", c);
 printf("value of c variable as integer number (hex):%#xn", c);
 printf("/n");

 // that is why it is better (but not obligatory) to use definition
 char c_new =85; // defiition of discrete variables
                 // is declaration + assighning of value
                 // = assigning operation (right part value is written 
                 // in memory place mentioned by the left part
 // there is some time (in microseconds or in nanoseconds etc.) between every action
 printf("value of c_new variable as symbol: %c\n", c_new);
 printf("value of c_new variable as integer number (dec): %d\n", c_new);
 printf("value of c_new variable as integer number (oct): %#o\n", c_new);
 printf("value of c_new variable as integer number (hex):%#xn", c_new);
 printf("/n");
 //  the role of variable is to be varied (changed)
 // when we need we can assign new value!
 c= 'Y';
 printf("value of c_new variable as symbol: %c\n", c);
 printf("value of c_new variable as integer number (dec): %d\n", c);
 printf("value of c_new variable as integer number (oct): %#o\n", c);
 printf("value of c_new variable as integer number (hex):%#xn", c);
 printf("/n"); 
 
 c= 0105; 
 printf("value of c_new variable as symbol: %c\n", c);
 printf("value of c_new variable as integer number (dec): %d\n", c);
 printf("value of c_new variable as integer number (oct): %#o\n", c);
 printf("value of c_new variable as integer number (hex):%#xn", c);
 printf("/n");

 c=0x4B;
 printf("value of c_new variable as symbol: %c\n", c);
 printf("value of c_new variable as integer number (dec): %d\n", c);
 printf("value of c_new variable as integer number (oct): %#o\n", c);
 printf("value of c_new variable as integer number (hex):%#xn", c);
 printf("/n");
 

return 0;
 }
