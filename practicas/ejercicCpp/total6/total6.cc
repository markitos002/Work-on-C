#include <iostream.h>

int total;      // total of all the numbers 
int current;    // current value from the user 
int counter;    // for loop counter 

main() {
    total = 0;
    for (counter = 0; counter < 5; ++counter) {
        cout << "Number? ";

        cin >> current;
        total += current;
    }
    cout << "The grand total is " << total << '\n';
    return (0);
}
