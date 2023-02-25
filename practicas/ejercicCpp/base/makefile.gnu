#
# Makefile for the Free Software Foundations g++ compiler
#
CC=g++
CFLAGS=-g -Wall
all: base base2.o base3.o

base: base.cc
	$(CC) $(CFLAGS) -o base base.cc

base2.o: base2.cc
	@echo "This does not generate a full program"
	$(CC) $(CFLAGS) -c base2.cc

base3.o: base3.cc
	@echo "This does not generate a full program"
	$(CC) $(CFLAGS) -c base3.cc

clean:
	rm base base2.o base3.o
