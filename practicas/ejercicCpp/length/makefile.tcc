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
all: length.obj rlen.obj

length.obj: length.cpp
	@echo "Warning, this generates an object file only"
	@echo "This compile generates a warning message"
	$(CC) -c $(CFLAGS) length.cpp

rlen.obj: rlen.cpp
	@echo "Warning, this generates an object file only"
	$(CC) -c $(CFLAGS) rlen.cpp

clean:
	erase length.obj rlen.obj
