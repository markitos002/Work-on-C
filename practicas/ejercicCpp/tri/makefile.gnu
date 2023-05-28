#
# Makefile for the Free Software Foundations g++ compiler
#
CC=g++
CFLAGS=-g -Wall
all: tri

tri: tri.cc
	$(CC) $(CFLAGS) -o tri tri.cc

clean:
	rm tri
