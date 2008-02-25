CROSS=i686-win32elf-
CC=$(CROSS)gcc
LD=$(CROSS)ld
CFLAGS=-fPIC
LDFLAGS=-shared -soname=libhost_user32.dll

all: libuser32.so

libuser32.so:
	$(CC) $(CFLAGS) -c user32.c -o user32.o
	$(LD) $(LDFLAGS) user32.o -o libuser32.so
