#
# Makefile for the Free Software Foundations g++ compiler
#
CC=g++
CFLAGS=-g -Wall
all: float1

float1: float1.cc
	@echo "This program will generate a warning when compiled"
	$(CC) $(CFLAGS) -o float1 float1.cc

clean:
	rm float1
