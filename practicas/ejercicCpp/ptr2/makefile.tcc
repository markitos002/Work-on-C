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
all: ptr2.exe ptr2a.exe

ptr2a.exe: ptr2a.cpp
	$(CC) $(CFLAGS) -eptr2a ptr2a.cpp

ptr2.exe: ptr2.cpp
	$(CC) $(CFLAGS) -eptr2 ptr2.cpp

clean:
	erase ptr2.exe ptr2a.exe
