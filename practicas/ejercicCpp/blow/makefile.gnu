#
# Makefile for the Free Software Foundations g++ compiler
#
CC=g++
CFLAGS=-g -Wall
blow: blow.cc
	$(CC) -Wall -g -o blow blow.cc

clean:
	rm blow
