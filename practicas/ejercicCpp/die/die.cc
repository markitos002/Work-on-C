#include <iostream.h>
#include <stdlib.h>	/* ANSI Standard only */

#define DIE \
  cerr << "Fatal Error:Abort\n";exit(8); 

main() {     
    // a random value for testing 
    int value;  
    
    value = 1; 
    if (value < 0) 
        DIE; 

    cerr << "We did not die\n";
    return (0);
} 
