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
all: total6.exe total6w.exe

total6.exe: total6.cpp
	$(CC) $(CFLAGS) -etotal6 total6.cpp

total6w.exe: total6w.cpp
	$(CC) $(CFLAGS) -etotal6w total6w.cpp

clean:
	erase total6.exe total6w.exe
