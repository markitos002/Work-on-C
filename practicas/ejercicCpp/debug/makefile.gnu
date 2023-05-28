#
# Makefile for the Free Software Foundations g++ compiler
#
CC=g++
CFLAGS=-g -Wall
all: flush cstop.o flush2

flush: flush.cc
	$(CC) -Wall -o flush flush.cc

flush2: flush2.cc
	$(CC) -Wall -o flush2 flush2.cc

cstop.o: cstop.cc
	@echo "Generates object file only"
	$(CC) -Wall -c cstop.cc

clean:
	rm flush cstop.o flush2
