#include <iostream.h>
#include <stdlib.h>		

main()
{
    char  line[10];

    while (1) {
	cout << "Enter add(a), delete(d), quit(q): ";
	cin.getline(line, sizeof(line));

	switch (line[0]) {
	case 'a':
	    cout << "Add\n";
	    break;
	case 'd':
	    cout << "Delete\n";
	    break;
	case 'q':
	    cout << "Quit\n";
	    exit(0);
        defualt:
	    cout << "Error:Bad command " << line[0] << '\n';
	    break;
	}
    }
    return (0);
}
