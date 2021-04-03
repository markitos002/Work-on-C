#include <iostream.h>

int total;      // total of all the numbers 
int current;    // current value from the user 
int counter;    // while loop counter 

main() {
    total = 0;

    counter = 0;
    while (counter < 5) {
        cout << "Number? ";

        cin >> current;
        total += current;

	++counter;
    }
    cout << "The grand total is " << total << '\n';
    return (0);
}
