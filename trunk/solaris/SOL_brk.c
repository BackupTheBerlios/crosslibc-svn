#include <stddef.h>

#include "SOL.h"
void *SOL_curbrk = NULL;

int SOL_sys_brk(void *end_data_segment)
{
    SOL_INTERRUPT1(0x11)
}

int SOL_brk(void *end_data_segment)
{
    /* the brk syscall actually returns the new break */
    if ((void *) SOL_sys_brk(end_data_segment) != end_data_segment) {
        return -1;
    }
    SOL_curbrk = end_data_segment;
    return 0;
}
