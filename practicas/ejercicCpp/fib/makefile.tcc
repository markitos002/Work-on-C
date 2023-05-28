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
all: fib.exe

fib.exe: fib.cpp
	$(CC) $(CFLAGS) -efib fib.cpp

clean:
	erase fib.exe
