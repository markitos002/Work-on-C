#include <iostream.h>
int   old_number;     // previous Fibonacci number
int   current_number; // current Fibonacci number 
int   next_number;    // next number in the series

main()
{
    // start things out 
    old_number = 1;
    current_number = 1;

    cout << "1\n"; // Print first number

    while (current_number < 100) {

	cout << current_number << '\n';
	next_number = current_number + old_number;

	old_number = current_number;
	current_number = next_number;
    }
    return (0);
}
