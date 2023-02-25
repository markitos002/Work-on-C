#
# Makefile for the Free Software Foundations g++ compiler
#
CC=g++
CFLAGS=-g -Wall
all: name2

name2: name2.cc
	$(CC) $(CFLAGS) -o name2 name2.cc

clean:
	rm name2
