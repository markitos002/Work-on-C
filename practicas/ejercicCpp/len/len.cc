#include <string.h>
#include <iostream.h>

char line[100];	// A line of data

main()
{
    cout << "Enter a line:";
    cin.getline(line, sizeof(line));

    cout << "The length of the line is: " << strlen(line) << '\n';
    return (0);
}
