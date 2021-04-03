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
all: sam.exe

sam.exe: sam.cpp
	$(CC) $(CFLAGS) -esam sam.cpp

clean:
	erase sam.exe
