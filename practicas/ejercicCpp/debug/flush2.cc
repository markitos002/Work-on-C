#include <iostream.h>
main()
{
    int i,j;	/* two random integers */

    i = 1;
    j = 0;
    cout << "Starting\n";
    cout.flush();
    cout << "Before divide...";
    cout.flush();
    i = i / j;	// divide by zero error 
    cout << "After\n";
    cout.flush();
    return(0);
}
