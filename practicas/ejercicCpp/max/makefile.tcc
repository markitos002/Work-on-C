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
all: max.exe

max.exe: max.cpp
	@echo "This compile generates a warning"
	$(CC) $(CFLAGS) -emax max.cpp

clean:
	erase max.exe
