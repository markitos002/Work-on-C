#
# Makefile for the Free Software Foundations g++ compiler
#
CC=g++
CFLAGS=-g -Wall
all: tterm

tterm: tterm.cc
	$(CC) $(CFLAGS) -o tterm tterm.cc

clean:
	rm tterm
