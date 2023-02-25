#
# Makefile for the Free Software Foundations g++ compiler
#
CC=g++
CFLAGS=-g -Wall
all: thing

thing: thing.cc
	$(CC) $(CFLAGS) -o thing thing.cc

clean:
	rm thing
