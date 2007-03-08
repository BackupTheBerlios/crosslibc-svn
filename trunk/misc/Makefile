CROSS=i586-elf
HOSTCC=gcc
CC=$(CROSS)-gcc
CFLAGS=
LDFLAGS=
PREFIX=/usr/local

all: crt0.o crtn.o specs clcfixelf

crt0.o: crt0.s
	$(CC) $(CFLAGS) -c crt0.s -o crt0.o

crt0-install: crt0.o
	mkdir -p $(PREFIX)/$(CROSS)/lib
	cp -f crt0.o $(PREFIX)/$(CROSS)/lib

crtn.o: crtn.s
	$(CC) $(CFLAGS) -c crtn.s -o crtn.o

crtn-install: crtn.o
	mkdir -p $(PREFIX)/$(CROSS)/lib
	cp -f crtn.o $(PREFIX)/$(CROSS)/lib

specs: fixspecs
	./fixspecs $(CROSS)

fixspecs: fixspecs.c
	$(HOSTCC) $(CFLAGS) $(LDFLAGS) fixspecs.c -o fixspecs

specs-install: specs
	cp -f specs $(PREFIX)/lib/gcc/$(CROSS)/`$(CC) -dumpversion`/specs

clcfixelf: clcfixelf.c
	$(HOSTCC) $(CFLAGS) $(LDFLAGS) clcfixelf.c -o clcfixelf

clcfixelf-install: clcfixelf
	mkdir -p $(PREFIX)/bin
	cp -f clcfixelf $(PREFIX)/bin

install: all crt0-install crtn-install specs-install clcfixelf-install specs-install

clean:
	rm -f *.o clcfixelf
