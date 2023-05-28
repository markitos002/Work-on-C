#
# Makefile for the Free Software Foundations g++ compiler
#
CC=g++
CFLAGS=-g -Wall
all: search0 search1 search2 search3 search4

search0: search0.cc
	$(CC) -Wall -g -o search0 search0.cc

search1: search1.cc
	$(CC) -Wall -g -o search1 search1.cc

search2: search2.cc
	$(CC) -Wall -g -o search2 search2.cc

search3: search3.cc
	$(CC) -Wall -g -o search3 search3.cc

search4: search4.cc
	$(CC) -Wall -g -o search4 search4.cc


clean:
	rm search0 search1 search2 search3 search4
