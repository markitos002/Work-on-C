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
all: wbin.exe

wbin.exe: wbin.cpp
	$(CC) $(CFLAGS) -ewbin wbin.cpp

clean:
	erase wbin.exe
