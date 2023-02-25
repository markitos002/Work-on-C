#
# Makefile for the Free Software Foundations g++ compiler
#
CC=g++
CFLAGS=-g -Wall
read: read.cc
	$(CC) -Wall -g -o read read.cc

clean:
	rm read
