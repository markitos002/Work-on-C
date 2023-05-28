#
# Makefile for the Free Software Foundations g++ compiler
#
CC=g++
CFLAGS=-g -Wall
all: good bad

good: good.cc
	$(CC) $(CFLAGS) -o good good.cc

bad: bad.cc
	$(CC) $(CFLAGS) -o bad bad.cc

clean:
	rm good bad
