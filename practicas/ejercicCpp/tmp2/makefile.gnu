#
# Makefile for the Free Software Foundations g++ compiler
#
CC=g++
CFLAGS=-g -Wall
all: tmp2

tmp2: tmp2.cc
	$(CC) $(CFLAGS) -o tmp2 tmp2.cc

clean:
	rm tmp2
