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
all: len.exe

len.exe: len.cpp
	$(CC) $(CFLAGS) -elen len.cpp

clean:
	erase len.exe
