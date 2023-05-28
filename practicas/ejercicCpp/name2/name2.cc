#include <string.h>
#include <iostream.h>

char first[100];	// first name
char last[100];		// last name
char full_name[100];	// full version of first and last name

main()
{
    strcpy(first, "Steve");	// Initalize first name
    strcpy(last, "Oualline");	// Initalize last name

    strcpy(full_name, first);	// full = "Steve"
    // Note: strcat not strcpy
    strcat(full_name, " ");	// full = "Steve " 
    strcat(full_name, last);	// full = "Steve Oualline" 

    cout << "The full name is " << full_name << '\n';
    return (0);
}
