#include <iostream.h>
main()
{
    short int i;

    // Works
    for (i = 0x80; i != 0; i = (i >> 1)) {
	cout << "i is " << hex << i << dec << '\n';
    }

    signed char ch;

    // Fails
    for (ch = 0x80; ch != 0; ch = (ch >> 1)) {
	cout << "ch is " << hex << int(ch) << dec << '\n';
    }
    return (0);
}
