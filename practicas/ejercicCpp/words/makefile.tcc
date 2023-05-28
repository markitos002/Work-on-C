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
all: words.exe

words.exe: words.cpp
	$(CC) $(CFLAGS) -ewords words.cpp

clean:
	erase words.exe
