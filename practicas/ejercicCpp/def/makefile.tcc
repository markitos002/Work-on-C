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
all: def.exe

def.exe: def.cpp
	$(CC) $(CFLAGS) -edef def.cpp

clean:
	erase def.exe
