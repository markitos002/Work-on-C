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
all: graph.exe

graph.exe: graph.cpp
	$(CC) $(CFLAGS) -egraph graph.cpp

clean:
	erase graph.exe
