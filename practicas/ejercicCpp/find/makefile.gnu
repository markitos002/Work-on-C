#
# Makefile for the Free Software Foundations g++ compiler
#
CC=g++
CFLAGS=-g -Wall
all: find.o

find.o: find.cc
	$(CC) -c $(CFLAGS) find.cc

clean:
	rm find.o
