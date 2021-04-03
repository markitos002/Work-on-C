#include <iostream.h>

main() {
    int counter;    // loop counter 

    for (counter = 0; counter < 3; ++counter) {
        int temporary = 1;
        static int permanent = 1;

        cout << "Temporary " << temporary << 
		" Permanent " << permanent << '\n';
        ++temporary;
        ++permanent;
    }
    return (0);
}
