#
# Makefile for the Free Software Foundations g++ compiler
#
C_COMPILE=gcc
CFLAGS=-g -Wall
float3: float3.c
	$(C_COMPILE) $(CFLAGS) -o float3 float3.c

clean:
	rm float3
