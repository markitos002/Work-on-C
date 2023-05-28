#
# Makefile for the Free Software Foundations g++ compiler
#
CC=g++
CFLAGS=-g -Wall
all: array-p

array-p: array-p.cc
	$(CC) $(CFLAGS) -o array-p array-p.cc

clean:
	rm array-p
