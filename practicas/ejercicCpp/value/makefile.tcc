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
all: value.exe ref.exe big.obj

big.obj: big.cpp
	$(CC) $(CFLAGS) -c big.cpp

value.exe: value.cpp
	$(CC) $(CFLAGS) -evalue value.cpp

ref.exe: ref.cpp
	$(CC) $(CFLAGS) -eref ref.cpp

clean:
	erase big.obj value.exe ref.exe
	
