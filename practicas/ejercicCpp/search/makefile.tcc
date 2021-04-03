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
all: search0.exe search1.exe search2.exe search3.exe search4.exe

search0.exe: search0.cpp
	$(CC) $(CFLAGS) -esearch0 search0.cpp

search1.exe: search1.cpp
	$(CC) $(CFLAGS) -esearch1 search1.cpp

search2.exe: search2.cpp
	$(CC) $(CFLAGS) -esearch2 search2.cpp

search3.exe: search3.cpp
	$(CC) $(CFLAGS) -esearch3 search3.cpp

search4.exe: search4.cpp
	$(CC) $(CFLAGS) -esearch4 search4.cpp


clean:
	erase search0.exe search1.exe search2.exe search3.exe search4.exe
