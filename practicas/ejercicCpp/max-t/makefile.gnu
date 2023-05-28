#
# Makefile for the Free Software Foundations g++ compiler
#
CC=g++
CFLAGS=-g -Wall
all: max stack_c1

max: max.cc
	$(CC) $(CFLAGS) -o max max.cc

stack_c1: stack_c1.cc
	$(CC) $(CFLAGS) -o stack_c1 stack_c1.cc

words: words.cc
	$(CC) -v $(CFLAGS) -o words words.cc

words.cc: words.cc
	$(CC) -E -Wall words.cc>words.cc

clean:
	rm max stack_c1
