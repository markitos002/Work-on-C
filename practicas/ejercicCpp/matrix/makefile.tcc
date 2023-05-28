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
all: matrix1.obj matrix2.obj matrix3.obj matrix4.obj \
     matrix5.obj matrix6.obj matrix7.obj matrix8.obj matrix9.obj

matrix1.obj: matrix1.cpp
	@echo "These commands generate object files only"
	$(CC) $(CFLAGS) -c matrix1.cpp
 
matrix2.obj: matrix2.cpp
	$(CC) $(CFLAGS) -c matrix2.cpp
 
matrix3.obj: matrix3.cpp
	$(CC) $(CFLAGS) -c matrix3.cpp
 
matrix4.obj: matrix4.cpp
	$(CC) $(CFLAGS) -c matrix4.cpp
 
matrix5.obj: matrix5.cpp
	$(CC) $(CFLAGS) -c matrix5.cpp
 
matrix6.obj: matrix6.cpp
	$(CC) $(CFLAGS) -c matrix6.cpp
 
matrix7.obj: matrix7.cpp
	$(CC) $(CFLAGS) -c matrix7.cpp
 
matrix8.obj: matrix8.cpp
	@echo "The following compile generates a warning"
	$(CC) $(CFLAGS) -c matrix8.cpp
 
matrix9.obj: matrix9.cpp
	@echo "The following compile generates a warning"
	$(CC) $(CFLAGS) -c matrix9.cpp

clean:
	erase matrix?.obj
