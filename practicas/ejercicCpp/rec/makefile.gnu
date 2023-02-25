#
# Makefile for the Free Software Foundations g++ compiler
#
CC=g++
CFLAGS=-g -Wall
all: rec

rec: rec.cc
	@echo "This compile will generate an error"
	-$(CC) $(CFLAGS) -o rec rec.cc

clean:
	rm rec
