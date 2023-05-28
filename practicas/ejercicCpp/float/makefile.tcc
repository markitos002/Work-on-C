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
all: float.exe

float.exe: float.cpp
	$(CC) $(CFLAGS) -efloat float.cpp

clean:
	erase float.exe
