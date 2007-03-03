#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>

#include "SOL.h"

int SOL_open(const char *pathname, int flags, mode_t mode)
{
    /* O_CREAT = 0x0200 in newlib, should be 0x0100 */
    if (flags & 0x0200) {
        flags &= ~0x0200;
        flags |= 0x0100;
    }
    SOL_INTERRUPT3(0x5)
}
