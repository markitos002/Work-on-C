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
all: io.out io.exe

io.out: io.exe
	io >io.out

io.exe: io.cpp
	$(CC) $(CFLAGS) -eio io.cpp

clean:
	erase io.exe 
