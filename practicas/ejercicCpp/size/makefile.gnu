#
# Makefile for the Free Software Foundations g++ compiler
#
CC=g++
CFLAGS=-g -Wall
all: size

size: size.cc
	$(CC) $(CFLAGS) -o size size.cc

clean:
	rm size
