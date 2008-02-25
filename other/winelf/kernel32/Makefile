CROSS=i686-win32elf-
CC=$(CROSS)gcc
LD=$(CROSS)ld
CFLAGS=-fPIC
LDFLAGS=-shared -soname=libhost_kernel32.dll

all: libkernel32.so

libkernel32.so:
	$(CC) $(CFLAGS) -c kernel32.c -o kernel32.o
	$(LD) $(LDFLAGS) kernel32.o -o libkernel32.so
