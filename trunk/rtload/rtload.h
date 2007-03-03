/*
 * Copyright (c) 2007  Gregor Richards
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to
 * deal in the Software without restriction, including without limitation the
 * rights to use, copy, modify, merge, publish, distribute, sublicense, and/or
 * sell copies of the Software, and to permit persons to whom the Software is
 * furnished to do so.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
 * IN THE SOFTWARE.
 */

#ifndef RTLOAD_H
#define RTLOAD_H

#include <stdio.h>
#include <stdlib.h>

/* often-useful exact addresses */
extern int (*_xact_fprintf)(FILE *, const char *, ...);
extern void (*_xact_perror)(const char *);
extern void (*_xact_exit)(int);
extern void (*_xact_free)(void *);

/* Function type for binary-buffer-loader */
typedef void (*bbuffer_t)(void *, size_t);

/* Function type for binary-file-loader */
typedef void (*loader_t)(void *prog, size_t psz,
                         char *nm, int argc, char **argv, char **envp,
                         bbuffer_t bbuffer);

/* Necessary to avoid function calls  */
#define INLINE_MEMCPY(x, y, z) \
{ \
    int IMCI; \
    char *dest, *src; \
    dest = (char *) (x); \
    src = (char *) (y); \
    for (IMCI = 0; IMCI < (z); IMCI++) { \
        dest[IMCI] = src[IMCI]; \
    } \
}

#define INLINE_MEMZERO(x, y) \
{ \
    int IMCI; \
    char *dest; \
    dest = (char *) (x); \
    for (IMCI = 0; IMCI < (y); IMCI++) { \
        dest[IMCI] = 0; \
    } \
}

#endif
