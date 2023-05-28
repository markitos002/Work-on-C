#include <iostream.h>

#define SIZE    10;
#define FUDGE   SIZE -2;
main()
{
    int size;// size to really use 
    
    size = FUDGE;
    cout << "Size is " << size << '\n';
    return (0);
}
