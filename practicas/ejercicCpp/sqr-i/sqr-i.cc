#include <iostream.h>
#define SQR(x) ((x) * (x))

main()
{
    int counter;    /* counter for loop */

    counter = 0;
    while (counter < 5)
        cout << "x " << counter+1 << 
		" x squared " << SQR(++counter) << '\n';
    return (0);
}
