#
# Makefile for the Free Software Foundations g++ compiler
#
CC=g++
CFLAGS=-g -Wall
all: seven count

count: count.cc
	$(CC) $(CFLAGS) -o count count.cc

seven: seven.cc
	$(CC) $(CFLAGS) -o seven seven.cc

clean:
	rm seven count.exe
