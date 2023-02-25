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
all: float1.exe

float1.exe: float1.cpp
	@echo "This program will generate a warning when compiled"
	$(CC) $(CFLAGS) -efloat1 float1.cpp

clean:
	erase float1.exe
