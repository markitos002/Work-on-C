#
# Makefile for the Free Software Foundations g++ compiler
#
CC=g++
CFLAGS=-g -Wall
all: not2

not2: not2.cc
	$(CC) $(CFLAGS) -o not2 not2.cc

clean:
	rm not2
