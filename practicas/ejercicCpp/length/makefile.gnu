#
# Makefile for the Free Software Foundations g++ compiler
#
CC=g++
CFLAGS=-g -Wall
all: length.o rlen.o

length.o: length.cc
	@echo "Warning, this generates an object file only"
	@echo "This compile generates a warning message"
	$(CC) -c $(CFLAGS) length.cc

rlen.o: rlen.cc
	@echo "Warning, this generates an object file only"
	$(CC) -c $(CFLAGS) rlen.cc

clean:
	rm length.o rlen.o
