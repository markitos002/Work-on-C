/********************************************************
 * DataBase -- A very simple database program that	*
 *		lookup names in a hardcoded list.	*
 * 							*
 * Usage:						*
 *	database [-S<file>]				*
 *							*
 *	-S<file>	Specify save file for 		*
 *			debugging purposes		*
 *							*
 *		Program will ask you for a name.	*
 *		Enter the name; it will tell you if	*
 *		it is the list.				*
 *							*
 *		A blank name terminates the program.	*
 ********************************************************/
#include <iostream.h>
#include <fstream.h>
#include <stdlib.h>

ofstream save_file;	// Save file if any 
int save_file_open = 0; // Save file open flag

char *extended_getline(char *line, int size, istream &file);

main(int argc, char *argv[])
{
    char name[80];	// a name to lookup 
    char *save_file_name; // Name of the save file 

    int lookup(char *name);// lookup a name 

    while ((argc > 1) && (argv[1][0] == '-')) {
	switch (argv[1][1]) {
	    case 'S':
		save_file_name = &argv[1][2];
		save_file.open(save_file_name, ios::out);
		if (save_file.bad())
		    cerr << "Warning:Unable to open save file " <<
			    save_file_name << '\n';
		else
		    save_file_open = 1;
		break;
	    default:
		cerr << "Bad option: " << argv[1] << '\n';
		exit (8);
	}
	--argc;
	++argv;
    }    


    while (1) {
	cout << "Enter name: ";
	extended_getline(name, sizeof(name), cin);

	/* ... rest of program ... */
   }
   return (0);
}
