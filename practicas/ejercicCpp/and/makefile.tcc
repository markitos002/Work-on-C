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
all: and.exe

and.exe: and.cpp
	$(CC) $(CFLAGS) -eand and.cpp

clean:
	erase and.exe
