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
all: rec.exe

rec.exe: rec.cpp
	@echo "This compile will generate an error"
	-$(CC) $(CFLAGS) -erec rec.cpp

clean:
	erase rec.exe
