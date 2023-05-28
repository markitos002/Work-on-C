#
# Makefile for the Free Software Foundations g++ compiler
#
CC=g++
CFLAGS=-g -Wall
all: total6 total6w

total6: total6.cc
	$(CC) $(CFLAGS) -o total6 total6.cc

total6w: total6w.cc
	$(CC) $(CFLAGS) -o total6w total6w.cc

clean:
	rm total6 total6w
