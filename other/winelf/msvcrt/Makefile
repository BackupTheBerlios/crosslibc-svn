CROSS=i686-win32elf-
CC=$(CROSS)gcc
LD=$(CROSS)ld
CFLAGS=-fPIC
LDFLAGS=-shared -soname=libhost_msvcrt.dll

all: libmsvcrt.so

libmsvcrt.so:
	$(CC) $(CFLAGS) -c msvcrt.c -o msvcrt.o
	$(LD) $(LDFLAGS) msvcrt.o -o libmsvcrt.so
