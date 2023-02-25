#include <stdio.h>
#include <stdlib.h>	/* ANSI Standard C file */
#include <iostream.h>

const char FILE_NAME[] = "input.txt";	// Name of the input file

main()
{
    int  count = 0;  // number of characters seen 
    FILE *in_file;   // input file 

    int ch;          // character or EOF flag from input 

    in_file = fopen(FILE_NAME, "rb");
    if (in_file == NULL) {
        cerr << "Can not open " << FILE_NAME << '\n';
        exit(8);
    }

    while (1) {
        ch = fgetc(in_file);
        if (ch == EOF)
            break;
        ++count;
    }
    cout << "Number of characters in " << FILE_NAME << " is " << count << '\n';

    fclose(in_file);
    return (0);
}
