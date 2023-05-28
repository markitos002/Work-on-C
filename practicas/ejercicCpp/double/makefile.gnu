#
# Makefile for the Free Software Foundations g++ compiler
#
CC=g++
CFLAGS=-g -Wall
all: double

double: double.cc
	$(CC) $(CFLAGS) -o double double.cc

clean:
	rm double
