CC=gcc
CFLAGS=
LDFLAGS=
SOFLAGS=-shared -soname=

TESTSTATIC_OBJS=teststatic.o
TESTHOST_OBJS=testhost.o
TESTSO_OBJS=testso.o
TESTDL_OBJS=testdl.o
LIBC_OBJS=libc_wrap.o

all: teststatic testhost testso.so testdl libc.so

teststatic: $(TESTSTATIC_OBJS)
	ld $(LDFLAGS) $(TESTSTATIC_OBJS) -o teststatic

testhost: $(TESTHOST_OBJS) testso.so
	ld $(LDFLAGS) $(TESTHOST_OBJS) testso.so -o testhost

testso.so: $(TESTSO_OBJS)
	ld $(LDFLAGS) $(TESTSO_OBJS) $(SOFLAGS)testso.so -o testso.so

testdl: libc.so $(TESTDL_OBJS)
	ld $(LDFLAGS) $(TESTDL_OBJS) libc.so -o testdl

libc.so: $(LIBC_OBJS)
	ld $(LDFLAGS) $(LIBC_OBJS) $(SOFLAGS)libhost_libc.so.6 -o libc.so

.s.o:
	$(CC) $(CFLAGS) -c $< -o $@

.c.o:
	$(CC) $(CFLAGS) -fPIC -c $< -o $@

clean:
	rm -f teststatic $(TESTSTATIC_OBJS)
	rm -f testhost $(TESTHOST_OBJS)
	rm -f testso.so $(TESTSO_OBJS)
	rm -f testdl $(TESTDL_OBJS)
	rm -f libc.so $(LIBC_OBJS)
