#
# Makefile for the Free Software Foundations g++ compiler
#
CC=g++
CFLAGS=-g -Wall
all: split

split: split.cc
	$(CC) $(CFLAGS) -o split split.cc

clean:
	rm split
