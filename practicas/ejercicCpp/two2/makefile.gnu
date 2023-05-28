#
# Makefile for the Free Software Foundations g++ compiler
#
CC=g++
CFLAGS=-g -Wall
all: twoc

twoc: twoc.cc
	$(CC) $(CFLAGS) -o twoc twoc.cc

clean:
	rm twoc
