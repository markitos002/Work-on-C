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
all: size.exe

size.exe: size.cpp
	$(CC) $(CFLAGS) -esize size.cpp

clean:
	erase size.exe
