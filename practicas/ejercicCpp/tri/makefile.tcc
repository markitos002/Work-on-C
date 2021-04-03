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
all: tri.exe

tri.exe: tri.cpp
	$(CC) $(CFLAGS) -etri tri.cpp

clean:
	erase tri.exe
