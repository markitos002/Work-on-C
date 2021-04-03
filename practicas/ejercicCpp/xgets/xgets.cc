#include <iostream.h>
#include <fstream.h>
/*
 * The main program will open this file if -S is on 
 * the command line.
 */
ofstream save_file;		// File to use for saving input
int save_file_open = 0;		// Save file defaults to not open
/********************************************************
 * extended_getline -- get a line from the input file	*
 *		and record it in a save file if needed.	*
 *							*
 * Parameters						*
 *	line -- the line to read			*
 *	size -- sizeof(line) -- maximum number of	*
 *			characters to read		*
 *	file -- file to read data from			*
 *		(normally stdin)			*
 *							*
 * Returns						*
 *	NULL -- error or end of file in read		*
 *	otherwise line (just like getline)		*
 ********************************************************/
istream &extended_getline(char *line, int size, ifstream &file)
{
    istream *result;		/* result of gets */

    result = &file.getline(line, size);

    // did someone ask for a save file?
    if (save_file_open) {
	save_file << line << '\n';
    }

    return (*result);
}
