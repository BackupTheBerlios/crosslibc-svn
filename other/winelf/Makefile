CROSS=i686-elf-
TARGET=i686-elf

PREFIX=/usr/local

CC=$(CROSS)gcc
CFLAGS=-g
AR=$(CROSS)ar
RANLIB=$(CROSS)ranlib

LIBC_OBJS=crt1.o kernel32.o msvcrt.o

all: crt0.o libc.a

libc.a: $(LIBC_OBJS)
	$(AR) rc libc.a $(LIBC_OBJS)
	$(RANLIB) libc.a

.SUFFIXES: .c .s .o

.c.o:
	$(CC) $(CFLAGS) -c $< -o $@

.s.o:
	$(CC) -c $< -o $@

install:
	mkdir -p $(PREFIX)/$(TARGET)/lib
	cp -f crt0.o libc.a $(PREFIX)/$(TARGET)/lib

clean:
	rm -f crt0.o libc.a $(LIBC_OBJS)
