#
# Makefile for the Free Software Foundations g++ compiler
#
CC=g++
CFLAGS=-g -Wall
all: perm

perm: perm.cc
	$(CC) $(CFLAGS) -o perm perm.cc

clean:
	rm perm
