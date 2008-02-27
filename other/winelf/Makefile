TARGET=i686-win32elf

PREFIX=/usr/local

CC=$(TARGET)-gcc
HOSTCC=gcc
EXEEXT=
CFLAGS=
LDFLAGS=
SOFLAGS=-shared -Wl,-soname=
AR=$(TARGET)-ar
RANLIB=$(TARGET)-ranlib

LIBC_OBJS=$(MSVCRT_OBJS) $(KERNEL32_OBJS) $(USER32_OBJS)

all: msvcrt/libmsvcrt.so kernel32/libkernel32.so user32/libuser32.so \
     libdl.so libm.a \
     crt0.o crt1.o crti.o crtn.o \
     mingwex/libmingwex.a \
     elfimplib$(EXEEXT)

msvcrt/libmsvcrt.so:
	cd msvcrt ; \
	$(MAKE) CC=$(CC)

kernel32/libkernel32.so:
	cd kernel32 ; \
	$(MAKE) CC=$(CC)

user32/libuser32.so:
	cd user32 ; \
	$(MAKE) CC=$(CC)

libdl.so:
	$(CC) $(CFLAGS) $(LDFLAGS) $(SOFLAGS)libloader_dl.0 -nostdlib -o libdl.so dlfcn.c

libm.a:
	$(AR) rc libm.a
	$(RANLIB) libm.a

mingwex/libmingwex.a:
	cd mingwex ; \
	CC=$(CC) AR=$(AR) RANLIB=$(RANLIB) ./configure --build=`./config.guess` --host=$(TARGET) ; \
	$(MAKE)

elfimplib$(EXEEXT): elfimplib.c
	$(HOSTCC) elfimplib.c -o elfimplib$(EXEEXT)

.SUFFIXES: .c .s .o

.c.o:
	$(CC) $(CFLAGS) -c $< -o $@

.s.o:
	$(CC) -c $< -o $@

install:
	mkdir -p $(PREFIX)/$(TARGET)/lib
	mkdir -p $(PREFIX)/$(TARGET)/include
	mkdir -p $(PREFIX)/bin
	cp -f crt0.o crt1.o crti.o crtn.o libc.so msvcrt/libmsvcrt.so \
	    kernel32/libkernel32.so user32/libuser32.so \
	    libdl.so libm.a mingwex/libmingwex.a \
	    $(PREFIX)/$(TARGET)/lib
	cp -f elfimplib$(EXEEXT) $(PREFIX)/bin
	cp -Rf include/* $(PREFIX)/$(TARGET)/include
	$(AR) rc $(PREFIX)/$(TARGET)/lib/libg.a
	$(RANLIB) $(PREFIX)/$(TARGET)/lib/libg.a

clean:
	rm -f crt0.o crt1.o crti.o crtn.o libc.a $(LIBC_OBJS)
	rm -f elfimplib$(EXEEXT)
	rm -f libdl.so libm.a
	cd mingwex ; make distclean
