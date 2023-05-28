#include <iostream.h>
#include <string.h>

// A template for the "max" function

template<class kind> 
kind max(kind d1, kind d2) {
    if (d1 > d2)
        return (d1);
    return (d2);
}

// A specialization for the "max" function 
//   because we handle char * a little differently
char *max(char *d1, char *d2) {
    if (strcmp(d1, d2) > 0)
        return (d1);
    return (d2);
}

main()
{
    // Let's test out max
    cout << "max(1,2) " << max(1,2) << '\n';
    cout << "max(2,1) " << max(2,1) << '\n';

    cout << "max(\"able\", \"baker\") " << max("able", "baker") << '\n';
    cout << "max(\"baker\", \"able\") " << max("baker", "able") << '\n';
    return (0);
}
