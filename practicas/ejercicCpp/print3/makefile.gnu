#
# Makefile for the Free Software Foundations g++ compiler
#
CC=g++
CFLAGS=-g -Wall
all: print3

print3: print3.cc
	$(CC) $(CFLAGS) -o print3 print3.cc

clean:
	rm print3
