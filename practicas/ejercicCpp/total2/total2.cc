#include <iostream.h>
int   total;       // Running total of all numbers so far 
int   item;        // next item to add to the list
int   minus_items; // number of negative items 

main()
{
    total = 0;
    minus_items = 0;
    while (1) {
        cout << "Enter # to add\n";
	cout << "  or 0 to stop:";
        cin >> item;

        if (item == 0)
            break;

        if (item < 0) {
            ++minus_items;
            continue;
        }
        total += item;
        cout << "Total: " << total << '\n';
    }

    cout << "Final total " << total << '\n';
    cout << "with " << minus_items << " negative items omitted\n";
    return (0);
}
