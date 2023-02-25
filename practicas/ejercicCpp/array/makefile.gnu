#
# Makefile for the Free Software Foundations g++ compiler
#
CC=g++
CFLAGS=-g -Wall
all: array

array: array.cc
	$(CC) $(CFLAGS) -o array array.cc

clean:
	rm array
