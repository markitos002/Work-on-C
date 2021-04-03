#include <iostream.h>

int array[10] = {4, 5, 8, 9, 8, 1, 0, 1, 9, 3};
int index;

main()
{
    index = 0;
    while (array[index] != 0)
        ++index;

    cout << "Number of elements before zero " << index << '\n';
    return (0);
}
