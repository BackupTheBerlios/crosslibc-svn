#include <unistd.h>

#include "stub.h"

extern void *BSD_curbrk; /* in BSD_brk.c */

int BSD_sys_brk(void *end_data_segment);
void *BSD_sbrk(ptrdiff_t increment)
{
    /* BSD_brk actually returns the current break if you pass NULL */
    void *oldbrk, *newbrk;
    
    if (!BSD_curbrk) BSD_curbrk = (void *) BSD_sys_brk(NULL);
    oldbrk = BSD_curbrk;
    newbrk = oldbrk + increment;
    
    if ((void *) BSD_sys_brk(newbrk) != newbrk) {
        return (void *) -1;
    }
    
    return oldbrk;
}

