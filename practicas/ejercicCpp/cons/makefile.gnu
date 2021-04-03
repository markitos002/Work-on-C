#
# Makefile for the Free Software Foundations g++ compiler
#
CC=g++
CFLAGS=-g -Wall
class.o: class.cc
	@echo "This does not generate a full program"
	$(CC) -Wall -g -c class.cc

clean:
	rm class.o
