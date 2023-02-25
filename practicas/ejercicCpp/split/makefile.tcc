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
all: split.exe

split.exe: split.cpp
	$(CC) $(CFLAGS) -esplit split.cpp

clean:
	erase split.exe
