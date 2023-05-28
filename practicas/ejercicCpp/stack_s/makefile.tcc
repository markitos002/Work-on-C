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
stack_s.exe: stack_s.cpp
	$(CC) $(CFLAGS) -estack_s stack_s.cpp

clean:
	erase stack_s.exe
