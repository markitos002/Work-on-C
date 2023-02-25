#
# Makefile for the Free Software Foundations g++ compiler
#
CC=g++
CFLAGS=-g -Wall
all: init-a

init-a: init-a.cc
	$(CC) $(CFLAGS) -o init-a init-a.cc

clean:
	rm init-a
