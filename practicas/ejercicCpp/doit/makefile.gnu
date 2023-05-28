#
# Makefile for the Free Software Foundations g++ compiler
#
CC=g++
CFLAGS=-g -Wall
doit_t: doit_t.cc
	@echo "This compile generates an error"
	-$(CC) -Wall -g -o doit_t doit_t.cc

clean:
	rm doit_t
