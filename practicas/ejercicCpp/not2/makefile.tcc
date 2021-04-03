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
all: not2.exe

not2.exe: not2.cpp
	$(CC) $(CFLAGS) -enot2 not2.cpp

clean:
	erase not2.exe
