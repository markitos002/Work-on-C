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
all: tmp-name.exe

tmp-name.exe: tmp-name.cpp
	$(CC) $(CFLAGS) -etmp-name tmp-name.cpp

clean:
	erase tmp-name.exe
