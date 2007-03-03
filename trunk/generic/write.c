#include <unistd.h>
#include "call.h"
DEF_GENERIC(ssize_t, write, int fd, const void *buf, size_t count)
{
    if (count == 0) return 0;
    if (fd < 0) {
        errno = EBADF;
        return -1;
    }
    if (buf == NULL) {
        errno = EINVAL;
        return -1;
    }
    CALL_GENERIC(write, -1, fd, buf, count)
}

