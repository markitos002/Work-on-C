/********************************************************
 * DataBase -- A very simple database program to	*
 *		lookup names in a hardcoded list.	*
 * 							*
 * Usage:						*
 *	database					*
 *		Program will ask you for a name.	*
 *		Enter the name; it will tell you if	*
 *		it is the list.				*
 *							*
 *		A blank name terminates the program.	*
 ********************************************************/
const int STRING_LENGTH = 80;	/* Length of typical string */
#include <iostream.h>
#include <string.h>

main()
{
    char name[STRING_LENGTH];	// a name to lookup 

    int lookup(char *);		// lookup a name 

    while (1) {
	cout << "Enter name: ";
	cin.getline(name, sizeof(name));

	// Check for blank name
	if (strlen(name) <= 0)
	    break;

	if (lookup(name)) 
	    cout << name << " is in the list\n";
	else
	    cout << name << " is not in the list\n";
    }
    return (0);
}
/********************************************************
 * lookup -- lookup a name in a list			*
 *							*
 * Parameters						*
 *	name -- name to lookup				*
 *							*
 * Returns						*
 *	1 -- name in the list				*
 *	0 -- name not in the list			*
 ********************************************************/
int lookup(char *name)
{
    // List of people in the database 
    // Note: Last name is a NULL for end of list 
    static char *list[] = {
	"John",
	"Jim",
	"Jane",
	"Clyde",
	NULL
    };

    int index;		// index into list 

    for (index = 0; list[index] != NULL; ++index) {
	if (strcmp(list[index], name) == 0)
	    return (1);
    }
    return (0);
}

