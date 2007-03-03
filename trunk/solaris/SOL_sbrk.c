#include <unistd.h>

#include "stub.h"

extern void *SOL_curbrk; /* in SOL_brk.c */

int SOL_sys_brk(void *end_data_segment);
void *SOL_sbrk(ptrdiff_t increment)
{
    /* SOL_brk actually returns the current break if you pass NULL */
    void *oldbrk, *newbrk;
    
    if (!SOL_curbrk) SOL_curbrk = (void *) SOL_sys_brk(NULL);
    oldbrk = SOL_curbrk;
    newbrk = oldbrk + increment;
    
    if ((void *) SOL_sys_brk(newbrk) != newbrk) {
        return (void *) -1;
    }
    
    return oldbrk;
}

