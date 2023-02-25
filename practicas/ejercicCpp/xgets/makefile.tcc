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
all: xgets.obj xgets2.obj

xgets.obj: xgets.cpp
	@echo "The following does not generate a full program"
	$(CC) -c $(CFLAGS) xgets.cpp

xgets2.obj: xgets2.cpp
	@echo "The following does not generate a full program"
	$(CC) -c $(CFLAGS) xgets2.cpp

clean:
	erase xgets.obj xgets2.obj
