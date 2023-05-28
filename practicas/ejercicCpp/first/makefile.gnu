#
# Makefile for the Free Software Foundations g++ compiler
#
CC=g++
CFLAGS=-g -Wall
all: first first.out

first: first.cc
	$(CC) $(CFLAGS) -o first first.cc

first.out: first.cc
	$(CC) -E -Wall first.cc >first.out

clean:
	rm first.out first
