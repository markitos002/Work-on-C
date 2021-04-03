#
# Makefile for the Free Software Foundations g++ compiler
#
CC=g++
CFLAGS=-g -Wall
all: stack_c stack_d1.o stackex1

stack_d1.o: stack_d1.cc
	$(CC) $(CFLAGS) -c stack_d1.cc

stackex1: stackex1.cc
	@echo "Warning: Some compilers doesn't handle exceptions yet"
	@echo "  So this program may not compile"
	-$(CC) $(CFLAGS) -o stackex1 stackex1.cc

stack_c: stack_c.cc
	$(CC) $(CFLAGS) -o stack_c stack_c.cc

clean:
	rm stack_c stack_d1.o stackex1
