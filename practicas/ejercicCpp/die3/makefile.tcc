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
all: die.exe

die.exe: die.cpp
	$(CC) $(CFLAGS) -edie die.cpp

clean:
	erase die.exe
