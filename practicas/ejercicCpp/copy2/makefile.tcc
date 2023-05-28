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
all: copy2.exe

copy2.exe: copy2.cpp
	$(CC) $(CFLAGS) -ecopy2 copy2.cpp

clean:
	erase copy2.exe
