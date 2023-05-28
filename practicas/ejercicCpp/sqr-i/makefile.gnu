#
# Makefile for the Free Software Foundations g++ compiler
#
CC=g++
CFLAGS=-g -Wall
all: sqr-i

sqr-i: sqr-i.cc
	$(CC) $(CFLAGS) -o sqr-i sqr-i.cc

clean:
	rm sqr-i
