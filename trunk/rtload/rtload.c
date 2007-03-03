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

#include <errno.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

#ifdef __WIN32
#include <malloc.h>
#else
#include <alloca.h>
#endif

#include "rtload.h"

/* often-useful exact addresses */
int (*_xact_fprintf)(FILE *, const char *, ...) = fprintf;
void (*_xact_perror)(const char *) = perror;
void (*_xact_exit)(int) = exit;
void (*_xact_free)(void *) = free;

/* Load in support for arbitrary binary buffers */
#include "bbuffer.h"

/* loaders */
#include "ldaout.h"
#include "ldelf.h"

int rtload(int argc, char **argv, char **envp);

int main(int argc, char **argv, char **envp)
{
    /* just put argv on the stack, then call the real loader */
    int i;
    char *cptr;
    void **passargs;
    
    argc--;
    argv++;
    
    for (i = 0; envp[i]; i++) {
        cptr = (char *) alloca(strlen(envp[i]) + 1);
        if (!cptr) {
            perror("alloca");
            return 1;
        }
        strcpy(cptr, envp[i]);
        envp[i] = cptr;
    }
    
    for (i = 0; i < argc; i++) {
        cptr = (char *) alloca(strlen(argv[i]) + 1);
        if (!cptr) {
            perror("alloca");
            return 1;
        }
        strcpy(cptr, argv[i]);
        argv[i] = cptr;
    }
    
    /* push it all on in the expected way */
    for (i = 0; envp[i]; i++);
    passargs = (void **) alloca((i + argc + 2) * sizeof(void *));
    
    passargs[0] = (void *) argc;
    for (i = 0; i <= argc; i++) {
        passargs[i + 1] = argv[i];
    }
    for (i = 0; envp[i]; i++) {
        passargs[i + argc + 2] = envp[i];
    }
    passargs[i + argc + 2] = NULL;
    
    return rtload(argc, argv, envp);
}

int rtload(int argc, char **argv, char **envp)
{
    void *prog;
    loader_t ldr, origldr;
    bbuffer_t bbf;
    size_t pread, ldrsz, bbfsz;
    FILE *progf;
    struct stat sbuf;
    
    if (argc < 1) {
        fprintf(stderr, "Use: rtload <binary> [arguments]\n");
        return 1;
    }
    
    /* Check the size */
    if (stat(argv[0], &sbuf) != 0) {
        perror(argv[0]);
        return 1;
    }
    
    /* Make the buffer */
    prog = alloca(sbuf.st_size);
    if (prog == NULL) {
        perror("alloca");
        return 1;
    }
    
    /* Load it in */
    progf = fopen(argv[0], "rb");
    if (progf == NULL) {
        perror(argv[0]);
        return 1;
    }
    
    pread = fread(prog, 1, sbuf.st_size, progf);
    if (pread < sbuf.st_size) {
        if (ferror(progf)) {
            perror(argv[0]);
        } else {
            fprintf(stderr, "Failed to read %s.\n", argv[0]);
        }
        return 1;
    }
    
    fclose(progf);
    
    /* copy bbuffer into the stack, so it won't be clobbered */
    bbfsz = bbufferEnd - bbuffer;
    bbf = (bbuffer_t) alloca(bbfsz);
    if (bbf == NULL) {
        perror("alloca");
        return 1;
    }
    memcpy(bbf, bbuffer, bbfsz);
    
    /* choose a loader */
    if (isELF(prog, pread)) {
        origldr = loadELF;
        ldrsz = loadELFEnd - loadELF;
    } else if (isAOut(prog, pread)) {
        origldr = loadAOut;
        ldrsz = loadAOutEnd - loadAOut;
    } else {
        fprintf(stderr, "%s is of an unrecognized type.\n", argv[0]);
        return 1;
    }
    
    /* copy the loader into the stack, so it won't be clobbered */
    ldr = (loader_t) alloca(ldrsz);
    if (ldr == NULL) {
        perror("alloca");
        return 1;
    }
    memcpy(ldr, origldr, ldrsz);
    
    /* call the loader */
    ldr(prog, pread, argv[0],
        argc, argv, envp,
        bbf);
}
