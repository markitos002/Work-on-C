#
# Makefile for the Free Software Foundations g++ compiler
#
CC=g++
CFLAGS=-g -Wall
all: def

def: def.cc
	$(CC) $(CFLAGS) -o def def.cc

clean:
	rm def
