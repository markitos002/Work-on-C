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
all: init-a.exe

init-a.exe: init-a.cpp
	$(CC) $(CFLAGS) -einit-a init-a.cpp

clean:
	erase init-a.exe
