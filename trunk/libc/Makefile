CROSS=i586-elf
AR=$(CROSS)-ar
RANLIB=$(CROSS)-ranlib
PREFIX=/usr/local

all: libc.a libg.a

libc.a:
	rm -f *.o
	$(AR) x ../../newlib/newlib/libc/libc.a
	$(AR) x ../../newlib/newlib/libm/libm.a
	$(AR) rc libc.a *.o ../generic/*.o \
		../bsd/*.o \
		../linux/*.o \
		../solaris/*.o \
		../uwin/*.o
	$(RANLIB) libc.a
	rm -f *.o

libg.a:
	$(AR) rc libg.a
	$(RANLIB) libg.a

install: all
	mkdir -p $(PREFIX)/$(CROSS)/lib
	cp -f libc.a $(PREFIX)/$(CROSS)/lib
	rm -f $(PREFIX)/$(CROSS)/lib/libm.a
	$(AR) rc $(PREFIX)/$(CROSS)/lib/libm.a
