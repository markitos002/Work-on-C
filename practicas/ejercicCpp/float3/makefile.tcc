#
# Makefile for Borland's Turbo-C++ compiler
#
C_COMPILE=tcc
#
# Flags 
#     	-N  -- Check for stack overflow
#	-v  -- Enable debugging
#	-w  -- Turn on all warnings
#	-ml -- Large model
#
CFLAGS=-N -v -w -ml
float3.exe: float3.c
	$(C_COMPILE) $(CFLAGS) -efloat3 float3.c

clean:
	erase float3.exe
