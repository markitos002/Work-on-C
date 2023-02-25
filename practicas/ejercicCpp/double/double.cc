#include <iostream.h>
char  line[100];   // input line from console
int   value;	   // a value to double

main()
{
    cout << "Enter a value: ";
    cin >> value;
    cout << "Twice " << value << " is " << value * 2 << '\n';
    return (0);
}
