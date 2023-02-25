#
# Makefile for the Free Software Foundations g++ compiler
#
CC=g++
CFLAGS=-g -Wall
hello: hello.cc
	$(CC) -Wall -g -o hello hello.cc

clean:
	rm hello
