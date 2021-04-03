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
all: big.exe

big.exe: big.cpp
	@echo The following compile generates a syntax error
	$(CC) $(CFLAGS) -ebig big.cpp

clean:
	erase big.exe
