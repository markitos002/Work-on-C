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
all: seven.exe count.exe

count.exe: count.cpp
	$(CC) $(CFLAGS) -ecount count.cpp

seven.exe: seven.cpp
	$(CC) $(CFLAGS) -eseven seven.cpp

clean:
	erase seven.exe count.exe
