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
all: first.exe first.out

first.exe: first.cpp
	$(CC) $(CFLAGS) -efirst first.cpp

first.out: first.cpp
	cpp first.cpp >first.out

clean:
	erase first.out first.exe
