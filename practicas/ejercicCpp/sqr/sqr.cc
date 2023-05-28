#include <iostream.h>
#define SQR(x) (x * x)

main()
{
    int counter;    // counter for loop

    for (counter = 0; counter < 5; ++counter) {
        cout << "x " << counter+1 << 
		" x squared " << SQR(counter+1) << '\n';
    }
    return (0);
}
