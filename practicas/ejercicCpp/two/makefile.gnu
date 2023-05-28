#
# Makefile for the Free Software Foundations g++ compiler
#
CC=g++
CFLAGS=-g -Wall
two: two.c
	$(CC) $(CFLAGS) -o two two.c

clean:
	rm two
