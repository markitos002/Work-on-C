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
all: tterm.exe

tterm.exe: tterm.cpp
	$(CC) $(CFLAGS) -etterm tterm.cpp

clean:
	erase tterm.exe
