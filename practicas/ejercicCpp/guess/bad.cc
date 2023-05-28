#include <iostream.h>
#include <stdlib.h>
int   g, l, h, c, n;
char  line[80];
main()
{
    while (1) {
        /*Not Really*/
        g = rand() % 100 + 1;
        l = 0;
        h = 100;
        c = 0;
        while (1) {
            cout << "Bounds " << l << " - " << h << '\n';
            cout << "Value[" << c << "]? ";
            ++c;
            cin >> n;
            if (n == g)
                break;
            if (n < g)
                l = n;
            else
                h = n;
        }
        cout << "Bingo\n";
    }
    return (0);
}
