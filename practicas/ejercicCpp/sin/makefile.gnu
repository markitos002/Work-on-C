#
# Makefile for the Free Software Foundations g++ compiler
#
CC=g++
CFLAGS=-g -Wall
sine: sine.cc
	$(CC) $(CFLAGS) -o sine sine.cc -lm

clean:
	rm sine
