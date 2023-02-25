#
# Makefile for the Free Software Foundations g++ compiler
#
CC=g++
CFLAGS=-g -Wall
all: total2

total2: total2.cc
	$(CC) $(CFLAGS) -o total2 total2.cc

clean:
	rm total2
