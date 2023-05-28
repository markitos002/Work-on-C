#
# Makefile for the Free Software Foundations g++ compiler
#
CC=g++
CFLAGS=-g -Wall
virt: virt.cc
	$(CC) -Wall -g -o virt virt.cc

clean:
	rm virt
