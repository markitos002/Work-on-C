#
# Makefile for the Free Software Foundations g++ compiler
#
CC=g++
CFLAGS=-g -Wall
all: sqr

sqr: sqr.cc
	$(CC) $(CFLAGS) -o sqr sqr.cc

clean:
	rm sqr
