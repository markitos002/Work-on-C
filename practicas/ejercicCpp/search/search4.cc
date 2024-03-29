/********************************************************
 * search -- Search a set of numbers. 			*
 *							*
 * Usage:						*
 *	search						*
 *		you will be asked numbers to lookup	*
 *							*
 * Files:						*
 *	numbers.dat -- numbers 1 per line to search	*
 *			(Numbers must be ordered)	*
 ********************************************************/
#include <iostream.h>
#include <fstream.h>
#include <stdlib.h>
#include <stdio.h>

const int MAX_NUMBERS = 1000;	// Max numbers in file 
const char *const DATA_FILE = "numbers.dat";// File with numbers 

int data[MAX_NUMBERS];	// Array of numbers to search 
int max_count;		// Number of valid elements in data 
main()
{
    ifstream in_file;	// Input file 
    int	middle;		// Middle of our search range 
    int low, high;	// Upper/lower bound 
    int search;		// number to search for 

    in_file.open(DATA_FILE, ios::in);
    if (in_file.bad()) {
	cerr << "Error:Unable to open " << DATA_FILE << '\n';
	exit (8);
    }

    /*
     * Read in data 
     */

    max_count = 0;

    while (1) {
	char line[30];	// Line from the input file

	if (in_file.eof())
	    break;

	in_file.getline(line, sizeof(line));

	sscanf(line, "%d", &data[max_count]);
	if (data[max_count] == -1)
	    break;

	++max_count;
    }

    while (1) {
	cout << "Enter number to search for or -1 to quit:" ;
	cin >> search;

	if (search == -1)
	    break;

	low = 0;
	high = max_count;

	while (1) {
	    if (low >= high) {
		cout << "Not found\n";
		break;
	    }
	    middle = (low + high) / 2;

	    if (data[middle] == search) {
		cout << "Found at index " << middle << '\n';
		break;
	    }

	    if (data[middle] < search)
		low = middle +1;
	    else
		high = middle -1;
	}
   }
   return (0);
}
