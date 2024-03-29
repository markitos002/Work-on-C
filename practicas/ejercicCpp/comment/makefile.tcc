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
all: comment.exe

comment.exe: comment.cpp
	@echo "This program will not compile due to an error"
	-$(CC) $(CFLAGS) -ecomment comment.cpp

clean:
	erase comment.exe
