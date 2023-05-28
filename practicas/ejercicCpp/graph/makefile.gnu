#
# Makefile for the Free Software Foundations g++ compiler
#
CC=g++
CFLAGS=-g -Wall
all: graph

graph: graph.cc
	$(CC) $(CFLAGS) -o graph graph.cc

clean:
	rm graph
