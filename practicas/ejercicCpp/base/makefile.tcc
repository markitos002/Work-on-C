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
all: base.exe base2.obj base3.obj

base.exe: base.cpp
	$(CC) $(CFLAGS) -ebase base.cpp

base2.obj: base2.cpp
	@echo "This does not generate a full program"
	$(CC) $(CFLAGS) -c base2.cpp

base3.obj: base3.cpp
	@echo "This does not generate a full program"
	$(CC) $(CFLAGS) -c base3.cpp

clean:
	erase base.exe base2.obj base3.obj
