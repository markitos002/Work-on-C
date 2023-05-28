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
all: array.exe

array.exe: array.cpp
	$(CC) $(CFLAGS) -earray array.cpp

clean:
	erase array.exe
