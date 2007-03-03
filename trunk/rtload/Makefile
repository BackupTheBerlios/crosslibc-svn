CC=gcc
CFLAGS=-g
LDFLAGS=
EXEEXT=

RTLOAD_OBJS=rtload.o ldaout.o ldelf.o bbuffer.o

all: rtload$(EXEEXT)

rtload$(EXEEXT): $(RTLOAD_OBJS)
	$(CC) $(CFLAGS) $(LDFLAGS) $(RTLOAD_OBJS) -o rtload$(EXEEXT)

.SUFFIXES: .c .o

.c.o:
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f rtload$(EXEEXT) $(RTLOAD_OBJS)
