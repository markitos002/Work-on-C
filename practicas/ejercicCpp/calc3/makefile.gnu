#
# Makefile for the Free Software Foundations g++ compiler
#
CC=g++
CFLAGS=-g -Wall
all: calc3

calc3: calc3.cc
	$(CC) $(CFLAGS) -o calc3 calc3.cc

clean:
	rm clean3
