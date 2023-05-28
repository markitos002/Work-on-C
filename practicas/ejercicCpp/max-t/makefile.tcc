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
all: max.exe stack_c1.exe

max.exe: max.cpp
	$(CC) $(CFLAGS) -emax max.cpp

stack_c1.exe: stack_c1.cpp
	$(CC) $(CFLAGS) -estack_c1 stack_c1.cpp

words.exe: words.cpp
	$(CC) -v $(CFLAGS) -ewords words.cpp

words.cpp: words.cpp
	$(CC) -E $(CFLAGS) words.cpp>words.cpp

clean:
	erase max.exe stack_c1.exe
