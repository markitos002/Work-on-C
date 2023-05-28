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
all: float2.exe

float2.exe: float2.cpp
	$(CC) $(CFLAGS) -efloat2 float2.cpp

clean:
	erase float2.exe
