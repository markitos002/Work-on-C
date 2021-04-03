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
ref.exe: ref.cpp
	@echo "This compile will generate a warning"
	$(CC) $(CFLAGS) -eref ref.cpp

clean:
	erase ref.exe
