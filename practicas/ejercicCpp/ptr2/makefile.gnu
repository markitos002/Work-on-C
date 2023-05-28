#
# Makefile for the Free Software Foundations g++ compiler
#
CC=g++
CFLAGS=-g -Wall
all: ptr2 ptr2a

ptr2a: ptr2a.cc
	$(CC) $(CFLAGS) -o ptr2a ptr2a.cc

ptr2: ptr2.cc
	$(CC) $(CFLAGS) -o ptr2 ptr2.cc

clean:
	rm ptr2 ptr2a
