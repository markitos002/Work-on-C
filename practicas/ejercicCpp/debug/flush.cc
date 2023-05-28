#include <iostream.h>
main()
{
    int i,j;	/* two random integers */

    i = 1;
    j = 0;
    cout << "Starting\n";
    cout << "Before divide...";
    i = i / j;	// divide by zero error 
    cout << "After\n";
    return(0);
}
