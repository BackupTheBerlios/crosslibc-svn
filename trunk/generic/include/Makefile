CROSS=i586-elf
CC=$(CROSS)-gcc
CFLAGS=
PREFIX=/usr/local

install:
	mkdir -p $(PREFIX)/$(CROSS)/include/sys
	cp -f ../../../newlib/newlib/libc/include/sys/types.h \
		$(PREFIX)/$(CROSS)/include/sys
	cat clc_types.h >> $(PREFIX)/$(CROSS)/include/sys/types.h
	cp -f ../../../newlib/newlib/libc/include/unistd.h \
		$(PREFIX)/$(CROSS)/include
	cat clc_unistd.h >> $(PREFIX)/$(CROSS)/include/unistd.h
	cp -f ../../../newlib/newlib/libc/sys/sysvi386/sys/termios.h \
		$(PREFIX)/$(CROSS)/include/sys
	cat clc_termios.h >> $(PREFIX)/$(CROSS)/include/sys/termios.h
