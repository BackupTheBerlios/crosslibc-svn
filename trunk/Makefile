CROSS=i586-elf
CC=$(CROSS)-gcc
AS=$(CROSS)-as
AR=$(CROSS)-ar
RANLIB=$(CROSS)-ranlib
CFLAGS=
PREFIX=/usr/local

all: misc-all newlib
	$(MAKE) -C generic all
	$(MAKE) -C bsd all
	$(MAKE) -C linux all
	$(MAKE) -C solaris all
	$(MAKE) -C uwin all
	$(MAKE) -C libc all

misc-all:
	$(MAKE) -C misc all
	$(MAKE) -C misc install

install: all
	$(MAKE) -C libc install

clean:
	rm -f *.o */*.o libc/libc.a
	make -C misc clean
	make -C ../newlib/newlib/libc clean
	make -C ../newlib/newlib/libm clean

newlib:
	if [ ! -e ../newlib/newlib/libc/libc.a ] ; then \
		cd ../newlib/newlib/libc ; \
		cp -af include $(PREFIX)/$(CROSS) ; \
		rm -f config.cache ; \
		CC="$(CC)" \
		AS="$(AS)" \
		AR="$(AR)" \
		RANLIB="$(RANLIB)" \
		./configure --prefix=$(PREFIX)/$(CROSS) \
		--build=`../../config.guess` --host=$(CROSS) ; \
		$(MAKE) AR_FLAGS=rc || exit 1 ; \
		cd ../libm ; \
		rm -f config.cache ; \
		CC="$(CC)" \
		AS="$(AS)" \
		AR="$(AR)" \
		RANLIB="$(RANLIB)" \
		./configure --prefix=$(PREFIX)/$(CROSS) \
		--build=`../../config.guess` --host=$(CROSS) ; \
		$(MAKE) AR_FLAGS=rc || exit 1 ; \
	fi
