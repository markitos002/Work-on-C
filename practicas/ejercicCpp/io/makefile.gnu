#
# Makefile for the Free Software Foundations g++ compiler
#
CC=g++
CFLAGS=-g -Wall
all: io.out io

io.out: io
	io >io.out

io: io.cc
	$(CC) $(CFLAGS) -o io io.cc

clean:
	rm io 
