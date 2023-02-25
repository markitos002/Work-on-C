#
# Makefile for the Free Software Foundations g++ compiler
#
CC=g++
CFLAGS=-g -Wall
all: value ref big.o

big.o: big.cc
	$(CC) -Wall -g -c big.cc

value: value.cc
	$(CC) -Wall -g -o value value.cc

ref: ref.cc
	$(CC) -Wall -g -o ref ref.cc

clean:
	rm big.o value ref
	
