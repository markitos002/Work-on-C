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
all: name2.exe

name2.exe: name2.cpp
	$(CC) $(CFLAGS) -ename2 name2.cpp

clean:
	erase name2.exe
