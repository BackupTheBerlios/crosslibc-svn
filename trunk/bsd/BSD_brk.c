#include <stddef.h>

#include "BSD.h"
void *BSD_curbrk = NULL;

int BSD_sys_brk(void *end_data_segment)
{
    BSD_INTERRUPT1(0x11)
}

int BSD_brk(void *end_data_segment)
{
    /* the brk syscall actually returns the new break */
    if ((void *) BSD_sys_brk(end_data_segment) != end_data_segment) {
        return -1;
    }
    BSD_curbrk = end_data_segment;
    return 0;
}
