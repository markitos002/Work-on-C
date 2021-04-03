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
all: array-p.exe

array-p.exe: array-p.cpp
	$(CC) $(CFLAGS) -earray-p array-p.cpp

clean:
	erase array-p.exe
