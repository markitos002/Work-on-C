#
# Makefile for the Free Software Foundations g++ compiler
#
CC=g++
CFLAGS=-g -Wall
all: float

float: float.cc
	$(CC) $(CFLAGS) -o float float.cc

clean:
	rm float
