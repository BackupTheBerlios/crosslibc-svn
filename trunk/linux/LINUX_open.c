#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>

#include "LINUX.h"

int LINUX_open(const char *pathname, int flags, mode_t mode)
{
    /* O_CREAT = 0x0200 in newlib, should be 0x40 */
    if (flags & 0x0200) {
        flags &= ~0x0200;
        flags |= 0x40;
    }
    LINUX_INTERRUPT3(0x5)
}
