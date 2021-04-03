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
all: calc.exe

calc.exe: calc.cpp
	$(CC) $(CFLAGS) -ecalc calc.cpp

clean:
	erase calc.exe
