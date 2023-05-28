#
# Makefile for the Free Software Foundations g++ compiler
#
CC=g++
CFLAGS=-g -Wall
complex.o: complex.cc complex.h
	$(CC) -Wall -g -c complex.cc

clean:
	rm complex.o
