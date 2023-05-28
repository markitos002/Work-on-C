#include <iostream.h>
#include <fstream.h>
ofstream save_file;	// Save input in this file 
int save_file_open = 0;	// Save file has been opened
ifstream playback_file;	// Playback data from this file 
int playback_file_open = 0;// Playback file open flag
/********************************************************
 * extended_getline -- get a line from the input file	*
 *		and record it in a save file if needed	*
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
istream &extended_getline(char *line, int size, istream &file)
{
    istream *result;		// result of getline 

    if (playback_file_open) {
	result = &playback_file.getline(line, size);
	if (file == cin) 
	    // echo the input to the standard out 
	    // so the user sees it 
	    cout << line << '\n';
    } else
	result = &file.getline(line, size);

    // did someone ask for a save file 
    if (save_file_open) 
	save_file << line << '\n';

    return (*result);
}
