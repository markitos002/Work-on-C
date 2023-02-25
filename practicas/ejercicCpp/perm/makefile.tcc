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
all: perm.exe

perm.exe: perm.cpp
	$(CC) $(CFLAGS) -eperm perm.cpp

clean:
	erase perm.exe
