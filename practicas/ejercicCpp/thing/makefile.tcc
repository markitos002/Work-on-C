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
all: thing.exe

thing.exe: thing.cpp
	$(CC) $(CFLAGS) -ething thing.cpp

clean:
	erase thing.exe
