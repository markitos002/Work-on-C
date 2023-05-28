#
# Makefile for the Free Software Foundations g++ compiler
#
CC=g++
CFLAGS=-g -Wall
all: max

max: max.cc
	@echo "This compile generates a warning"
	$(CC) $(CFLAGS) -o max max.cc

clean:
	rm max
