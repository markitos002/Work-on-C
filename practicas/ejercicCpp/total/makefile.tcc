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
all: total.exe

total.exe: total.cpp
	$(CC) $(CFLAGS) -etotal total.cpp

clean:
	erase total.exe
