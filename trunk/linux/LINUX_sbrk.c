#include <unistd.h>

#include "stub.h"

extern void *LINUX_curbrk; /* in LINUX_brk.c */

int LINUX_sys_brk(void *end_data_segment);
void *LINUX_sbrk(ptrdiff_t increment)
{
    /* LINUX_brk actually returns the current break if you pass NULL */
    void *oldbrk, *newbrk;
    
    if (!LINUX_curbrk) LINUX_curbrk = (void *) LINUX_sys_brk(NULL);
    oldbrk = LINUX_curbrk;
    newbrk = oldbrk + increment;
    
    if ((void *) LINUX_sys_brk(newbrk) != newbrk) {
        return (void *) -1;
    }
    
    return oldbrk;
}

