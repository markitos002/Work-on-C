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
all: twoc.exe

twoc.exe: twoc.cpp
	$(CC) $(CFLAGS) -etwoc twoc.cpp

clean:
	erase twoc.exe
