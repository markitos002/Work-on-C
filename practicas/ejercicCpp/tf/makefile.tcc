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
tf.exe:	main.cpp count.cpp
	$(CC) $(CFLAGS) -etf main.cpp count.cpp

clean:
	erase tf.exe
