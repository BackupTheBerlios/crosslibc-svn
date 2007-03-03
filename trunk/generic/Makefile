CROSS=i586-elf
CC=$(CROSS)-gcc
CFLAGS=
PREFIX=/usr/local

all: inst-includes
	$(CC) $(CFLAGS) -c *.c

inst-includes:
	$(MAKE) -C include install
