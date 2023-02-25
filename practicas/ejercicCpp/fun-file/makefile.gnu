#
# Makefile for the Free Software Foundations g++ compiler
#
C_COMPILE=gcc
CFLAGS=-g -Wall
fun-file: fun-file.c
	$(C_COMPILE) $(CFLAGS) -o fun-file fun-file.c

clean:
	rm fun-file
