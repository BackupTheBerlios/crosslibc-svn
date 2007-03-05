/* Find some means of using an arbitrary pointer as a binary buffer - usually
 * mmap */

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

#include <sys/types.h>
#include <unistd.h>

#include "bbuffer.h"

#if _POSIX_MAPPED_FILES

#include <sys/mman.h>

void  *(*_xact_mmap)(void *, size_t, int, int, int,
                     off_t) = mmap;

#if __i386__ && linux

#define INLINE_MMAP(ret, buf, sz, prot, flags, fd, offset) \
{ \
    asm( \
         "push %%ebp;\n" \
         "subl $24, %%esp;\n" /* get space for the call */ \
         \
         "movl %1, %%eax;\n" \
         "movl %%eax, (%%esp);\n" /* buf */ \
         \
         "movl %2, %%eax;\n" \
         "movl %%eax, 4(%%esp);\n" /* sz */ \
         \
         "movl %3, %%eax;\n" \
         "movl %%eax, 8(%%esp);\n" /* prot */ \
         \
         "movl %4, %%eax;\n" \
         "movl %%eax, 12(%%esp);\n" /* flags */ \
         \
         "movl %5, %%eax;\n" \
         "movl %%eax, 16(%%esp);\n" /* fd */ \
         \
         "movl %6, %%eax;\n" \
         "movl %%eax, 20(%%esp);\n" /* offset */ \
         \
         "movl %%esp, %%ebp;\n" /* save stack pointer */ \
         \
         "movl $90, %%eax;\n" \
         "movl %%esp, %%ebx;\n" \
         "int $0x80;\n" /* call mmap */ \
         \
         "movl %%ebp, %%esp;\n" \
         "addl $24, %%esp;\n" \
         "pop %%ebp;\n" /* get things back to normal */ \
         \
         "movl %%eax, %0;\n" /* save result */ \
         : "=g"(ret) \
         : "g"(buf), "g"(sz), "g"(prot), "g"(flags), "g"(fd), "g"(offset) \
         : "eax", "ebx"); \
}


#elif __i386__ && ( __FreeBSD__ || __OpenBSD__ || __NetBSD__ || BSD || \
                   __APPLE__ )

#define INLINE_MMAP(ret, buf, sz, prot, flags, fd, offset) \
{ \
    asm( \
         "push %%ebp;\n" \
         "subl $32, %%esp;\n" /* get space for the call */ \
         \
         "movl %1, %%eax;\n" \
         "movl %%eax, 4(%%esp);\n" /* buf */ \
         \
         "movl %2, %%eax;\n" \
         "movl %%eax, 8(%%esp);\n" /* sz */ \
         \
         "movl %3, %%eax;\n" \
         "movl %%eax, 12(%%esp);\n" /* prot */ \
         \
         "movl %4, %%eax;\n" \
         "movl %%eax, 16(%%esp);\n" /* flags */ \
         \
         "movl %5, %%eax;\n" \
         "movl %%eax, 20(%%esp);\n" /* fd */ \
         \
         "movl $0, 24(%%esp);\n" \
         "movl %6, %%eax;\n" \
         "movl %%eax, 28(%%esp);\n" /* offset */ \
         \
         "movl %%esp, %%ebp;\n" /* save stack pointer */ \
         \
         "movl $197, %%eax;\n" \
         "int $0x80;\n" /* call mmap */ \
         \
         "movl %%ebp, %%esp;\n" \
         "addl $32, %%esp;\n" \
         "pop %%ebp;\n" /* get things back to normal */ \
         \
         "movl %%eax, %0;\n" /* save result */ \
         : "=g"(ret) \
         : "g"(buf), "g"(sz), "g"(prot), "g"(flags), "g"(fd), "g"(offset) \
         : "eax", "ebx"); \
}


#endif


void bbuffer(void *buf, size_t sz)
{
    ssize_t ret;
    
    /* make sure buf is on the page boundary (assumed to be 4096) */
    ret = (ssize_t) buf % 4096;
    if (ret) {
        sz += ret;
        buf -= ret;
    }
    
    /* then make sure sz is also aligned */
    ret = (ssize_t) sz % 4096;
    if (ret) {
        sz += (4096 - ret);
    }
    
#ifdef INLINE_MMAP
    INLINE_MMAP(ret, buf, sz,
                PROT_READ|PROT_WRITE|PROT_EXEC,
                MAP_FIXED|MAP_PRIVATE|MAP_ANON,
                -1, 0);
    if (ret != (ssize_t) buf) {
        _xact_fprintf(stderr, "Error in mmap: %d\n", -((int) ret));
        _xact_exit(1);
    }
#else
    if (_xact_mmap(buf, sz,
                   PROT_READ|PROT_WRITE|PROT_EXEC,
                   MAP_FIXED|MAP_PRIVATE|MAP_ANON,
                   -1, 0) == MAP_FAILED) {
        _xact_perror("mmap");
        _xact_exit(1);
    }
#endif
}
void bbufferEnd() {}


#elif __WIN32

#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif
#include <windows.h>

#include <malloc.h>

void *(*_xact_malloc)(size_t) = malloc;

WINBASEAPI PVOID WINAPI (*_xact_VirtualAlloc)(PVOID,DWORD,DWORD,DWORD) =
        VirtualAlloc;

WINBASEAPI DWORD WINAPI (*_xact_VirtualQuery)(LPCVOID,
        PMEMORY_BASIC_INFORMATION,DWORD) = VirtualQuery;

WINBASEAPI BOOL WINAPI (*_xact_UnmapViewOfFile)(PVOID) = UnmapViewOfFile;

WINBASEAPI BOOL WINAPI (*_xact_VirtualFree)(PVOID,DWORD,DWORD) = VirtualFree;

WINBASEAPI BOOL WINAPI (*_xact_VirtualProtect)(PVOID,DWORD,DWORD,PDWORD) =
        VirtualProtect;

WINBASEAPI BOOL WINAPI (*_xact_HeapDestroy)(HANDLE) = HeapDestroy;

WINBASEAPI HANDLE WINAPI (*_xact_GetProcessHeap)(VOID) = GetProcessHeap;

WINBASEAPI VOID WINAPI (*_xact_GetSystemInfo)(LPSYSTEM_INFO) = GetSystemInfo;

WINBASEAPI DWORD WINAPI (*_xact_GetLastError)() = GetLastError;

int (*_xact_getchar)() = getchar;

/* allocate a huge buffer to take the low memory area */
/* #define LOWMEM_RESERVE 0x2EE00000 */
#define LOWMEM_RESERVE 0x6400000
char lowmem[LOWMEM_RESERVE];

void bbuffer(void *buf, size_t sz)
{
    void *allocd, *q, *min, *max;
    SYSTEM_INFO si;
    MEMORY_BASIC_INFORMATION mbi;
    size_t agrn, sti;
    off_t ret;

    /* get the allocation granularity */
    _xact_GetSystemInfo(&si);
    agrn = si.dwAllocationGranularity;
    
    /* make sure buf is on the allocation granularity */
    ret = (off_t) buf % agrn;
    if (ret) {
        sz += ret;
        buf -= ret;
    }
    
    /* then make sure sz is also aligned */
    ret = (off_t) sz % agrn;
    if (ret) {
        sz += (agrn - ret);
    }

    /* it's possible we already have this free - check */
    if (buf >= (void *) lowmem &&
        buf + sz < (void *) lowmem + LOWMEM_RESERVE) {
        /* already reserved! :) */
        return;
    }

    /* free everything */
    for (q = buf; q < buf + sz; q += agrn) {
        if (_xact_VirtualQuery(q, &mbi, agrn) >= sizeof(mbi)) {
            if (mbi.State != MEM_FREE) {
                /* get rid of it */
                if (mbi.Type & MEM_IMAGE)
                    _xact_UnmapViewOfFile(mbi.AllocationBase);
                _xact_VirtualFree(mbi.AllocationBase, 0, MEM_RELEASE);
            }
        }
    }
    
    /* then allocate */
    allocd = _xact_VirtualAlloc(buf, sz, MEM_RESERVE|MEM_COMMIT,
            PAGE_EXECUTE_READWRITE);
    if (allocd == NULL) {
        _xact_fprintf(stderr, "VirtualAlloc failed with error %d\n",
                _xact_GetLastError());
        _xact_exit(1);
    }
}

void bbufferEnd() {}


#else

/* assume we can write anywhere :) */
void bbuffer(void *buf, size_t sz) {}
void bbufferEnd() {}

#endif
