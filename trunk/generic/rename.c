#include "call.h"
DEF_GENERIC(int, rename, const char *oldpath, const char *newpath)
{
    if (!oldpath || !newpath) {
        errno = EINVAL;
        return -1;
    }
    CALL_GENERIC(rename, -1, oldpath, newpath)
}
