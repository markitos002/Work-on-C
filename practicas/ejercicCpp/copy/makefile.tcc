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
all: copy.exe

copy.exe: copy.cpp
	$(CC) $(CFLAGS) -ecopy copy.cpp

clean:
	erase copy.exe
