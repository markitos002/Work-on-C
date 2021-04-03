#
# Makefile for Borland's Turbo-C++ compiler
#
CC=tcc
#
# Flags 
#     	-N  -- Check for stack overflow
#	-v  -- Enable debugging
#	-w  -- Turn on all warnings
#	-ml -- Large model
#
CFLAGS=-N -v -w -ml
fun-file.exe: fun-file.c
	$(C_COMPILE) $(CFLAGS) -efun-file fun-file.c

clean:
	erase fun-file.exe
