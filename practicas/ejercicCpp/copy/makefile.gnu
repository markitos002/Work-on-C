#
# Makefile for the Free Software Foundations g++ compiler
#
CC=g++
CFLAGS=-g -Wall
all: copy

copy: copy.cc
	$(CC) $(CFLAGS) -o copy copy.cc

clean:
	rm copy
