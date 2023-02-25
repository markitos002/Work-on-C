#
# Makefile for the Free Software Foundations g++ compiler
#
CC=g++
CFLAGS=-g -Wall
all: tmp-name

tmp-name: tmp-name.cc
	$(CC) $(CFLAGS) -o tmp-name tmp-name.cc

clean:
	rm tmp-name
