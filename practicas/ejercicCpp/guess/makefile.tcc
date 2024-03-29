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
all: good.exe bad.exe

good.exe: good.cpp
	$(CC) $(CFLAGS) -egood good.cpp

bad.exe: bad.cpp
	$(CC) $(CFLAGS) -ebad bad.cpp

clean:
	erase good.exe bad.exe
