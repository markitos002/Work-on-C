#include <iostream.h>
int   balance_owed;     // amount owed 

main()
{
    cout << "Enter number of dollars owed:";
    cin >> balance_owed;

    if (balance_owed = 0)
        cout << "You owe nothing.\n";
    else
        cout << "You owe " << balance_owed << " dollars.\n";

    return (0);
}
