#
# Makefile for the Free Software Foundations g++ compiler
#
CC=g++
CFLAGS=-g -Wall
all: xgets.o xgets2.o

xgets.o: xgets.cc
	@echo "The following does not generate a full program"
	$(CC) -c $(CFLAGS) xgets.cc

xgets2.o: xgets2.cc
	@echo "The following does not generate a full program"
	$(CC) -c $(CFLAGS) xgets2.cc

clean:
	rm xgets.o xgets2.o
