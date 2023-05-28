#
# Makefile for the Free Software Foundations g++ compiler
#
CC=g++
CFLAGS=-g -Wall
equal: equal.cc
	$(CC) -Wall -g -o equal equal.cc

clean:
	rm equal
