#
# Makefile for the Free Software Foundations g++ compiler
#
CC=g++
CFLAGS=-g -Wall
all: total

total: total.cc
	$(CC) $(CFLAGS) -o total total.cc

clean:
	rm total
