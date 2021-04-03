#
# Makefile for the Free Software Foundations g++ compiler
#
CC=g++
CFLAGS=-g -Wall
hello2: hello2.cc
	$(CC) -Wall -g -o hello2 hello2.cc

clean:
	rm hello2
