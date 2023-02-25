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
all: double.exe

double.exe: double.cpp
	$(CC) $(CFLAGS) -edouble double.cpp

clean:
	erase double.exe
