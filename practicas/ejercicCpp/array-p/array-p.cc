#include <iostream.h>
#include <iomanip.h>	

const int ARRAY_SIZE  = 10; // Number of characters in array 
// Array to print
char array[ARRAY_SIZE] = "012345678";	

main()
{
    int index;	/* Index into the array */

    for (index = 0; index < ARRAY_SIZE; ++index) {
	cout << hex;	// Trick to print hex numbers
	cout << 
	    "&array[index]=0x" <<  int(&array[index]) << 
	    " (array+index)=0x" << int(array+index) << 
	    " array[index]=0x" <<  int(array[index]) << '\n',
       cout << dec;
    }
    return (0);
}
