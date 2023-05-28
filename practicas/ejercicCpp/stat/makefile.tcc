#
# Makefile for Borland's Turbo-C++ compiler
#
CC=tcc
#
# Flags 
#     	-N  -- Check for stack overflow
#	-v  -- Enable debugging
#	-w  -- Turn on all warnings
#	-ml -- Large model
#
CFLAGS=-N -v -w -ml
OBJS= stat.obj ch_type.obj token.obj

all: stat.out stat.exe

stat.out: stat.exe
	stat ..\calc3\calc3.cpp >stat.out

stat.exe: $(OBJS)
	$(CC) $(CCFLAGS) -estat $(OBJS)

stat.obj: stat.cpp token.h
	$(CC) $(CCFLAGS) -c stat.cpp

ch_type.obj: ch_type.cpp ch_type.h
	$(CC) $(CCFLAGS) -c ch_type.cpp

token.obj: token.cpp token.h ch_type.h
	$(CC) $(CCFLAGS) -c token.cpp


clean:
	erase stat.exe stat.obj ch_type.obj token.obj
