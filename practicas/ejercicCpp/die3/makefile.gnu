#
# Makefile for the Free Software Foundations g++ compiler
#
CC=g++
CFLAGS=-g -Wall
all: die

die: die.cc
	$(CC) $(CFLAGS) -o die die.cc

clean:
	rm die
