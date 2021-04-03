/****************************************
 * copy -- copy one file to another.    *
 *                                      *
 * Usage                                *
 *      copy <from> <to>                *
 *                                      *
 * <from> -- the file to copy from      *
 * <to>   -- the file to copy into      *
 ****************************************/
#include <iostream.h>
#include <stdlib.h>	

#include <sys/types.h>  
#include <sys/stat.h>
#include <fcntl.h>

#ifdef __MSDOS__        // if we are MS-DOS 
#include <io.h>		// Get the MS-DOS include file for raw i/o
#else /* __MSDOS__ */
#include <unistd.h>	// Get the UNIX include file for raw i/o 
#endif /* __MSDOS__ */

const int BUFFER_SIZE = (16 * 1024); // use 16k buffers 

main(int argc, char *argv[])
{
    char  buffer[BUFFER_SIZE];  // buffer for data 
    int   in_file;              // input file descriptor
    int   out_file;             // output file descriptor 
    int   read_size;            // number of bytes on last read 

    if (argc != 3) {
        cerr << "Error:Wrong number of arguments\n";
        cerr << "Usage is: copy <from> <to>\n";
        exit(8);
    }
    in_file = open(argv[1], O_RDONLY);
    if (in_file < 0) {
        cerr << "Error:Unable to open " << argv[1] << '\n';
        exit(8);
    }
    out_file = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0666);
    if (out_file < 0) {
        cerr << "Error:Unable to open " << argv[2] << '\n';
        exit(8);
    }
    while (1) {
        read_size = read(in_file, buffer, sizeof(buffer));

        if (read_size == 0)
            break;              // end of file 

        if (read_size < 0) {
            cerr << "Error:Read error\n";
            exit(8);
        }
        write(out_file, buffer, (unsigned int) read_size);
    }
    close(in_file);
    close(out_file);
    return (0);
}
