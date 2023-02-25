#
# Makefile for the Free Software Foundations g++ compiler
#
CC=g++
CFLAGS=-g -Wall
all: and

and: and.cc
	$(CC) $(CFLAGS) -o and and.cc

clean:
	rm and
