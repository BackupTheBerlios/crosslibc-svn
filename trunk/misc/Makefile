CROSS=i586-elf
HOSTCC=gcc
CC=$(CROSS)-gcc
CFLAGS=
LDFLAGS=
PREFIX=/usr/local

all: crt0.o crt0-install clcfixelf

crt0.o: crt0.s
	$(CC) $(CFLAGS) -c crt0.s -o crt0.o

crt0-install: crt0.o
	mkdir -p $(PREFIX)/$(CROSS)/lib
	cp -f crt0.o $(PREFIX)/$(CROSS)/lib

clcfixelf: clcfixelf.c
	$(HOSTCC) $(CFLAGS) $(LDFLAGS) clcfixelf.c -o clcfixelf

install: crt0.o crt0-install clcfixelf
	mkdir -p $(PREFIX)/bin
	cp -f clcfixelf $(PREFIX)/bin

clean:
	rm -f *.o clcfixelf
