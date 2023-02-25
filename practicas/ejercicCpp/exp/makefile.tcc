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
all: exp.exe

exp.exe: exp.cpp
	@echo "Expect a null effect warning"
	$(CC) $(CFLAGS) -eexp exp.cpp

clean:
	erase exp.exe
