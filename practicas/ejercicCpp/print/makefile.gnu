#
# Makefile for the Free Software Foundations g++ compiler
#
CC=g++
CFLAGS=-g -Wall
all: print

print: print.cc
	$(CC) $(CFLAGS) -o print print.cc

clean:
	rm print
