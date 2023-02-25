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
all: balance.exe

balance.exe: balance.cpp
	@echo "The following compile may generate a warning"
	$(CC) $(CFLAGS) -ebalance balance.cpp

clean:
	erase balance.exe
