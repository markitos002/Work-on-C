#
# Makefile for the Free Software Foundations g++ compiler
#
CC=g++
CFLAGS=-g -Wall
all: sam

sam: sam.cc
	$(CC) $(CFLAGS) -o sam sam.cc

clean:
	rm sam
