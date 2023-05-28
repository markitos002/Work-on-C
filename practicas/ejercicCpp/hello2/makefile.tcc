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
hello2.exe: hello2.cpp
	$(CC) $(CFLAGS) -ehello2 hello2.cpp

clean:
	erase hello2.exe
