#
# Makefile for the Free Software Foundations g++ compiler
#
CC=g++
CFLAGS=-g -Wall
all: fib

fib: fib.cc
	$(CC) $(CFLAGS) -o fib fib.cc

clean:
	rm fib
