#
# Makefile for the Free Software Foundations g++ compiler
#
CC=g++
CFLAGS=-g -Wall
all: balance

balance: balance.cc
	@echo "The following compile may generate a warning"
	$(CC) $(CFLAGS) -o balance balance.cc

clean:
	rm balance
