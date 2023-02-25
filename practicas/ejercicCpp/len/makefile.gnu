#
# Makefile for the Free Software Foundations g++ compiler
#
CC=g++
CFLAGS=-g -Wall
all: len

len: len.cc
	$(CC) $(CFLAGS) -o len len.cc

clean:
	rm len
