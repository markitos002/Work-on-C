#
# Makefile for the Free Software Foundations g++ compiler
#
CC=g++
CFLAGS=-g -Wall
all: big

big: big.cc
	@echo The following compile generates a syntax error
	$(CC) $(CFLAGS) -o big big.cc

clean:
	rm big
