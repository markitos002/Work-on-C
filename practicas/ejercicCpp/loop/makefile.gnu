#
# Makefile for the Free Software Foundations g++ compiler
#
CC=g++
CFLAGS=-g -Wall
loop: loop.cc
	$(CC) $(CFLAGS) -o loop loop.cc

clean:
	rm loop
