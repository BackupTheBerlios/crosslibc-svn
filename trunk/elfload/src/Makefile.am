bin_PROGRAMS = elfload
lib_LIBRARIES = libelfload.a
include_HEADERS = elfload.h elfload_elf.h elfload_exec.h

elfload_SOURCES = main.c
elfload_DEPENDENCIES = libelfload.a
elfload_LDADD = libelfload.a

if HAVE_LIBDL
    elfload_LDADD += -ldl
endif

libelfload_a_SOURCES = elfload.c
