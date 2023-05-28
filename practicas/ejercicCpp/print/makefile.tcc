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
all: print.exe

print.exe: print.cpp
	$(CC) $(CFLAGS) -eprint print.cpp

clean:
	erase print.exe
