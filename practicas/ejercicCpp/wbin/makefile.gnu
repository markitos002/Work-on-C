#
# Makefile for the Free Software Foundations g++ compiler
#
CC=g++
CFLAGS=-g -Wall
all: wbin

wbin: wbin.cc
	$(CC) $(CFLAGS) -o wbin wbin.cc

clean:
	rm wbin
