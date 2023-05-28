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
all: five.exe

five.exe: five.cpp
	$(CC) $(CFLAGS) -efive five.cpp

clean:
	erase five.exe
