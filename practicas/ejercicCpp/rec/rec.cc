#include <iostream.h>
#define RECIPROCAL (number) (1.0 / (number))

main()
{
    float   counter;

    for (counter = 0.0; counter < 10.0; 
	 counter += 1.0) {

        cout << "1/" << counter << " = " << 
		  RECIPROCAL(counter) << "\n"; 
    }
    return (0);
}
