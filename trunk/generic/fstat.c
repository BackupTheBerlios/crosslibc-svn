#include <errno.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include "call.h"

DEF_GENERIC(int, fstat, int filedes, struct stat *buf)
{
    if (filedes < 0) {
        errno = EBADF;
        return -1;
    }
    if (buf == NULL) {
        errno = EINVAL;
        return -1;
    }
    CALL_GENERIC(fstat, -1, filedes, buf)
}
