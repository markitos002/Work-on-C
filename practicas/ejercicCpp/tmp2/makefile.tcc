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
all: tmp2.exe

tmp2.exe: tmp2.cpp
	$(CC) $(CFLAGS) -etmp2 tmp2.cpp

clean:
	erase tmp2.exe
