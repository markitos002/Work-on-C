#
# Makefile for the Free Software Foundations g++ compiler
#
CC=g++
CFLAGS=-g -Wall
ref: ref.cc
	@echo "This compile will generate a warning"
	$(CC) -Wall -g -o ref ref.cc

clean:
	rm ref
