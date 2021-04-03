#
# Makefile for the Free Software Foundations g++ compiler
#
CC=g++
CFLAGS=-g -Wall
all: cent

cent: cent.cc
	$(CC) $(CFLAGS) -o cent cent.cc

clean:
	rm cent

