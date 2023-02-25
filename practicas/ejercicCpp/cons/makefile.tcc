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
class.o: class.cpp
	@echo "This does not generate a full program"
	$(CC) $(CFLAGS) -c class.cpp

clean:
	erase class.o
