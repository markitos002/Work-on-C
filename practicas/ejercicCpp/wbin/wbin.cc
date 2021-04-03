#include <iostream.h>
#include <fstream.h>
#include <stdlib.h>

main()
{
    int cur_char;   // current character to write 
    ofstream out_file; // output file 

    out_file.open("test.out", ios::out);
    if (out_file.bad()) {
        (cerr << "Can not open output file\n");
        exit (8);
    }

    for (cur_char = 0; cur_char < 128; ++cur_char) {
        out_file << cur_char;
    }
    return (0);
}
