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
all: cent.exe

cent.exe: cent.cpp
	$(CC) $(CFLAGS) -ecent cent.cpp

clean:
	erase cent.exe

