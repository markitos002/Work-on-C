#
# Makefile for the Free Software Foundations g++ compiler
#
CC=g++
CFLAGS=-g -Wall
all: five

five: five.cc
	$(CC) $(CFLAGS) -o five five.cc

clean:
	rm five
