#
# Makefile for the Free Software Foundations g++ compiler
#
CC=g++
CFLAGS=-g -Wall
tf:	main.cc count.cc
	$(CC) -Wall -g -o tf main.cc count.cc

clean:
	rm tf
