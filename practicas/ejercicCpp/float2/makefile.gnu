#
# Makefile for the Free Software Foundations g++ compiler
#
CC=g++
CFLAGS=-g -Wall
all: float2

float2: float2.cc
	$(CC) $(CFLAGS) -o float2 float2.cc

clean:
	rm float2
