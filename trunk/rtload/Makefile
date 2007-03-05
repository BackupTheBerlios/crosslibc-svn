CC=gcc
CFLAGS=-g
LDFLAGS=
EXEEXT=

FORMATS=-DRTLOAD_STATICELF -DRTLOAD_AOUT

RTLOAD_OBJS=rtload.o ldrs.o bbuffer.o

all: rtload$(EXEEXT)

rtload$(EXEEXT): $(RTLOAD_OBJS)
	$(CC) $(CFLAGS) $(LDFLAGS) $(RTLOAD_OBJS) -o rtload$(EXEEXT)

.SUFFIXES: .c .o

.c.o:
	$(CC) $(CFLAGS) $(FORMATS) -c $< -o $@

clean:
	rm -f rtload$(EXEEXT) $(RTLOAD_OBJS)
