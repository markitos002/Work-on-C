#
# Makefile for the Free Software Foundations g++ compiler
#
CC=g++
CFLAGS=-g -Wall
all: words

words: words.cc
	$(CC) $(CFLAGS) -o words words.cc

clean:
	rm words
