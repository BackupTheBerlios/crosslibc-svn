#include <stddef.h>

#include "LINUX.h"
void *LINUX_curbrk = NULL;

int LINUX_sys_brk(void *end_data_segment)
{
    LINUX_INTERRUPT1(0x2d)
}

int LINUX_brk(void *end_data_segment)
{
    /* the brk syscall actually returns the new break */
    if ((void *) LINUX_sys_brk(end_data_segment) != end_data_segment) {
        return -1;
    }
    LINUX_curbrk = end_data_segment;
    return 0;
}
