/********************************************************
 * read -- read in 100 numbers and sum them		*
 *							*
 * Usage:						*
 *	read 						*
 *							*
 * Numbers are in the file "numbers.dat"		*
 *							*
 * Warning: No check is made for a file with less than	*
 * 100 numbers in it.					*
 ********************************************************/
#include <iostream.h>
#include <fstream.h>
#include <stdlib.h>

main()
{
    const int DATA_SIZE = 100;	// Number of items in the data
    int data_array[DATA_SIZE];	// The data
    ifstream data_file("numbers.dat"); // The input file
    int i;			// Loop counter

    if (data_file.bad()) {
	cerr << "Error: Could not open numbers.dat\n";
	exit (8);
    }

    for (i = 0; i < DATA_SIZE; ++i) 
	data_file >> data_array[i];

    int total;	// Total of the numbers

    total = 0;
    for (i = 0; i < DATA_SIZE; ++i) 
	total += data_array[i];

    cout << "Total of all the numbers is " << total << '\n';
    return (0);
}
