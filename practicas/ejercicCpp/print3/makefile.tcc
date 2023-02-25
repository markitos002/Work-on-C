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
all: print3.exe

print3.exe: print3.cpp
	$(CC) $(CFLAGS) -eprint3 print3.cpp

clean:
	erase print3.exe
