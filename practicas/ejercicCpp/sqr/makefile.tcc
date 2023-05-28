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
all: sqr.exe

sqr.exe: sqr.cpp
	$(CC) $(CFLAGS) -esqr sqr.cpp

clean:
	erase sqr.exe
