#
# Makefile for the Free Software Foundations g++ compiler
#
CC=g++
CFLAGS=-g -Wall
all: comment

comment: comment.cc
	@echo "This program will not compile due to an error"
	-$(CC) $(CFLAGS) -o comment comment.cc

clean:
	rm comment
