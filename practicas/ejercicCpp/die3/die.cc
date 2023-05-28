#include <iostream.h>
#include <stdlib.h>

main() {     
    int value;  // a random value for testing 
    
    value = 1; 
    if (value < 0) 
        cout << "Fatal Error:Abort\n";

    exit(8); 

    cout << "We did not die\n";
    return (0);
} 
